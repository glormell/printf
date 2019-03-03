/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 19:26:02 by srolland          #+#    #+#             */
/*   Updated: 2019/03/03 19:36:18 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintmax_t	power_ten(uintmax_t power)
{
	uintmax_t	i;

	if (power == 0)
		return (1);
	if (power % 2 == 0)
	{
		i = power_ten(power / 2);
		return (i * i);
	}
	else
		return (10 * power_ten(power - 1));
}

static void			round(long double *f, int prec)
{
	static const double	rounders[11] = {
		0.5, 0.05, 0.005, 0.0005, 0.00005, 0.000005, 0.0000005,
		0.00000005, 0.000000005, 0.0000000005, 0.00000000005};

	if (prec && *f > 0.0)
		*f += rounders[prec];
	else if (prec && *f < 0.0)
		*f -= rounders[prec];
}

static void			int_part(t_xren x, uintmax_t num, size_t int_len,
		char res[59])
{
	char	c_case;
	size_t	tmp_len;
	size_t	len_diff;

	c_case = ('a' - 10 - (('a' - 'A') * (x.type == 'F')));
	tmp_len = int_len;
	while (tmp_len--)
	{
		if (x.flags & 128 && x.prec-- == 0)
			break ;
		len_diff = int_len - tmp_len;
		res[tmp_len] = (num % 10) + ((num % 10 < 10) ? '0' : c_case);
		num /= 10;
	}
}

int					ft_ldtoa(t_xren x, long double num, int int_len,
		int tot_len)
{
	char		res[59];
	long double	frac;

	round(&num, x.prec);
	int_part(x, (uintmax_t)DABS(num), int_len, res);
	x.flags |= 128;
	if (x.prec != 0)
	{
		x.prec++;
		frac = (DABS(num) - (uintmax_t)DABS(num)) * power_ten(x.prec);
		frac = ((uintmax_t)DABS(frac) % 10 >= (uintmax_t)(10 / 2)) ?
			(frac / 10) + 1 : frac / 10;
		int_part(x, (uintmax_t)DABS(frac), tot_len, res);
	}
	if (x.prec != 0 || x.prec & 1)
		res[int_len] = '.';
	return (nobody_likes_you(res, tot_len));
}
