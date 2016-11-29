/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoirou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:54:05 by panoirou          #+#    #+#             */
/*   Updated: 2016/11/24 16:50:00 by panoirou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		cpt;
	char	*str;
	int		index;

	cpt = 0;
	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	str = (char*)malloc(sizeof(*str) * index + 1);
	if (!str)
		return (NULL);
	while (src[cpt] != '\0')
	{
		str[cpt] = src[cpt];
		cpt++;
	}
	str[cpt] = '\0';
	return (str);
}
