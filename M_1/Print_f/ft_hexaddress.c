static int  rec_print(unsigned long n, const char *base)
{
    int i;

    i = 0;
    if (n > ft_strlen(base) - 1)
        i = i + rec_print(n/(ft_strlen(base)), base);
}

int ft_hexaaddress (void *format)
{
    unsigned long   n;
    const char      *base;
    int             len;

    n = (unsigned long) format;
    base = "0123456789abcdef";
    len = ft_putstr ("0x");
    len = len + ft_add (n, base);
    return (len);
}