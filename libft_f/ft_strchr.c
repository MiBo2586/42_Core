#include <stdio.h>
#include <unistd.h>
#include <string.h>
char *ft_strchr (const char *s, int c)
{
    char *n;

    n = (char *)s;
    while (*n != '\0')
    {
        if (*n == c)
            return (n);
        n++;
    }
    if (*n == '\0')
        return(0);
    return(0);
}

int main (void)
{
    char a;
    char *b;

    a = 'b';
    b = "neirheithzacbqdasdfasdfbfafda";
    printf("%s\n", ft_strchr(b, a));
    return(0);
}

