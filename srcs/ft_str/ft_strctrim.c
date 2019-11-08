/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 18:27:38 by juochen           #+#    #+#             */
/*   Updated: 2018/02/28 20:47:09 by juochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strctrim(char const *s, char c)
{
	char	*ns;
	int		st;
	int		en;
	int		slen;
	int		i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	ns = ft_strnew(slen);
	if (!ns)
		return (NULL);
	st = 0;
	while (s[st] == ' ' || s[st] == '\n' || s[st] == '\t' || s[st] == c)
		st++;
	en = slen - 1;
	while (s[en] == ' ' || s[en] == '\n' || s[en] == '\t' || s[en] == c)
		en--;
	i = 0;
	while (st <= en)
		ns[i++] = s[st++];
	return (ns);
}
