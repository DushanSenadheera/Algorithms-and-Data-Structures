#include <stdio.h>
#include <stdlib.h>

int main()
{

    int data[10]={12,85,3,98,-4,0,7,100,10,31};
    int i=0,j,min,max,size=10,minpos=j,temp;

    while(i<size)
    {
        min=data[i];
        j=i+1;

        while(j<size)
        {
            if(data[j]<min)
            {
                min=data[j];
                minpos=j;
            }
            j=j+1;
        }
        temp=data[i];
        data[i]=data[minpos];
        data[minpos]=temp;

        i=i+1;

    }

    printf("sorted data set\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",data[i]);
    }

    return 0;
}
