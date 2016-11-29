/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoirou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:09:57 by panoirou          #+#    #+#             */
/*   Updated: 2016/11/22 16:56:42 by panoirou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int min;
	int max;

	min = '0';
	max = '9';
	while (min <= max)
	{
		ft_putchar(min);
		min++;
	}
}
