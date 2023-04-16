/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:33:40 by feden-pe          #+#    #+#             */
/*   Updated: 2023/04/15 13:35:46 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <limits.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t num);
void	*ft_memset(void *s, int c, size_t num);
size_t	ft_strlen(const char *str);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memcpy(void *d, const void *s, size_t num);
int	ft_atoi(const char *ptr);
void	*ft_calloc(size_t num, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s, int c, unsigned int num);
int	ft_memcmp(const void *s1, const void *s2, size_t num);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t num);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif
