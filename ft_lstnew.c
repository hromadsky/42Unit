t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list *str;
    
    str = (t_list *)malloc(sizeof(t_list));
    if (str == NULL)
        return (NULL);
    if (content == NULL)
    {
        str->content = NULL;
        str->content_size = 0;
    }
    else
    {
        str->content = malloc(content_size);
        if (str->content == NULL)
            return (NULL);
        str->content = ft_memmove(str->content, content, content_size);
        str->content_size = content_size;
    }
    str->next = NULL;
    return (str);
}