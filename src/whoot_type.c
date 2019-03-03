/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whoot_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:40:25 by srolland          #+#    #+#             */
/*   Updated: 2019/03/03 21:36:26 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		and_your_husbands_in_jail(const char c, int len)
{
	int	i;

	i = -1;
	while (++i < len)
		write(1, &c, 1);
	return (i);
}

int		nobody_likes_you(const char *str, const size_t len)
{
	write(1, str, len);
	return (len);
}

int		i_should_act_my_age(t_xren *x, const char *format, size_t *i,
		va_list args)
{
	static int	(*ano[6])(t_xren *, const char *, size_t *, va_list args) = {
		and_are_still_amused, by_the_tv_show,
		what_the_hell_is_add, my_friends_say, i_should_act_my_age};
	size_t		t;

	t = -1;
	if (i_wore_cologne(format[*i]))
	{
		if (to_get_the_feeling_right(format[*i]))
		{
			x->type = format[*i];
			(*i)++;
			return (0);
		}
		else
		{
			if (*i < x->len)
				while (++t < 5)
					if ((*ano[t])(x, format, i, args))
						return (1);
		}
	}
	else
		return (1);
	return (0);
}

int		what_the_hell_is_call_id(t_xren x, va_list args)
{
	int		ret;
	char	c;

	(void)args;
	c = (x.flags & 2) ? '0' : ' ';
	ret = 0;
	if ((x.flags & 4) == 0 && x.width > 1)
		ret += and_your_husbands_in_jail(c, x.width - 1);
	ret += nobody_likes_you("%", 1);
	if ((x.flags & 4) != 0 && x.width > 1)
		ret += and_your_husbands_in_jail(' ', x.width - 1);
	return (ret);
}

int		and_thats_about_the_time(t_xren x, va_list args)
{
	if (x.err)
		return (0);
	if (x.type == '%')
		return (what_the_hell_is_call_id(x, args));
	if (x.type == 'c' || x.type == 'C')
		return (on_the_drive_home(x, args));
	if (x.type == 's' || x.type == 'S')
		return (then_later_on(x, args));
	if (x.type == 'f' || x.type == 'F')
		return (handle_float(x, args));
	if (x.type == 'd' || x.type == 'D' || x.type == 'x'
			|| x.type == 'X' || x.type == 'p' || x.type == 'u'
			|| x.type == 'U' || x.type == 'o' || x.type == 'O')
		return (i_called_her_mom(x, args));
	return (0);
}
