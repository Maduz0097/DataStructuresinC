#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



#define MAXLIST 10

#define EMPTY -1
#define FULL MAXLIST - 1

bool Check; //imported bool datatype from stdbool.h header file

typedef char ListEntry;

typedef int Location;
//user define variable for list

typedef struct {
			int count;
			ListEntry entry[MAXLIST];
		   }List;

//This function is used to create the list using List data type
void CreateList(List *l)
{
   l->count = -1;
}

//this function is used to check whether list is empty or not because we can't delete list item from a empty list
Check  IsListEmpty(const List *l)
{
  return (l->count == EMPTY);
}

//this function is to evaluate the list size; when we are deleting a list item, the location or the position of the list item must be a valid one.

int ListSize (const List *l)
{
  return (l->count+1);
}


//

void Warning(char *message)
{
  fprintf(stderr, "Warning %s\n", message);
}


void Error(char *message)
{
  fprintf(stderr, "Error %s \n", message);
  exit(1);
}

//DeleteList function accepts three arguments, a List,ListEntry and a list item location to be deleted.
void DeleteList( List *l,ListEntry *x,Location a)
{
  int i;

  if (IsListEmpty(l))
fprintf(stderr, "List is empty!!!\n");
  else if (a < 0 || a >= ListSize(l))
    fprintf(stderr, "Invalid Location!!\n");

	 else
	 {
	   *x = l->entry[a];
	   for( i = a; i < ListSize(l); i++)
		l->entry[i] = l->entry[i+1];

	   l->count--;
	 }
}

//Once we created a list and inserted list items we can call DeleteList function and delete list items.
