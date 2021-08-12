/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkenned <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:54:18 by fkenned           #+#    #+#             */
/*   Updated: 2021/04/28 15:54:20 by fkenned          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "get_next_line.h"

void	*ft_calloc(size_t number, size_t size)
{
	size_t	res;
	void	*sum;

	res = number * size;
	sum = (void *)malloc(res);
	if (!sum)
		return (NULL);
	while (res > 0)
	{
		res--;
		((char *)sum)[res] = 0;
	}
	return (sum);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int a)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != (char)a)
		i++;
	if (str[i] == (char)a)
		return ((char *)str + i);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc(len_s1 + len_s2 + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < len)
		str = (char *)malloc(ft_strlen(s) + 1);
	else
		str = (char *)malloc(len + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
