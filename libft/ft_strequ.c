/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strequ.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcabotia <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 14:20:04 by rcabotia     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 19:32:56 by rcabotia    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] || s2[i])
		{
			if (s1[i] - s2[i] != 0)
				return (0);
			i++;
		}
	}
	return (1);
}
