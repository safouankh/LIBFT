/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:46:29 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:46:29 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int ch)
{
	char	un_ch;

	un_ch = (char)ch;
	if ((un_ch >= 97 && un_ch <= 122) || (un_ch >= 65 && un_ch <= 90)
		|| (un_ch >= 48 && un_ch <= 57))
		return (1);
	return (0);
}

/*
#include <stdio.h>
 
int ttl_alphanumeric(int i, int counter)
{
    char ch;
    char a[50] = "www.geeksforgeeks.org";
    ch = a[0];
 
    // counting of alphanumerics
    while (ch != '\0') {
        ch = a[i];
        if (ft_isalnum(ch))
            counter++;
 
        i++;
    }
 
    // returning total number of alphanumerics
    // present in given input
    return (counter);
}
 
int main()
{
    int i = 0;
 
    int counter = 0;
    counter = ttl_alphanumeric(i, counter);
 
    printf("Number of alphanumerics in the "
           "given input is : %d", counter);
    return 0;
}
*/