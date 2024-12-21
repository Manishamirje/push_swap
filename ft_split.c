/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:26:04 by mmirje            #+#    #+#             */
/*   Updated: 2024/12/21 11:30:32 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free(size_t t, char **str_array)
{
	while (t > 0)
	{
		t--;
		free(*(str_array + t));
	}
	free(str_array);
}

static char	*ft_allocate(char const *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] && (s[i] != c))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_add_words(char const *s, char c, char **str_array, size_t t)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < t)
	{
		while (*(s + j) && (*(s + j) == c))
			j++;
		if (*(s + j) && (*(s + j) != c))
		{
			*(str_array + i) = ft_allocate((s + j), c);
			if (!*(str_array + i))
			{
				ft_free(i, str_array);
				return (NULL);
			}
			while (*(s + j) && (*(s + j) != c))
				j++;
		}
		i++;
	}
	*(str_array + i) = NULL;
	return (str_array);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		while (*(s + i) && (*(s + i) == c))
			i++;
		if (*(s + i) && (*(s + i) != c))
		{
			count++;
			while (*(s + i) && (*(s + i) != c))
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split_res;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	split_res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split_res)
		return (NULL);
	split_res = ft_add_words(s, c, split_res, word_count);
	return (split_res);
}
