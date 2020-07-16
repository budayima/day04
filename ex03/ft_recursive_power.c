/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:39:01 by budayima          #+#    #+#             */
/*   Updated: 2020/07/16 13:39:08 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;

	if (power > 0)
		return (nb * ft_recursive_power(nb, power -1));
	else 
		return 1;
}

