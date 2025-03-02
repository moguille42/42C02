/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:22:12 by moguille          #+#    #+#             */
/*   Updated: 2025/03/02 23:20:09 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dest;

	char	a[]= "negrita";
	char	b[]= "amarilla";

	src = &a[0];
	dest = &b[0];

	printf("la cadena origen: %s\n", src);
	printf("la cadena destino: %s\n", dest);
	//strcpy(dest, src);
	ft_strcpy(dest, src);
	printf("la cadena origen: %s\n", src);
	printf("la cadena destino: %s\n", dest);
	return (0);
}*/
