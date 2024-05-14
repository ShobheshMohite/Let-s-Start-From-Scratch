#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No){
    //
}

void Display(PNODE First){

}

int main(){

    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,31);
    InsertFirst(&Head,21);

    Display(Head);

    return 0;
}
