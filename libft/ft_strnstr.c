/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saomole <saomole@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:09:33 by saomole           #+#    #+#             */
/*   Updated: 2023/03/02 01:10:21 by saomole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)(haystack));
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len && len > 0)
	{
		j = 0;
		while (needle[j] && (needle[j] == haystack[i + j] && i + j < len))
			j++;
		if (needle[j] == 0)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
