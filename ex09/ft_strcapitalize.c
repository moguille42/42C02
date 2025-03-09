/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:06:03 by moguille          #+#    #+#             */
/*   Updated: 2025/03/09 23:48:39 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_alphanum(char c)
{
	if (('0' <= c && c <= '9') || ft_is_lower(c) || ft_is_upper(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_lower(str[i]) && !ft_is_alphanum(str[i - 1]))
			str[i] -= 32;
		else if (ft_is_upper(str[i]) && ft_is_alphanum(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quaRante-deux; cinQuante+et+un";

	printf("1. %s\n", str);
	printf("2. %s\n", ft_strcapitalize(str));
}*/
