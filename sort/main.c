#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[5]={45,-9,23,0,5};
    int i,j,minpos,size=5,min,temp;
    for(i=0;i<size;i++){
        min=data[i];
        minpos=i;
        for(j=i+1;j<size-1;j++){
            if(data[j]<min){
                min=data[j];
                minpos=j;
            }
            temp=data[i];
            data[i]=data[minpos];
            data[minpos]=temp;
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",data[i]);
    }
    return 0;
}
