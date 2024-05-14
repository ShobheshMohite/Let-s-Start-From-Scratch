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
    //allocate the mem
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    //initilase the node
    newn->data = No;
    newn->next = NULL;

    //check if the linked list is emopty
    if(*First == NULL)
    {
        *First = newn;

    }
    else
    {
        newn->next = *First;
        *First = newn;
    }

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
