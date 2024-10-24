/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:52:42 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:52:42 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		ch += 32;
	}
	return (ch);
}

/*
#include <stdio.h>
 
int main()
{
    char ch;
 
    ch = 'G';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));
 
    return 0;
}
*/