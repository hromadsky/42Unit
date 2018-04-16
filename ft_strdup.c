/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhromads <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:47:10 by dhromads          #+#    #+#             */
/*   Updated: 2018/03/30 18:47:34 by dhromads         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*buf;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	buf = (char *)malloc(sizeof(*s1) * (i + 1));
	if (buf == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		buf[i] = s1[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
