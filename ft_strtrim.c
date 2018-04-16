/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:04:23 by dhromads          #+#    #+#             */
/*   Updated: 2018/04/16 16:07:56 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhite(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int b;
	int e;

	if (s == NULL)
		return (NULL);
	e = ft_strlen(s);
	b = 0;
	if (ft_iswhite(s[b]))
	{
		while (ft_iswhite(s[b]))
			b++;
	}
	if (s[b] == '\0')
		return (ft_strdup(s + b));
	if (ft_iswhite(s[e]) || s[e] == '\0')
	{
		while (ft_iswhite(s[e]) || s[e] == '\0')
			e--;
	}
	return (ft_strsub(s, b, e - b + 1));
}
