#ifndef HEADER_H
#define HEADER_H
#include <stddef.h>

void	ft_bzero(void * block, size_t size);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int  c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memmove(void * to, const void * from, size_t size);

void	*ft_memset(void * block, int c, size_t size);

void	*ft_memcpy(void * restrict to, const void * restrict from, size_t size);

char	*ft_strchr(const char * str, int c);

size_t	ft_strlcat(char * dst, const char * src, size_t size);

size_t	ft_strlcpy(char * dest, const char * src, size_t size);

size_t	ft_strlen(const char * str);

int		ft_tolower(int  c);

int		ft_toupper(int c);

#endif