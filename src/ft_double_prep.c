/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_prep.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 19:24:02 by srolland          #+#    #+#             */
/*   Updated: 2019/03/03 19:24:11 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	support(t_xren *x)
{
	if (x->flags & 32)
		return (and_your_husbands_in_jail('-', 1));
	else if (x->flags & 8)
		return (and_your_husbands_in_jail('+', 1));
	else if (x->flags & 16)
		return (and_your_husbands_in_jail(' ', 1));
	return (0);
}

int			double_prep(t_xren *x, int num_len)
{
	int	zp_len;
	int	wp_len;
	int	ret;

	ret = 0;
	wp_len = (x->flags & 64) ? whos_next(x->prec, num_len) : num_len;
	zp_len = (x->prec > num_len) ? x->prec - num_len : 0;
	if (x->width != 0 && !(x->flags & 4))
	{
		if (x->flags & 2)
			wp_len = x->width - wp_len;
		if (x->flags & 64)
			ret += and_your_husbands_in_jail(' ', x->width - zp_len + num_len);
		else if (!(x->flags & 2))
			ret += and_your_husbands_in_jail(' ', x->width - wp_len);
	}
	ret += support(x);
	if (x->flags & 64)
		ret += and_your_husbands_in_jail('0', zp_len);
	else if (x->width && !(x->flags & 4))
		if (x->flags & 2)
			ret += and_your_husbands_in_jail('0', wp_len);
	return (ret);
}
