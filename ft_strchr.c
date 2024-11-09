/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:49:31 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 15:37:52 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == (char)s2)
			return ((char *)s1 + i);
		i++;
	}
	if ((char)s2 == '\0')
		return ((char *)s1 + i);
	return (NULL);
}

/*
#include <stdio.h>
int main() 
{
    char *str = "Welcome to Tutorialspoint";
   char ch = 'u';
   // Find the first occurrence of 'u' in the string
   char *p = ft_strchr(str, ch);

   if (p != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, p);
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}*/
