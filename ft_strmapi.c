/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:23:47 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 19:33:45 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*str;
	unsigned int	nbr;

	nbr = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[nbr] != '\0')
	{
		str[nbr] = f(nbr, s[nbr]);
		nbr++;
	}
	str[nbr] = '\0';
	return (str);
}
