#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[10]={21,29,32,37,41,49,55,60,75,98};
    int key,mid,first=0,last=9;

    printf("Enter key to search:");
    scanf("%d",&key);

    while(first<=last)
    {
        mid=(first+last)/2;
        if(key==data[mid]){
            printf("data found at %d\n",mid);
            break;
        }
        if(key<data[mid])
            last=mid-1;
        if(key>data[mid])
            first=mid+1;
    }

    return 0;
}
