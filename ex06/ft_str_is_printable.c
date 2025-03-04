/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:19:17 by moguille          #+#    #+#             */
/*   Updated: 2025/03/04 19:24:18 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "mPaola12";
	char	str2[] = "mp\b";
	int	i;
	int	j;

	i = ft_str_is_printable(str1);
	j = ft_str_is_printable(str2);
	printf("%s\t %d\n", str1, i);
	printf("%s\t %d\n", str2, j);
	return (0);
}/*
