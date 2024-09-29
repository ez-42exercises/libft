/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaona-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:23:47 by pgaona-a          #+#    #+#             */
/*   Updated: 2024/09/29 22:27:01 by pgaona-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
	int		i;
	char	*dst;
	
	dst = malloc((ft_strlen(s)+1)*sizeof(char));
	i=0;
	while(i < ft_strlen(s))
	{
		s[i]=*f(i,s[i]);
		i++;
	}
	return (dst);
}
