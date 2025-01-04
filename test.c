#include "libft.h"

void printing(void *data)
{
    printf("%c\n", *(char *)data);
}

int main()
{
    t_list *list = NULL;
            char *s1 = "a";
        char *s2 = "b";
        char *s3 = "c";
        char *s4 = "d";

        t_list *n1 = ft_lstnew(s1);
        t_list *n2 = ft_lstnew(s2);
        t_list *n3 = ft_lstnew(s3);
        t_list *n4 = ft_lstnew(s4);

    
        list =  n1;
        n1->next = n2;
            n2->next = n3;
        n3->next = n4;
        n4->next = NULL;
    
    ft_lstiter(list, &printing);
	free(list);
	free(n2);
        free(n3);
	free(n4);
}