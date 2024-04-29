/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:50:34 by fdi-cecc          #+#    #+#             */
/*   Updated: 2024/04/25 22:51:33 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (0);
}