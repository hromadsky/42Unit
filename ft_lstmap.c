t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *new;
    
    if (lst != NULL && f != NULL)
    {
        new = f(lst);
        if (lst->next != NULL && new != NULL)
            new->next = ft_lstmap(lst->next, f);
        return (new);
    }
    return (NULL);
}