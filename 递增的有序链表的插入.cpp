#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Insert( List L, ElementType X )
{
    List ptr=(List)malloc(sizeof(List));
    List p1,p2;
    ptr->Data=X;
    if(L==NULL)
    {
        L->Next=ptr;
        return L;
    }
    p1=L;
    if(p1->Data>X)
    {
        ptr->Next=L->Next;
        L->Next=ptr;
        return L;
    }
    while(p1->Data<=X)
    {
        p1=p1->Next;
        if(p1 == NULL)
        {
            for(p2=L;p2->Next!=NULL;p2=p2->Next);
            p2->Next=ptr;
            ptr->Next=NULL;
            return L;
        }
    }
    for(p2=L;p2->Next!=p1;p2=p2->Next);
    ptr->Next=p1;
    p2->Next=ptr;
    return L;
}
