/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanisma <ismaildeniztanisman@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:53:06 by itanisma          #+#    #+#             */
/*   Updated: 2026/01/10 11:57:56 by itanisma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (dstsize <= len_d)
		return (dstsize + len_s);
	i = 0;
	while ((len_d + i + 1) < dstsize && src[i])
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
