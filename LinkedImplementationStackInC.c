#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef char StackEntry;

typedef struct node{
StackEntry entry;
struct node *next;

}Node;

typedef bool check;

typedef struct{
int no_ele;
check full;
Node *top;

}Stack;


void CreateStack(Stack *s)
{
    s -> top = NULL;
    s ->no_ele = 0;
    s -> full = false;
}

check isStackEmpty(const Stack *s)
{
    return (s->top == NULL);
}

void Pop(StackEntry *item,Stack *s)
{

    Node *np;
    *item = s -> top -> entry;
    np = s -> top;
    s -> top = s->top->next;
    s->no_ele--;
    free(np);
}
void Push(StackEntry item, Stack *s)
{
Node *np;
np =(Node *)(malloc(sizeof(Node)));
if (np == NULL)
{
printf("not enough memory");
s->full = true;
}
else{
np ->entry = item;
np->next = s -> top;
s->top = np;
s->no_ele++;
}}

int main()
{
Stack S; int i; char c;
char str[] = "This is an example using stacks";

CreateStack(&S);
printf("\n The string is : \n %s", str);
for (i = 0; str[i] != '\0'; i++){
 if (!isStackFull(&S)){
   Push(str[i], &S);
   };

};

printf("\nThe string from the stack: \n");

while (!isStackEmpty(&S))
{
Pop(&c,&S);
printf("%c",c);
};
return 0;
};

