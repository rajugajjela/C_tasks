#include<stdio.h>
int main()
{             //swapping of array
    int a[10]={10,20,30,40,50,60,70,80,90,100,200};
    int b[10]={11,22,33,44,55,66,77,88,99,111,222};
    int c[10];
    printf("before swap\n");
    for(int i=0;i<10;i++)
    printf("a[%d]:%d\n",i,a[i]);
    for(int i=0;i<10;i++)
    printf("b[%d]:%d\n",i,b[i]);
    for(int i=0;i<10;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
     printf("after swap\n");
    for(int i=0;i<10;i++)
    printf(" a[%d]:%d\n",i,a[i]);

   
    for(int i=0;i<10;i++)
    printf("b[%d]:%d\n",i,b[i]);
}