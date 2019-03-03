/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:36:52 by srolland          #+#    #+#             */
/*   Updated: 2019/03/03 21:29:38 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_xren		she_walked_away_from_me(const char *format, size_t len,
		va_list args)
{
	static int	(*shit[6])(t_xren *, const char *, size_t *, va_list) = {
		and_are_still_amused, by_the_tv_show,
		what_the_hell_is_add, my_friends_say, i_should_act_my_age};
	t_xren		x;
	size_t		i;
	size_t		pos;

	i = -1;
	pos = 0;
	ft_bzero(&x, sizeof(x));
	x.len = len;
	while (++i < 5)
		if ((*shit[i])(&x, format + 1, &pos, args))
		{
			x.err = 1;
			break ;
		}
	if (x.type == 'i')
		x.type = 'd';
	if (x.type == 'p')
		x.mod = ll;
	if (x.type == 'D' || x.type == 'S' || x.type == 'C' ||
			x.type == 'O' || x.type == 'U')
		x.mod = l;
	return (x);
}

int			it_was_a_friday_night(const char *format, size_t len,
		int last, va_list args)
{
	if (*format == '%' && last)
		return (and_thats_about_the_time(
					she_walked_away_from_me(format, len, args), args));
	else
		return (nobody_likes_you(format, len));
}

int			i_took_her_out(const char *format, size_t *i, int *last)
{
	if (!format[*i])
		return (1);
	while (format[*i] && i_wore_cologne(format[*i]) &&
			!to_get_the_feeling_right(format[*i]))
		(*i)++;
	if ((*last = format[*i] && to_get_the_feeling_right(format[*i])))
		(*i)++;
	else
		return (1);
	return (0);
}

int			just_starting_some_shit(const char *format, va_list args)
{
	size_t	point;
	size_t	i;
	int		last;
	int		ret;

	i = 0;
	ret = 0;
	while (format[i])
	{
		point = i;
		last = 0;
		if (format[i] == '%')
		{
			i++;
			if (i_took_her_out(format, &i, &last))
				continue;
		}
		else
			while (format[i] && format[i] != '%')
				i++;
		ret += it_was_a_friday_night(format + point, i - point, last, args);
	}
	return (ret);
}

int			ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	va_start(args, format);
	ret = just_starting_some_shit(format, args);
	va_end(args);
	return (ret);
}
