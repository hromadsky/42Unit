/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:12:00 by dhromads          #+#    #+#             */
/*   Updated: 2018/04/16 16:12:45 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			**ft_strsplit(char const *s, char c)
{
	char			**result;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_wordcount((char *)s, c)) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i++] = ft_strsub(s, 0, ft_wordlen((char *)s, c));
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
