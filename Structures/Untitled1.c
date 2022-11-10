#include<stdio.h>

//define the structure
struct cars{
   char make[50];
   char model[50];
   char chasiNo[50];
   int EngCpy;
};

int main()
{
    //declare structure variable for car 1
    struct cars c1;

    //take inputs for car 1 details
    strcpy(c1.make,"Austin");
    strcpy(c1.model,"Mini Cooper");
    strcpy(c1.chasiNo,"E36A-36F6-789K-56GG");
    c1.EngCpy=1300;

    //get an output
    printf("%s\n",c1.make);
    printf("%s\n",c1.model);
    printf("%s\n",c1.chasiNo);
    printf("%d\n",c1.EngCpy);

    struct cars c2;

    strcpy(c2.make,"Morris");
    strcpy(c2.model,"Mini Cooper");
    strcpy(c2.chasiNo,"GX32-5612-I109-7UZX");
    c2.EngCpy=1250;

    printf("\n%s\n",c2.make);
    printf("%s\n",c2.model);
    printf("%s\n",c2.chasiNo);
    printf("%d\n",c2.EngCpy);

}
