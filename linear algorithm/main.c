#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    int value;
    int found=0;

    int data[10]={10,20,30,40,50,60,70,80,90,100};

    printf("Enter your value :");
    scanf("%d",&value);

    while(count<10 && found==0)
    {
        if(value==data[count]){
            printf("data found at %d position\n",count);
            found=1;
        }
        count=count+1;
    }

    printf("count value %d\n",count);

    if(found==0)
        printf("data is not in the list");

    return 0;
}
