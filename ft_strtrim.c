static int ft_iswhite(char c)
{
    if (c == ' ')
        return 1;
    return 0;
}

char * ft_strtrim(char const *s)
{
    int b;
    int e;
    
    e = ft_strlen(s);
    b = 0;
    
    if(ft_iswhite(s[b]))
    {
        while (ft_iswhite(s[b]))
            b++;
    }
    if(ft_iswhite(s[e]) || s[e] == '\0')
    {
        while (ft_iswhite(s[e]) || s[e] == '\0')
            e--;
    }
    
    return (ft_strsub (s, b, e - b + 1));
}