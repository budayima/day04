/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:32:20 by budayima          #+#    #+#             */
/*   Updated: 2020/07/13 17:41:33 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<unistd.h>
 int ft_recursive_factorial(int nb)
 {
     if(n < 0)
     	return 0;
     if(nb > 1)
     	return nb* fact(nb-1);
	 else 
    	return 1;
 }
