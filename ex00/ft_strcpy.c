/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:22:12 by moguille          #+#    #+#             */
/*   Updated: 2025/03/09 16:04:02 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
#include i<stdio.h>

int	main(void)
{
	char	*dest;
	char	src[]= "negrita";
	char	b[]= "amarilla";

	dest = &b[0];
	printf("origen: %s\n", src);
	printf("destino: %s\t%p\n", dest, dest);
	//printf("%p\n", strcpy(dest, src));
	printf("%p\n", ft_strcpy(dest, src));
	printf("destino: %s\n", dest);
	return (0);
}*/
