#include <stdio.h>
#include <stdlib.h>

struct node
{
    int details;
    struct node *ptr;
}*top,*top1,*temp;

int firstelement();
void push(int data);
void pop();
void status();
void display();
void stack_count();
void create();

int count = 0;

void main()
{
    int data, choice;

    printf("1 - Push");
    printf("2 - Pop");
    printf("3 - Top");
    printf("4 - status");
    printf("5 - Dipslay");
    printf("6 - Stack Count");
    printf("7 - Exit");

create();

    while (1)
    {
        printf("Enter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
            {
              int t;
                t = firstelement();
                printf("\n Top element : %d", t);
            }
            break;
        case 4:
            status();
            break;
        case 5:
            display();
            break;
        case 6:
            stack_count();
            break;
        case 7:
            exit(0);
            break;
        default :
            printf("Enter correct choice");
            break;
        }
    }
}

void create()
{
    top = NULL;
}

void stack_count()
{
    printf("No. of elements in stack : %d", count);
}

void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->details);
        top1 = top1->ptr;
    }
}

void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Error stack is empty");
        return;
    }
    else
        top1 = top1->ptr;
    printf("Popped value : %d", top->details);
    free(top);
    top = top1;
    count--;
}

int firstelement()
{
    return(top->details);
}

void status()
{
    if (top == NULL)
        printf("Stack is empty");
    else
        printf("Stack is not empty with elements %d", count);
}
