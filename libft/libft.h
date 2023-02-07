# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
int ft_isalpha(int a);
int ft_isdigit(int a);
int ft_isascii(int a);
int ft_isalnum(int a);
int ft_isprint(int a);
size_t	ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void	ft_bzero (void *s, size_t n);
void	*ft_memcpy (void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
