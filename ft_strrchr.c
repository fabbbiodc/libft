/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:37:28 by fdi-cecc          #+#    #+#             */
/*   Updated: 2024/04/25 16:50:45 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)last);
}
