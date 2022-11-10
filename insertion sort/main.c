#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[5]={6,3,7,12,10};
    int i,j,key;

    for(i=1;i<5;i++){
        j=i-1;
        key=data[i];

        while(j>=0 && data[j]>key){
            data[j+1]=data[j];
            j=j-1;
        }
        data[j+1]=key;
    }
    for(i=0;i<5;i++){
        printf("%d\t",data[i]);
    }

    return 0;
}
