int ft_isalnum (int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
    || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}

/*
int main (void)
{
    char b;

    b = 62;
    return (ft_isalnum (b));
}
*/