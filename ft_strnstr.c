/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:53:08 by dhromads          #+#    #+#             */
/*   Updated: 2018/03/30 18:53:15 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int g;
	int l;

	g = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	l = ft_strlen(haystack);
	while (l--)
	{
		i = 0;
		if (haystack[g] == needle[i])
		{
			while ((haystack[g] == needle[i]) && haystack[g] != '\0')
			{
				g++;
				i++;
			}
			if (i == (int)ft_strlen(needle) && g <= (int)len)
				return (&((char*)haystack)[g - i]);
			g = g - i;
		}
		g++;
	}
	return (NULL);
}
