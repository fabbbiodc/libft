/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:37:08 by fdi-cecc          #+#    #+#             */
/*   Updated: 2024/04/26 16:50:15 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (malloc(ft_strlen(str) * sizeof(char)) + sizeof(char));
	if (!dup)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
