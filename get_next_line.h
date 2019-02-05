/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnienow <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:27:43 by mnienow           #+#    #+#             */
/*   Updated: 2018/12/18 22:09:15 by mnienow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10000
# include "./libft/includes/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# if (BUFF_SIZE <= 0)
#  error BUFF_SIZE cannot be <= 0
# endif
# define CHN(y) if ((y) == 0) return (-1)
# define CH(x) if ((x) != 0) return (-1)
# define R(z) return (z)

int get_next_line(const int fd, char **line);

#endif
