#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main (void)
{
    char a;
    char *b;

    a = 'b';
    b = "neirheithbacbqdasdfasdfbfafda";
    printf("%s\n", strrchr(b, a));
    return(0);
}
