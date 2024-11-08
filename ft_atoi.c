/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:46:18 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:46:18 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handeling(int sign)
{
	if (sign == 1)
	{
		return (INT_MAX);
	}
	else
	{
		return (INT_MIN);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	degit;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		degit = str[i] - '0';
		if (result > (INT_MAX - degit) / 10)
			return (handeling(sign));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
