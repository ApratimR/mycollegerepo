#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* creatnode()
{
    struct node *newaddress;
    newaddress = (struct node*)malloc(sizeof(struct node));
    return newaddress;
}

struct node *head = NULL;
struct node *end = NULL;
struct node *current = NULL;


int main()
{
    printf("??");
    int option = 1,value = 0;
    while (option != 0)
    {
        printf("enter a option");
        scanf("%d",&option);
        if (option == 1)
        {
            current = creatnode();
            printf("enter a value");
            scanf("%d",&value);
            current->data =value;
            current->next =NULL;
            head = current;
            end = current;
        }
        else if (option == 2)
        {
            current = creatnode();
            printf("enter a value");
            scanf("%d",&value);
            end->next = current;
            current->data =value;
            current->next = NULL;
            end = current;
        }
        else if (option == 3)
        {
            current = head;
            while (current->next!=NULL)
            {
                printf("%d==>",current->data);
                current = current->next;
            }
            printf("==>end");
        }
    }
    return 0;
}
