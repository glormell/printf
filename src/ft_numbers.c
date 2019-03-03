/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:14:34 by srolland          #+#    #+#             */
/*   Updated: 2019/03/03 22:52:13 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static intmax_t		and_are_still_more_amused(t_mod m, va_list args)
{
	intmax_t	num;

	if (m == l)
		num = va_arg(args, long);
	else if (m == ll)
		num = va_arg(args, long long);
	else if (m == j)
		num = va_arg(args, intmax_t);
	else if (m == z)
		num = va_arg(args, ssize_t);
	else
		num = va_arg(args, int);
	if (m == hh)
		num = (char)num;
	else if (m == h)
		num = (short)num;
	return (num);
}

static uintmax_t	i_just_forgot_about_that(t_mod m, va_list args)
{
	uintmax_t	num;

	if (m == l)
		num = va_arg(args, unsigned long);
	else if (m == ll)
		num = va_arg(args, unsigned long long);
	else if (m == j)
		num = va_arg(args, uintmax_t);
	else if (m == z)
		num = va_arg(args, size_t);
	else
		num = va_arg(args, unsigned int);
	if (m == hh)
		num = (unsigned char)num;
	else if (m == h)
		num = (unsigned short)num;
	return (num);
}

static int			this_state_looks_down_on_sodomy(t_xren x, va_list args)
{
	intmax_t	num;
	int			ret;
	char		*str;
	char		sign;

	ret = 0;
	num = and_are_still_more_amused(x.mod, args);
	x.value = &num;
	if (x.flags & 8)
		sign = '+';
	else if (x.flags & 16)
		sign = ' ';
	else
		sign = 0;
	str = (!(x.prec) && !num) ? NULL : ft_itoa_base(num, x, sign, 10);
	ret += from_a_pay_phone(x, str, ft_strlen(str, INT_MAX), str != NULL);
	return (ret);
}

static int			and_you_still_act_like(char c)
{
	if (c == 'X' || c == 'x' || c == 'p')
		return (16);
	else if (c == 'o' || c == 'O')
		return (8);
	else
		return (10);
}

int					i_called_her_mom(t_xren x, va_list args)
{
	uintmax_t	num;
	char		*str;
	int			ret;
	int			base;
	int			size;

	if (x.type == 'd' || x.type == 'D')
		return (this_state_looks_down_on_sodomy(x, args));
	base = and_you_still_act_like(x.type);
	ret = 0;
	size = 0;
	if (x.flags & 1 || x.type == 'p')
		size = (x.type == 'o' || x.type == 'O') ? 1 : 2;
	num = i_just_forgot_about_that(x.mod, args);
	x.value = &num;
	if ((!x.prec && !num) || (!num && (x.type == 'o' ||
					x.type == 'O') && (x.flags & 1)))
		str = NULL;
	else
		str = ft_uitoa_base(num, base, (x.type == 'X' ? "0123456789ABCDEF" :
					"0123456789abcdef"), whos_next(x.prec, ((x.flags & 2)
							&& !(x.flags & 4) ? x.width - size : 0)));
	ret += from_a_pay_phone(x, str, ft_strlen(str, INT_MAX), str != NULL);
	return (ret);
}
