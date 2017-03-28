/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jd_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:35:26 by smifsud           #+#    #+#             */
/*   Updated: 2016/12/05 18:49:22 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "printf.h"

size_t		jx_flag(uintmax_t nb, char **ret)
{
	*ret = ft_itoa_base_u(nb, 16);
	return (ft_strlen(*ret));
}
