int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
/*
int main (void)
{
    char *b = "Ahoj To hel test  je";

    return (ft_strlen(b));
}
*/