/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:25:27 by srolland          #+#    #+#             */
/*   Updated: 2019/02/23 20:29:40 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	udigits(uintmax_t n, unsigned int base)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char			*ft_uitoa_base(uintmax_t n, unsigned int base,
		const char *digits, size_t prec)
{
	char	*str;
	size_t	len;

	len = udigits(n, base);
	len = (len < prec) ? prec : len;
	if (!(str = ft_memmalloc(len + 1)))
		return (NULL);
	while (len > 0)
	{
		str[len-- - 1] = digits[n % base];
		n /= base;
	}
	return (str);
}
