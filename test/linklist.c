#include<stdlib.h>
#include<stdio.h>

// typedef int Data;
typedef struct linklist
{
    /* data */
    int data;
    struct linklist *next;
}linklist;

//链表初始化
linklist* CreateLinklist()
{
    linklist *head = (linklist *)malloc(sizeof(linklist));
    if(NULL == head)
    {
        printf("开辟空间失败");
        return NULL;
    }
    head->data = -1;
    head->next = NULL;
    return head;
}

//尾插
void Insert_Tail(linklist *head,int data)
{
    linklist *p = head;
    while (p->next != NULL)
    {
        /* code */
        p = p->next;
    }
    linklist *new = (linklist *)malloc(sizeof(linklist));
    p->next       = new;
    new->data     = data;
    new->next     = NULL;
}

//头插
void Insert_Head(linklist *head,int data)
{
    linklist *p   = head;
    linklist *new = (linklist *)malloc(sizeof(linklist));
    new->next     = p->next;
    p->next       = new;
    new->data     = data;
}

//按位置插入 0，1，2...
void Insert_Pos(linklist *head,int pos,int data)
{
    linklist *new = (linklist *)malloc(sizeof(linklist));
    linklist *p   = head;
    for (size_t i = 0; i < pos; i++)
    {
        /* code */
        p = p->next;
    }
    new->next     = p->next;
    p->next       = new;
    new->data     = data;
}

//按数据删除
void Delete_Data(linklist *head,int data)
{
    linklist *p = head;
    while (p->next->data != data)
    {
        /* code */
        p = p->next;
    }
    p->next = p->next->next;
}

//按位置删除 0,1,2...
int Delete_Pos(linklist *head,int Pos)
{
    int data = 0;
    linklist *p = head;
    for (size_t i = 0; i < Pos; i++)
    {
        /* code */
        p = p->next;
    }
    data    = p->next->data;//保存被删除节点的数据
    p->next = p->next->next;
    return data;

}

//按位置修改 0,1,2...
void Modify_Pos(linklist *head,int Pos,int data)
{
    linklist *p = head;
    for (size_t i = 0; i < Pos; i++)
    {
        /* code */
        p = p->next;
    }
    p->next->data = data;//修改数据
}

//遍历链表
void ShowLinklist(linklist *head)
{
    linklist *p = head;
    while (p->next != NULL)
    {
        /* code */
        printf("%d ",p->data);
        p = p->next;
    }
    printf("%d\n",p->data);
}

int main()
{
    linklist *head = CreateLinklist();
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        Insert_Tail(head,i);
    }
    Insert_Head(head,10);
    Insert_Pos(head,3,11);
    Delete_Data(head,11);
    Delete_Pos(head,0);
    Modify_Pos(head,0,10);
    ShowLinklist(head);
}