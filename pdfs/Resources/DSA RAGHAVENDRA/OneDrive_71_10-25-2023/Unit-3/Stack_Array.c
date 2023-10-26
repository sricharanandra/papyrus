#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

struct lifo 
{
   int st[MAXSIZE];
   int  top;
};
typedef struct lifo stack;

void create (stack *s)
{
   s->top = -1;       
       
   /* s->top points to  
      last element 
      pushed in;  
      initially -1 */
}
void push (stack *s, int element)
  {
   if (s->top == (MAXSIZE-1))
   {
     printf ("\n Stack overflow");
         exit(-1);
     }
     else
     {
         s->top++;
         s->st[s->top] = element;
     }
  }

int pop (stack *s)
  {
     if (s->top == -1)
     {
        printf ("\n Stack underflow");
        exit(-1);
     }
     else
     {
        return (s->st[s->top--]);
     }
  }

int isempty (stack *s)
{
   if (s->top == -1)  
          return 1;
   else  
          return (0);
}

void main() 
{
  stack A, B; 
  create(&A);  
  create(&B);
  
  push(&A,10); 
  push(&A,20);
  push(&A,30);
  push(&B,100);  
  push(&B,5);
  
  printf ("%d %d", pop(&A), pop(&B));

  push (&A, pop(&B));

  if (isempty(&B))
    printf ("\n B is empty");
  return;
}
