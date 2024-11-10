/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:46:33 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:46:33 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	un_c;

	un_c = (unsigned char)c;
	if (c < 0 || c > 255) 
		return (0);
	return ((un_c >= 'a' && un_c <= 'z') || (un_c >= 'A' && un_c <= 'Z'));
}
