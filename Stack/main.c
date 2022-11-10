#include <stdio.h>
#include <stdlib.h>

int stack[10];
int top=-1;
int size=10;

void push(int data)
{
    int i;
    if(isfull()==0)
    {
      top=top+1;
      stack[top]=data;
    }
    else
        printf("stack is full");
}

int pop()
{
    int temp;

    if(isempty()==0)
    {
     temp=stack[top];
     top=top-1;
    }
    else
        printf("cant extract values, stack is empty\n");


    return temp;
}

int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void printdata()
{
    int i;

    printf("stack contents\n");

    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int isfull()
{
    if(top==size-1)
        return 1;
    else
        return 0;
}

int main()
{
    push(56);
    push(13);
    push(7);
    push(12);
    push(77);
    push(83);
    push(67);
    push(22);
    push(20);
    push(78);
    push(66);
    push(98);
    push(45);

    //printdata();
    //printf("removed value is %d\n",pop());
    //printf("removed value is %d\n",pop());
    //printf("removed value is %d\n",pop());
    //printf("removed value is %d\n",pop());
    //printdata();

    return 0;
}
