
#include <stdio.h>
#define MAXSIZE 5
 
struct stack
{
    int str[MAXSIZE];
    int data;
};
typedef struct stack STACK;
STACK s;
 

void push ()
{
    int num;
    if (s.data == (MAXSIZE - 1))
    {
        printf ("Tran bo nho\n");
        return;
    }
    else
    {
        printf ("Nhap phan tu \n");
        scanf ("%d", &num);
        s.data = s.data + 1;
        s.str[s.data] = num;
    
    }
    return;
}

int pop ()
{
    int num;
    if (s.data == - 1)
    {
        printf ("Bo nho trong \n");
        return (s.data);
    }
    else
    {
        num = s.str[s.data];
        printf ("Phan tu xoa la = %dn", s.str[s.data]);
        s.data = s.data - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (s.data == -1)
    {
        printf ("Bo nho trong\n");
        return;
    }
    else
    {
        printf ("\n Bo nho duoc sap xep la \n");
        for (i = s.data; i >= 0; i--)
        {
            printf ("%d\n", s.str[i]);
        }
    }
    printf ("\n");
}
 
void main ()
{
    int choice;
    int option = 1;
    s.data = -1;
 
    printf ("Lua chon STACK \n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    Them phan tu              \n");
        printf ("      2    -->    Xoa phan tu             \n");
        printf ("      3    -->    Trang thai sap xep               \n");
        printf ("      4    -->    Thoat           \n");
        printf ("------------------------------------------\n");
 
        printf ("Lua chon cua ban la\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Ban co muon tiep tuc(Chon 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}
