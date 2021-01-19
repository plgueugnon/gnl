/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <pgueugno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:54:00 by pgueugno          #+#    #+#             */
/*   Updated: 2020/11/27 19:59:53 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	a;
	int		i;

	str = (char *)s;
	a = c;
	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (&str[i]);
		i++;
	}
	if (str[i] == a)
		return (&str[i]);
	return (0);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		len1;
	int		len2;
	int		j;
	char	*dst;

	j = 0;
	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	len = len1 + len2;
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (0);
	dst = ft_strcpy(dst, (char *)s1);
	while (j < len2)
	{
		dst[len1 + j] = *s2;
		s2++;
		j++;
	}
	*(dst + (len)) = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
