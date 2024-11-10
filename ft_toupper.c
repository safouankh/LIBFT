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
	unsigned char	un_ch;

	un_ch = (unsigned char)ch;
	if (ch < 0 || ch > 255)
		return (ch);
	if (un_ch >= 97 && un_ch <= 122)
		un_ch -= 32;
	return (un_ch);
}
