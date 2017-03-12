/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smykyten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:40:08 by smykyten          #+#    #+#             */
/*   Updated: 2016/12/26 15:32:56 by imarakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size){
	char	*mem;

	mem = (char*)malloc(sizeof(char) * size);
	if (mem)
	{
		while (size)
		{
			mem[size - 1] = '\0';
			size--;
		}
		return (mem);
	}
	return (NULL);
}
