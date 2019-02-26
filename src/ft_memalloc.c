/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 20:09:03 by srolland          #+#    #+#             */
/*   Updated: 2019/02/23 20:29:13 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memmalloc(size_t size)
{
	void	*ret;

	if ((ret = malloc(size)) == NULL)
		return (NULL);
	while (size > 0)
		((unsigned char *)ret)[size--] = (unsigned char)0;
	return (ret);
}
