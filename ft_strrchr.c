/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <pgaona-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:31:01 by pgaona-a          #+#    #+#             */
/*   Updated: 2025/03/04 02:16:43 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*found;

	found = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = (char *)s + i;
		}
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		found = (char *)(s + i);
	return (found);
}
