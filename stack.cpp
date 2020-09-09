#include <stdio.h>
#include <stdlib.h>
 
struct sNode
{
    int a;
    struct sNode *next;
};
 
void generate(struct sNode **);
void Display(struct sNode *);
void stack_reverse(struct sNode **, struct sNode **);
void Delete(struct sNode **);
 
int main()
{
    struct sNode *top = NULL;
 
    generate(&top);
    printf("Original Stack \n");
    Display(top);
   
    if (top != NULL)
    {
        stack_reverse(&top, &(top->next));
    }
    printf("\nReversed Stack \n");
    Display(top);
    Delete(&top);
 
    return 0;
}
 
void stack_reverse(struct sNode **top, struct sNode **head_next)
{
    struct sNode *temp;
 
    if (*head_next != NULL)
    {
         temp = (*head_next)->next;
        (*head_next)->next = (*top);
        *top = *head_next;
        *head_next = temp;
        stack_reverse(top, head_next);
    }
}
 
void Display(struct sNode*top)
{
    if (top != NULL)
    {
        printf("%d ", top->a);
        Display(top->next);
    }
}
 
void generate(struct sNode **top)
{
    int num, i;
    struct sNode *temp;
 

    scanf("%d", &num);
    for (i = num; i > 0; i--)
    { int y;
     scanf("%d",&y);
        temp = (struct sNode *)malloc(sizeof(struct sNode));
        temp->a = y;
        if (*top == NULL)
        {
            *top = temp;
            (*top)->next = NULL;
        }
        else
        {
            temp->next = *top;
            *top = temp;
        }
    }
}
 
void Delete(struct sNode **top)
{
    struct sNode *temp;
    while (*top != NULL)
    {
        temp = *top;
        *top = (*top)->next;
        free(temp);
    }
}
