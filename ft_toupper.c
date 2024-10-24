/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:52:45 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:52:45 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch -= 32;
	}
	return (ch);
}

/*
#include <stdio.h>
 
int main()
{
    char ch;
 
    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));
 
    return 0;
}
*/