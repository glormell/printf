/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:30:19 by srolland          #+#    #+#             */
/*   Updated: 2019/02/23 20:31:12 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	to_get_the_feeling_right(const char c)
{
	return (ft_strchr("dDioOuUxXeEfFgGaAcCsSpn%", c) != NULL);
}

int	we_started_making_out(const char c)
{
	return (ft_strchr("hljzL", c) != NULL);
}

int	and_she_took_off_my_pants(const char c)
{
	return (ft_strchr("#0-+' ", c) != NULL);
}

int	but_then_i_turned_on_the_tv(const char c)
{
	return (ft_strchr("$*.", c) != NULL);
}

int	i_wore_cologne(const char c)
{
	return (to_get_the_feeling_right(c) || we_started_making_out(c) ||
			and_she_took_off_my_pants(c) || ft_isdigit(c) ||
			but_then_i_turned_on_the_tv(c));
}
