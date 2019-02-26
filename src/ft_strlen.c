/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:10:01 by srolland          #+#    #+#             */
/*   Updated: 2019/02/23 20:10:27 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s, const size_t max)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && i < max)
		i++;
	return (i);
}
