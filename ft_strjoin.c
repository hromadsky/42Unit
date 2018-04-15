char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *result;
    
    i = 0;
    if (s1 == NULL || s2 == NULL)
        return (NULL);
    result = (char *)malloc(sizeof(char)*(ft_strlen(s1) + ft_strlen(s2) + 1));
    if (result == NULL)
        return (NULL);
    while (s1[i])
        result[i] = s1[i++];
    j = 0;
    while (s2[j])
        result[i++] = s2[j++];
    result[i] = '\0';
    return (result);
}