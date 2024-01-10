#include<stdio.h>
#include<string.h>
#define SIZE 5
int Queue[SIZE];
int front=-1;
int rear=-1;
void Cr_enqueue(int);
int Cr_dequeue();
void printQueue();
void main()
{
   
   char choice[10];
   int ch=1,value;
   while(ch==1)
   {
        printf("Enqueue Or Dequeue? \nif Enqueue then press E otherwise D: ");
        scanf("%s",&choice);
        if(!strcmp(choice,"En"))
        {
            printf("Enter the number which you want to insert: ");
            scanf("%d",&value);
            Cr_enqueue(value);
            printf("\n front=%d,rear=%d",front,rear);
        }else{
            Cr_dequeue();
             printf("\n front=%d,rear=%d",front,rear);
        }
        printf("\nIf you want to go on this operation press any number except 0: ");
        scanf("%d",&ch);
   }
}

//FOR INSERTING ELEMENT IN QUEUE


void Cr_enqueue(int n){
    if((front==0 && rear==SIZE-1) || (front==rear+1))
    {
        printf("Queue is full!!");
    }else if(rear==SIZE-1)
        {
            rear=0;
        }else if(front==-1){
                front=0;
                rear=0;
            }else{
                rear++;
            }
    Queue[rear]=n;
}


//FOR DELETING ELEMENT FORM QUEUE

int Cr_dequeue(){
    int temp;
    if(rear==-1){
        printf("Queue is empty!!");
        return 0;
    }else if(rear==front)
            {
                temp=Queue[front];
                front=-1;
                rear=-1;
                return temp;
            }else if(front==SIZE-1){
                front=0;
            }else{
                front++;
            }
}


//FOR PRINTING THE QUEUE LIST


void printQueue(){
    printf("The Queue list are: ");
    for(int i=0;i<=rear;i++)
    {
        printf("%d  ",Queue[i]);
    }
}




//  int ch,value,returnvalue;
//     do{
//         printf("Enter the number: ");
//         scanf("%d",&value);
//         enqueue(value);
//         printf("Press: ");
//         scanf("%d",&ch);
//     }while(ch!=0);
//     printf("fornt=%d,rear=%d\n",front,rear);
//     printQueue();
//     do{
//             returnvalue=dequeue();
//             if(returnvalue==0)
//             break;
//             printf("\nDeleted Value: %d\n",returnvalue);
//             printf("fornt=%d,rear=%d\n",front,rear);
//         printf("Press: ");
//         scanf("%d",&ch);
//     }while(ch!=0);