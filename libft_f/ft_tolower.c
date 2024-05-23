#include <stdio.h>
#include <unistd.h>
int ft_tolower (int c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}
/*
int main (void)
{
    char a;
    char b;

    a = 'b';
    b = ft_tolower(a);
    write(1, &b, 1);
    return(0);
}
*/