/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:45:03 by fdi-cecc          #+#    #+#             */
/*   Updated: 2024/04/23 17:58:20 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char	*dest;
	char	*src;
	int		n;

	dest = "Ciaociao";
	src = "xxx";
	n = 2;
	printf("///////\n\n");
    printf("~~ ft_strlcpy test\n");
	printf("The destination is %s\n", dest);
	printf("The source is %s\n", src);
	strlcpy(dest, src, n);
	printf("The result with a n of %i is\n%s\n", n, dest);
}