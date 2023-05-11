/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saomole <saomole@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:39:18 by saomole           #+#    #+#             */
/*   Updated: 2023/03/02 00:40:18 by saomole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	char			*ret;

	uc = (unsigned char)c;
	while (*s && *s != uc)
		s++;
	if (*s == uc)
	{
		ret = (char *)s;
		return (ret);
	}	
	else
		return (0);
}
