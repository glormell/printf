/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:03:08 by srolland          #+#    #+#             */
/*   Updated: 2019/02/24 21:35:54 by myname           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			on_the_drive_home(t_xren x, va_list args)
{
	int		ret;
	int		cher;
	char	wdth;

	ret = 0;
	wdth = (x.flags & 2) ? '0' : ' ';
	cher = va_arg(args, int);
	if ((x.flags & 4) == 0 && x.width > 1)
		ret += and_your_husbands_in_jail(wdth, x.width - 1);
	ret += nobody_likes_you((char *)&cher, 1);
	if ((x.flags & 4) != 0 && x.width > 1)
		ret += and_your_husbands_in_jail(' ', x.width - 1);
	return (ret);
}

static void	i_said_i_was_the_cops(t_xren x, int *pref_len, char **prefix)
{
	if ((!(x.flags & 1) ||
				(x.value && *(uintmax_t *)x.value == 0))
			&& !((x.flags & 1) && (x.type == 'o' || x.type == 'O'))
			&& !(x.type == 'p'))
		return ;
	if (x.type == 'x' || x.type == 'X' || x.type == 'p')
	{
		*pref_len = 2;
		*prefix = (x.type == 'X') ? "0X" : "0x";
	}
	if (x.type == 'o' || x.type == 'O')
	{
		*pref_len = 1;
		*prefix = "0";
	}
}

int			then_later_on(t_xren x, va_list args)
{
	char	*str;
	size_t	len;
	int		ret;

	ret = 0;
	if (!(str = va_arg(args, char *)))
		str = "(null)";
	len = ft_strlen(str, INT_MAX);
	if (x.prec == -1)
		x.prec = INT_MAX;
	if (x.prec > (int)len)
		x.prec = len;
	ret += from_a_pay_phone(x, str, x.prec, 0);
	return (ret);
}

int			from_a_pay_phone(t_xren x, const char *str,
		size_t len, int wadu_hek)
{
	int		ret;
	char	*prefix;
	char	c;
	int		pref_len;

	ret = 0;
	pref_len = 0;
	c = (!(x.type == 'd' || x.type == 'D') && x.flags & 2) ? '0' : ' ';
	i_said_i_was_the_cops(x, &pref_len, &prefix);
	pref_len = ((x.type == 'o' || x.type == 'O') &&
			str && str[0] == '0') ? 0 : pref_len;
	x.width -= pref_len;
	if (!(x.flags & 4) && x.width > len)
		ret += and_your_husbands_in_jail(c, x.width - len);
	if (pref_len)
		ret += nobody_likes_you(prefix, pref_len);
	ret += nobody_likes_you(str, len);
	if ((x.flags & 4) && x.width > len)
		ret += and_your_husbands_in_jail(' ', x.width - len);
	if (wadu_hek)
		free((void *)str);
	return (ret);
}
