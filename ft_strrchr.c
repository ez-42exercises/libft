/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:31:01 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/21 17:52:35 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int			i;
	const char	*found = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = found + i;
		}
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		found = found + i;
	return ((char *)found);
}
