/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saomole <saomole@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:37:37 by saomole           #+#    #+#             */
/*   Updated: 2023/03/02 01:38:17 by saomole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			count;
	char			*cpy;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		cpy = malloc(sizeof(char));
		if (!cpy)
			return (NULL);
		cpy[0] = 0;
		return (cpy);
	}
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	i = start;
	count = 0;
	while (s[i] && count < len)
		cpy[count++] = s[i++];
	cpy[count] = '\0';
	return (cpy);
}
