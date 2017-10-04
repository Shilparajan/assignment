#include<stdio.h>
#include<stdlib.h>
typedef struct node
    {
       int data ;
       struct node *left ;
       struct node *right ;
    } NODE ;

    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;

int CreateList
{
int data;
int count=0;

    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
}

int main()
    {
        int flag ;
        int choice ;
        int CreateList;
        int AddNode;
        int DisplayForward;
        int DisplayReverse;
        int DeleteList;
        int SearchList;
        flag = 1 ;

        while (flag ==1)
        {
        printf("Operation available");
        printf("1. CreateList");
        printf("2. AddNode");
        printf("3. DeleteNode");
        printf("4. DisplayForward");
        printf("5. DisplayReverse");
        printf("6. DeleteList");
        printf("7. SearchList");
        printf("8. Exit");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
         }
             switch(choice)
             {
             case 1 :
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
                    DisplayForward() ;
                    break ;
                }
                case 5:
                {
                    DisplayReverse() ;
                    break ;
                }
                case 6:
                {
                     DeleteList() ; /* travese through the list and remove each element by element */
                     break ;
                }
                case 7:
                {
                    SearchList();
                    break ;
                }
                case 8:
                {
                flag=0;
                break;
                }
                default:
                {
                   break ;
                }
             }
        }
    }
