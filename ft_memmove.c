void *ft_memmove(void *to, const void *from, int numBytes)
{
    unsigned char* str_to = (unsigned char *)to;
    const unsigned char* str_from =(const unsigned char *)from;
    int i = 0;

    if (str_to == '\0' || str_from == '\0')
        return 0;
    while (i < numBytes)
    {
        str_to[i] = str_from[i];
        i++;
    }
    str_to[i] = '\0';
    return str_to;
}