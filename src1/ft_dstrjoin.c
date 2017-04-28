/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 21:58:26 by smifsud           #+#    #+#             */
/*   Updated: 2017/04/28 14:00:32 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dstrjoin(char *s1, char *s2)
{
	int		len;
	char	*ret;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char*)malloc(sizeof(char) * len);
	str = ret;
	if (ret == 0)
	{
		return (0);
	}
	while (*s1 != 0)
	{
		*ret = *s1;
		s1++;
		ret++;
	}
	while (*s2 != 0)
	{
		*ret = *s2;
		s2++;
		ret++;
	}
	free(s2);
	free(s1);
	*ret = 0;
	return (str);
}
