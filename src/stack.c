#include "stack.h"

void initialize(stack* s){
  //implement initialize here
 s -> head = NULL; //Initialize by setting head to NULL
}

void push(int x, stack* s){
    //implement push here
      node *next_node = (node*)malloc(sizeof(node)); //Creates memory space size of node
      next_node -> next = s -> head; //Links node to start of list
      s -> head = next_node; //head pointer now points to new empty memory space size of node
      s -> head -> data = x; //Pushes value x to head
}

int pop(stack* s)
{
  // implement pop here
  int pop_value;
  node *temp = s -> head; //temporary ptr for free space
  pop_value = s -> head -> data;
  s -> head = s -> head -> next; //makes the ptr head point to the next element in the list
  free(temp); //Free the space head pointed to before
    
  return pop_value;
}

bool empty(stack* s)
{
  //implement empty here
  if(s -> head == NULL) //checks if head is NULL if true the stack is empty
    return true;

  return false;
}

bool full(stack* s) {
    //implement full here
    /*Making a function to check if its full does not really make any sense, since the only limitation for a linked list
    like this one is the entire memory
    I assume this is also why there are no test cases to check if this function was made properly*/
  return false;
}

void printALL(stack* s) {
  node *n = s -> head;
  while (n != NULL)
  {
    printf("| %d ", n->data);
    n = n->next;
  }
  printf("|\n");
}