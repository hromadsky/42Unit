char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    int i;
    char *result;
    
    i = 0;
    if (s == NULL)
        return (NULL);
    
    result = (char*)malloc(sizeof(char) * (len + 1));
    
    if (result == NULL)
        return (NULL);
    while (len--)
        result[i++] = s[start++];
    result[i] = '\0';
    return (result);
    
}