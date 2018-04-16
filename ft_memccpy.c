/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:48:32 by dhromads          #+#    #+#             */
/*   Updated: 2018/03/30 18:37:39 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (n > 0)
	{
		while (n--)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			if (((unsigned char *)src)[i] == (unsigned char)c)
				return (&((unsigned char *)dst)[i + 1]);
			i++;
		}
	}
	return (NULL);
}
