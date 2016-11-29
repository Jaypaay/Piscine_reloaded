/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoirou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:37:15 by panoirou          #+#    #+#             */
/*   Updated: 2016/11/25 12:31:40 by panoirou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int cmp;
	int i;

	i = 1;
	cmp = 1;
	if (nb >= 13)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		cmp = cmp * i;
		i++;
	}
	return (cmp);
}
