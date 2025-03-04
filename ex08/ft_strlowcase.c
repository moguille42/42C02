/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:19:17 by moguille          #+#    #+#             */
/*   Updated: 2025/03/04 20:57:55 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 64;
		str--;
	}
	return (str);
}

int	main(void)
{
	char	str[7] = "PALOMA";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
