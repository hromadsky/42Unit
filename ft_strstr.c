/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:08:27 by dhromads          #+#    #+#             */
/*   Updated: 2018/04/16 17:08:31 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len;
	int i;
	int g;

	g = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	len = ft_strlen(haystack);
	while (len--)
	{
		i = 0;
		if (haystack[g] == needle[i])
		{
			while ((haystack[g] == needle[i]) && haystack[g])
			{
				g++;
				i++;
			}
			if (i == (int)ft_strlen(needle))
				return (&((char*)haystack)[g - i]);
			g = g - i;
		}
		g++;
	}
	return (NULL);
}
