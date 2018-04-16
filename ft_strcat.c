/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:39:34 by dhromads          #+#    #+#             */
/*   Updated: 2018/03/30 18:41:11 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t end;

	end = ft_strlen(s1);
	while (*s2)
	{
		s1[end] = *s2;
		end++;
		s2++;
	}
	s1[end] = '\0';
	return (s1);
}
