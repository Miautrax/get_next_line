/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:07:52 by arivas-q          #+#    #+#             */
/*   Updated: 2025/04/08 16:45:24 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*str;
	
	if(BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) == -1)
	{
		free(str)
		str = NULL;
		return(NULL)
	}
}