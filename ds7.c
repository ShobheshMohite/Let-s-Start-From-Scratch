//delete first node
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

void InsertLast(PPNODE First,int No){
    //allocate the mem
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    PNODE temp = *First;

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
        while (temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = newn;
    }

}

void DeleteFirst(PPNODE First){
    PNODE temp = *First;

    if(*First == NULL){
        return;
    }
    else if((*First)-> next == NULL){
        free(*First);
        *First = NULL;
    }
    else {
        (*First) = (*First) -> next;
        free(temp);
    }
}

void Display(PNODE First){
    printf("Elements Of Linked List Are : \n");
    while(First != NULL){
        printf("| %d | -> ",First->data);
        First = First ->next;
    }
    printf("NULL\n");
}

int NodeCount(PNODE First)
{
    int Count = 0;
    while(First != NULL)
    {
        Count++;
        First = First->next;
    }
    return Count;
}

int main(){
    
    int iRet = 0;
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,31);
    InsertFirst(&Head,21);

    Display(Head);

    iRet = NodeCount(Head);
    printf("Total Number Of Nodes in linked list are : %d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,111);

    Display(Head);

    iRet = NodeCount(Head);
    printf("Total Number Of Nodes in linked list are : %d\n",iRet);
    
    return 0;
}
