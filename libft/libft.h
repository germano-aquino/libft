#ifndef HEADER_H
#define HEADER_H
#include <stddef.h>

void	ft_bzero(void * block, size_t size);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int  c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void    *ft_memchr(const void *block, int c, size_t size);

int     ft_memcmp(const void *s1, const void *s2, size_t size);

void	*ft_memmove(void * to, const void * from, size_t size);

void	*ft_memset(void * block, int c, size_t size);

void	*ft_memcpy(void *to, const void *from, size_t size);

char	*ft_strchr(const char * str, int c);

char    *ft_strdup(const char *str);

char    *ft_strjoin(const char *s1, const char *s2);

int     ft_strncmp(const char *s1, const char *s2, size_t size);

char    *ft_strnstr(const char *big, const char *little, size_t size);

char    *ft_strtrim(char const *str, char const *set);

char    *ft_substr(char const *s, unsigned int start, size_t len);

size_t	ft_strlcat(char * dst, const char * src, size_t size);

size_t	ft_strlcpy(char * dest, const char * src, size_t size);

size_t	ft_strlen(const char * str);

int		ft_tolower(int  c);

int		ft_toupper(int c);

int     ft_atoi(const char *str);

void    *ft_calloc(size_t count, size_t eltsize);

char    **ft_split(char const *s, char c);

#endif