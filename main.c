#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int stack[MAX];
int top=-1;
void push(char x)
{
    if(top==MAX-1)
    {
        printf("stack overflow\n");

    }
    else
    {
       top=top+1;
       stack[top]=x;

    }
}
void pop()
{
    printf("%c",stack[top--]);
}
main()
{
   char str[]=" Hello World";
   int len = strlen(str);
   int i;

   for(i=0;i<len;i++)
        push(str[i]);

   for(i=0;i<len;i++)
      pop();
}

