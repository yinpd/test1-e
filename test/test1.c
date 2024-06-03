#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch = ' ';
    scanf("请输入一个数:%c",&ch);
    while (ch != '\n')
    {
        /* code */
        if(ch == 'a')
        {
            ch = '*';
        }
        printf("%c",ch);
        scanf("%c",&ch);
    }
    printf("%c\n",ch);
    

}