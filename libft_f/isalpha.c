int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return(0);
}

/*
int main(void)
{
    char a;

    a = 'b';
    return(ft_isalpha(a));
}
*/