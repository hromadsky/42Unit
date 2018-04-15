static int wordlen(char *w, char d)
{
    unsigned int i;
    
    i = 0;
    while (*w != d)
    {   
        i++;
        w++;
    }
    return (i);
}

static int wordcount(char *s, char d)
{
    unsigned int i;
    
    i = 0;
    while (*s)
    {
        if (*s != d)
        {
            i++;
            while (*s != d && *s)
            {
                s++;
            }
        }
        else
            s++;
    }
    return (i);
}

char ** ft_strsplit(char const *s, char c)
{
    char **result;
    unsigned int i;
    
    result = (char **)malloc(sizeof(char *) * (wordcount(s, c)) + 1);
    if (result == NULL)
		return (NULL);
    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            result[i++] = ft_strsub(s, 0, wordlen(s, c));
            while(*s != c && *s)
                s++;
        }
        else
            s++;
    }
    result[i] = NULL;
    return (result);
}