/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 15:10:56 by dhromads          #+#    #+#             */
/*   Updated: 2018/04/16 15:12:59 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (s != NULL)
	{
		str = ft_strnew(ft_strlen(s));
		if (str == NULL)
			return (NULL);
		if (s != NULL && f != NULL)
		{
			while (*s)
			{
				str[i] = (*f)(i, (char)*s);
				i++;
				s++;
			}
			return (str);
		}
	}
	return (NULL);
}
