/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:54:12 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 19:50:34 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char delimiter)
{
	int	i;
	int	counter;
	int	in_word;

	counter = 0;
	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != delimiter && in_word == 0)
		{
			in_word = 1;
			counter++;
		}
		else if (s[i] == delimiter)
			in_word = 0;
		i++;
	}
	return (counter);
}

static void	free_memory(char **str, size_t i)
{
	if (!str)
		return ;
	while (i > 0)
		free(str[--i]);
	free(str);
}

static char	**allocate_splits_array(char const *s, char delimiter)
{
	char	**str;
	int		array_size;

	if (!s)
		return (NULL);
	array_size = count_words(s, delimiter);
	str = (char **) malloc((array_size + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[array_size] = NULL;
	return (str);
}

static int	find_word_length(char const *s, int *i, int len, char delimiter)
{
	if (len == 0)
	{
		while (s[*i] && s[*i] != delimiter)
		{
			len++;
			*i += 1;
		}
		return (len);
	}
	while (s[*i] && s[*i] == delimiter)
		*i += 1;
	return (*i);
}

/*
* Allocates (with malloc(3)) and returns an array of strings obtained by
* splitting ’s’ using the character ’c’ as a delimiter. The array must end
* with a NULL pointer.
*/
char	**ft_split(char const *s, char delimiter)
{
	char	**str;
	int		start;
	int		i;
	int		size;

	i = 0;
	size = 0;
	str = allocate_splits_array(s, delimiter);
	if (!str || !s)
		return (NULL);
	while (s[i])
	{
		find_word_length(s, &i, 1, delimiter);
		if (s[i] == '\0')
			break ;
		start = i;
		str[size] = ft_substr(s, start, find_word_length(s, &i, 0, delimiter));
		if (!str[size])
			return (free_memory(str, size), NULL);
		size++;
	}
	return (str);
}

// int	main()
// {
// 	char	**str;
// 	int		i;

// 	i = 0;
// 	str = ft_split(".........H.e.l.l.o.........man..........", '.');
// 	if (!str)
// 	{
// 		printf("Point NULL");
// 		return (0);
// 	}
// 	else 
// 	{
// 		while (str[i])
// 			printf("%s\n", str[i++]);
// 		while (i)
// 			free(str[i--]);
// 		free(str);
// 	}
// 	return (0);
// }
