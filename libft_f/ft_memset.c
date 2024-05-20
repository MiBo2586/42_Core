#include <stdio.h>
#include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
    int i;
    char *p;

    i = 0;
    p = (char *)s;
    while (p[i] <= n)
    {
        p[i] = (char *)c;
        i++;
    }
    s = (void *)s
    return (s);
}

int main (void)
{
    int b;
    int n;

    char s[20] = "00000000000000";
    b = 92;    
    n = 5;
    printf  ("%p\n", (ft_memset(s, b, n)));
    return(0);
}
