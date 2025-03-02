/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:03:51 by moguille          #+#    #+#             */
/*   Updated: 2025/03/02 23:58:32 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dest;
	int		i;

	char	a[]= "abcdefghijk";
	char	b[]= "ABCDEFGHIJK";
	i = 3;

	src = &a[0];
	dest = &b[0];

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	//strncpy(dest, src, i);
	ft_strncpy(dest, src, i);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}*/
