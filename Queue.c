#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;

 
void enqueue()
{
    int item;
    if (Rear == SIZE - 1)
       printf("Tran bo nho \n");
    else
    {
        if (Front == - 1)
       
        Front = 0;
        printf("Phan tu duoc them vao QUEUE\n : ");
        scanf("%d", &item);
        Rear = Rear + 1;
        inp_arr[Rear] = item;
    }
} 
  
void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Bo nho rong \n");
        return ;
    }
    else
    {
        printf("Phan tu duoc xoa tu QUEUE: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
} 
  
void show()
{
     
    if (Front == - 1)
        printf("Bo nho rong \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
} 
void main()
{
    int ch;
    while (1)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    Them phan tu            \n");
        printf ("      2    -->    Xoa phan tu             \n");
        printf ("      3    -->    Trang thai sap xep      \n");
        printf ("      4    -->    Thoat                   \n");
        printf ("------------------------------------------\n");
        printf ("Lua chon cua ban la\n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Lua chon sai \n");
        } 
    } 
   
} 
  
