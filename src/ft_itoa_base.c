/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 19:54:29 by srolland          #+#    #+#             */
/*   Updated: 2019/02/26 19:42:46 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	digits(intmax_t n, int base)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char			*ft_itoa_base(intmax_t n, t_xren x, char sign, int base)
{
	char		pms;
	char		*str;
	uintmax_t	nb;
	int			len;

	pms = (n < 0 || sign) ? 1 : 0;
	len = digits(n, base);
	len = (len < x.prec) ? x.prec : len;
	if (!(x.flags & 4) && (x.flags & 2) && len < (int)(x.width) - pms)
	{
		len = (int)(x.width) - pms;
		len = (x.prec > 0) ? x.prec : len;
	}
	nb = n < 0 ? -n : n;
	sign = (n < 0) ? '-' : sign;
	if ((str = ft_memmalloc(len + pms + 1)) == NULL)
		return (NULL);
	str[0] = sign;
	while (len > 0)
	{
		str[len-- + pms - 1] = nb % base < 10 ?
			(nb % base) + 48 : (nb % base) + 55;
		nb /= base;
	}
	return (str);
}
