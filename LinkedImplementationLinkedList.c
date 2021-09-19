#include <stdio.h>
#include <stdlib.h>

typedef enum {false,true} bool;

typedef int ListEntry;
typedef int Position;

typedef struct listnode{
listnode entry;
struct listnode *next;
}ListNode;

typedef struct{
int count;
bool full;
ListNode *head;
}List;

void CreateList(List *l)
{
   l -> count = 0;
   l -> head = NULL;
   l -> full = false;


}
bool IsListEmpty(const List *l)
{
    return(l->head==NULL);
}
bool IsListFull(const List *l)
{
    return(l->full);
}
int ListSize(const List *1)
{
    return(l->count);
}
ListNode *MakeListNode(ListEntry x)
{
    ListNode *p = (ListNode*)malloc(sizeof(ListNode));
    if(p){
        p -> entry = x;
        p -> next = NULL;
    }
    return(p);
}
SetPosition(Position p,List *l,ListNode **current)
{
    int count;
    ListNode *q;
    if(p < 0 || p >= l->count)
        Error(" ");
    else{
        q = l -> head;
        for(count = 1;count <= p;count++){
            q = q -> next;
            *current = q;
        }
    }
}
void InsertList(Position p,ListEntry x,List *l)
{
    ListNode *newnode,*current;
    if(p<0 || p>ListSize(l))
        Error(" ");
    else{
        newnode = MakeListNode(x);
        if(newnode == NULL)
        {
            l -> full = true;
            Error(" ");
        }
        else if(p==0){
                newnode -> next = l  -> head;
        l -> head = newnode;

        }
        else{
            SetPosition(p-1,l,&current);
            newnode -> next = current -> next;
            current -> next = newnode;
        }
        l -> count++;
    }
}
