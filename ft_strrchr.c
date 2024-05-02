/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:37:28 by fdi-cecc          #+#    #+#             */
/*   Updated: 2024/05/02 11:44:55 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = s;
	if (s == 0)
		return (NULL);
	while (*s)
		s++;
	while (s >= last)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}
