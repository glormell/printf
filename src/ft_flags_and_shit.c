/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_and_shit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:10:41 by srolland          #+#    #+#             */
/*   Updated: 2019/02/26 19:44:49 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		whos_next(int a, int b)
{
	return (a > b ? a : b);
}

int		and_are_still_amused(t_xren *x, const char *format, size_t *i)
{
	while (*i < x->len)
	{
		if (and_she_took_off_my_pants(format[*i]))
		{
			if (format[*i] == '#')
				x->flags |= 1;
			else if (format[*i] == '0')
				x->flags |= 2;
			else if (format[*i] == '-')
				x->flags |= 4;
			else if (format[*i] == '+')
				x->flags |= 8;
			else if (format[*i] == ' ')
				x->flags |= 16;
		}
		else
			return (0);
		(*i)++;
	}
	return (1);
}

int		by_the_tv_show(t_xren *x, const char *format, size_t *i)
{
	int width;

	if (format[*i] == '*')
		(*i)++;
	if (x->width == 0)
	{
		if (ft_atoi(format, 0, &width, i))
			return (1);
		x->width = width;
	}
	return (0);
}

int		what_the_hell_is_add(t_xren *x, const char *format, size_t *i)
{
	int prec;

	x->prec = -1;
	if (format[*i] != '.')
		return (0);
	x->prec = 0;
	x->flags |= 64;
	(*i)++;
	if (ft_atoi(format, 0, &prec, i))
		return (1);
	x->prec = prec;
	return (0);
}

int		my_friends_say(t_xren *x, const char *format, size_t *i)
{
	t_mod	m;

	m = nomod;
	if (!we_started_making_out(format[*i]))
		return (0);
	if (format[*i] == 'l')
	{
		if (format[*i + 1] == 'l' && ++(*i))
			m = ll;
		else
			m = l;
	}
	else if (format[*i] == 'h')
	{
		if (format[*i + 1] == 'h' && ++(*i))
			m = hh;
		else
			m = h;
	}
	else if (format[*i] == 'j')
		m = j;
	else if (format[*i] == 'z')
		m = z;
	else if (format[*i] == 'L')
		x->flaL = 1;
	x->mod = (m > x->mod) ? m : x->mod;
	return ((*i)++ & 0);
}
