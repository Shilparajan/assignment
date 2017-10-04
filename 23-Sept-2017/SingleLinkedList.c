#include<stdio.h>
#include<stdlib.h>
typedef struct node
    {
       int data ;
       struct node *next ;
    } NODE ;

    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;

int CreateList
    NODE *first, *temp = 0;
    first = 0;
    head  = (NODE *)malloc(sizeof(NODE));
    printf("Enter the data item\n");
    scanf("%d", &head-> data);
    if (first != 0)
        {
            temp->next = head;
            temp = head;
        }
    else
        {
            first = temp = head;
        }

int AddNode
    int i;
    struct node *temp;

    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = rand() % num;
        if (*head == NULL)
        {
            *head = temp;
            temp->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
        printf("%d  ", temp->a);

int DeleteNode
struct node *temp;

    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }

int main()
    {
        int flag ;
        int choice ;
        int CreateList;
        int DisplayList;
        int AddNode;
        int DeleteNode;
        int DeleteList;
        int SearchList;
        flag = 1 ;

        while (flag ==1)
        {
        printf("Operation available");
        printf("1. CreateList");
        printf("2. AddNode");
        printf("3. DeleteNode");
        printf("4. DisplayList");
        printf("5. DeleteList");
        printf("6. SearchList");
        printf("7. Exit");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        }
             choice = DisplayMenu() ;
             switch(choice)
             {  case 1 :
                {
                     CreateList() ;
                     break ;
                }
                case 2:
                {
                     AddNode();
                     break ;
                }
                case 3:
                {
                     DeleteNode();
                     break ;
                }
                case 4:
                {
                  if(head==NULL)
                   {
                     printf("List is Empty\n");
                   }
                  else
                   {
                   DisplayList() ;
                   }
                      break ;
                }
                case 5:
                {
                     DeleteList() ; /* travese through the list and remove each element by element */
                     break ;
                }
                case 6:
                {
                    SearchList();
                    break ;
                }
                case 7:
                {
                    flag = 0 ;
                    break ;
                }
                default:
                {
                   break ;
                }
             }
        }
    }
