/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:39:32 by dhromads          #+#    #+#             */
/*   Updated: 2018/03/24 11:39:00 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*sr;
	unsigned char	*de;

	i = 0;
	sr = (unsigned char *)src;
	de = (unsigned char *)dst;
	if (n > 0)
	{
		while (n--)
		{
			de[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
