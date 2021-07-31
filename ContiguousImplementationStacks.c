#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAXSTACK 50

typedef char StackEntry;

typedef struct {
    int top;
    StackEntry entry[MAXSTACK];
}Stack;

typedef bool check;


void CreateStack(Stack *s)
{
    s -> top = -1;

}

check isStackEmpty(const Stack *s){
return (s -> top == -1);
}

check isStackFull(const Stack *s){
return (s -> top == MAXSTACK - 1);};

void Push(StackEntry item, Stack *s){
if(isStackFull(s)){
    printf("stack is full\n");
    exit(1);
}
else{
    //++((*s).top)
    s -> entry[++(s -> top)] = item;
}
}
void Pop(StackEntry *item, Stack *s)
{
if (isStackEmpty(s)) {
printf("Stack is empty\n");
exit(1);
}
else{
    *item = s->entry[(s ->top)--];
}


}



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




