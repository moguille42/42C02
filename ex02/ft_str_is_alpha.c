/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:30 by moguille          #+#    #+#             */
/*   Updated: 2025/03/03 21:15:17 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z' ) || (str[i]
					>= 'A' && str[i] <= 'Z' )))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "aBc";		
	int		i;

	i = ft_str_is_alpha(str);
	printf("la cadena:  %s\t la cadena: %d\n", str, i);
	return (0);
}*/
