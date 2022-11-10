#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[5]={9,3,0,5,2};
    int i,j,temp,size=5;
    for(i=0;i<=size;i++){
        for(j=0;j<size-1;j++){
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",data[i]);
    }

    return 0;
}
