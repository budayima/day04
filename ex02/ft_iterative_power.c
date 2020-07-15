/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:27:07 by budayima          #+#    #+#             */
/*   Updated: 2020/07/15 17:27:23 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 int ft_iterative_power(int nb, int power)
{
	int count;
	count = power;
	int answer;
	answer = 1;
	while(count < power)
	{
		answer *= nb;
		count++;
	}
	return(answer);
}
