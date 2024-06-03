#include <stdio.h>
#include <stdlib.h>

int swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // printf("a=%d,b=%d\n",*a,*b);
    // printf("a=%d,b=%d\n",a,b);
}

int jiecheng(int num)
{
    int s = 1;
    while (num > 1)
    {
        s *= num;
        num--;
    }
    printf("s=%d\n",s);
}

int main()
{
    int a = 3;
    int b = 4;
    jiecheng(b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("hello world\n");
    return 0;
}