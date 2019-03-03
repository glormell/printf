/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:05:01 by srolland          #+#    #+#             */
/*   Updated: 2019/03/03 19:25:56 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			isnan(long double d)
{
	union u_vivon	u;

	u.d = (double)d;
	return (u.l == 0x7FF8000000000000ll || u.l == 0xFFF8000000000000ll);
}

static int			isinf(long double d)
{
	union u_vivon	u;

	u.d = (double)d;
	if (u.l == 0x7FF0000000000000ll)
		return (1);
	else if (u.l == 0xFFF0000000000000ll)
		return (-1);
	else
		return (0);
}

static long double	get_ld(t_xren x, va_list args, size_t *len)
{
	long double	num;
	uintmax_t	tmp;

	*len = 0;
	if (x.flal)
		num = va_arg(args, long double);
	else
		num = (long double)va_arg(args, double);
	tmp = (uintmax_t)DABS(num);
	if (!tmp)
		*len += 1;
	while (tmp && ++(*len))
		tmp /= 10;
	return (num);
}

static int			handle_invalid(t_xren x, long double num, int inf)
{
	if (isnan(num))
	{
		if (x.type == 'F')
			return (nobody_likes_you("NAN", 3));
		else
			return (nobody_likes_you("nan", 3));
	}
	else if (inf)
	{
		if (inf == -1 && x.type == 'F')
			return (nobody_likes_you("-INF", 4));
		else if (inf == -1)
			return (nobody_likes_you("-inf", 4));
		else if (x.type == 'F')
			return (nobody_likes_you("INF", 3));
		else
			return (nobody_likes_you("inf", 3));
	}
	return (0);
}

int					handle_float(t_xren x, va_list args)
{
	long double	num;
	size_t		int_len;
	size_t		tot_len;
	int			ret;

	ret = 0;
	num = get_ld(x, args, &int_len);
	if (isinf(num) || isnan(num))
		return (handle_invalid(x, num, isinf(num)));
	else
	{
		if (!(x.flags & 64) || x.prec < 0)
			x.prec = 6;
		tot_len = (x.prec || x.flags & 1) ? 1 : 0;
		x.flags |= (num < 0.0) ? 32 : 0;
		tot_len += int_len + x.prec;
		if (num < 0.0 || x.flags & 8 || x.flags & 16)
			x.width--;
		ret += double_prep(&x, tot_len);
		ret += ft_ldtoa(x, num, int_len, tot_len);
		if (x.width && x.flags & 4)
			ret += and_your_husbands_in_jail(' ', x.width - tot_len);
	}
	return (ret);
}
