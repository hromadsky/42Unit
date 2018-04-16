/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:49:32 by dhromads          #+#    #+#             */
/*   Updated: 2018/03/30 18:50:07 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int end;
	int i;

	end = (int)ft_strlen(s1);
	i = -1;
	while (s2[++i] && i < (int)n)
		s1[end++] = s2[i];
	s1[end] = '\0';
	return (s1);
}
