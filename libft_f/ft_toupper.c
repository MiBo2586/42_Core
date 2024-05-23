#include <stdio.h>
#include <unistd.h>
int ft_toupper (int c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}
/*
int main (void)
{
    char a;
    char b;

    a = 'z';
    b = ft_toupper(a);
    write(1, &b, 1);
    return(0);
}
*/