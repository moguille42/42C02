/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:22:12 by moguille          #+#    #+#             */
/*   Updated: 2025/03/02 19:38:30 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	char	*originaldest = 0;

	originaldest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char	originaldest[14];
	char	dest[20];

	originaldest[14] = "tengo hambre\n";
	ft_strcpy(dest, originaldest);
	printf("la cadena origen: %s\n", originaldest);
	printf("la cadena destino: %s\n", dest);
	return (0);
}
