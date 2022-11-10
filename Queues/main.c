#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front=0;
int rear=-1;
int max=4;

int isEmpty()
{
    if(rear==-1 || front>rear)
        //printf("queue is empty");
        return 1;
    else
        //printf("queue is not empty yet");
        return 0;
}

int isFull()
{
    if(rear==max)
        //printf("queue is full!\n");
        return 1;
    else
        //printf("queue is not full\n");
        return 0;
}

int enqueue(int data)
    {
        if(isFull()==0){
            rear=rear+1;
            queue[rear]=data;
        }
        else
            printf("cannot add values queue is full");
    }

int print()
    {
        int i;
        printf("the queue\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }

int dequeue()
{
  if(isEmpty()==0)
  {
    printf("extracted value is %d\n",queue[front]);
    front=front+1;
  }
  else
    printf("cant dequeue, queue is empty\n");
}

int main()
{
    enqueue(25);
    enqueue(75);
    //enqueue(85);
    //isFull();
    //enqueue(100);
    //enqueue(125);
    //enqueue(400);
    //enqueue(800);
    //isFull();
    //print();
    dequeue();
    dequeue();
    dequeue();
    //print();

    return 0;
}
