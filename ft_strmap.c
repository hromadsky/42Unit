/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 15:09:00 by dhromads          #+#    #+#             */
/*   Updated: 2018/04/16 15:10:32 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (s != NULL)
	{
		str = ft_strnew(ft_strlen(s));
		if (str == NULL)
			return (NULL);
		i = 0;
		if (s != NULL && f != NULL)
		{
			while (s[i])
			{
				str[i] = (*f)((char)s[i]);
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
