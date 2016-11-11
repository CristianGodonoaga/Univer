/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodonoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 04:36:06 by cgodonoa          #+#    #+#             */
/*   Updated: 2016/07/11 20:38:57 by cgodonoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int ft_strcmp(const char *str1, const char *str2)
{
	int j;

	j = 0;
	while (str1[j] == str2[j] && str2[j] != '\0')
		j++;
        return (str1[j] - str2[j]);
}
