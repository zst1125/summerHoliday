#include <stdio.h>
#include <stdlib.h>

#define ERROR NULL
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

Position Find( List L, ElementType X );
List Insert( List L, ElementType X, Position P );
List Delete( List L, Position P );

int main()
{
    List L;
    ElementType X;
    Position P, tmp;
    int N;

    L = NULL;
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        L = Insert(L, X, L);
        if ( L==ERROR ) printf("Wrong Answer\n");
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        P = Find(L, X);
        if ( P == ERROR )
            printf("Finding Error: %d is not in.\n", X);
        else {
            L = Delete(L, P);
            printf("%d is found and deleted.\n", X);
            if ( L==ERROR )
                printf("Wrong Answer or Empty List.\n");
        }
    }
    L = Insert(L, X, NULL);
    if ( L==ERROR ) printf("Wrong Answer\n");
    else
        printf("%d is inserted as the last element.\n", X);
    P = (Position)malloc(sizeof(struct LNode));
    tmp = Insert(L, X, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    tmp = Delete(L, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    for ( P=L; P; P = P->Next ) printf("%d ", P->Data);
    return 0;
}

/* 你的代码将被嵌在这里 */
Position Find( List L, ElementType X )
{
    while(L)
    {
        if(L->Data==X)
        {
            return L;
        }
        L=L->Next;
    }
    return ERROR;
}

List Insert( List L, ElementType X, Position P )
{
    List ptr = (List)malloc(sizeof(List));
    ptr->Data = X;
    if(L == P)
    {
        ptr->Next = L;
        L=ptr;
        return L;
    }
    List ptr1;
    ptr1 = L;
    while(ptr1)
    {
        if(ptr1->Next == P)
        {
            ptr->Next = P;
            ptr1->Next = ptr;
            return L;
        }
        ptr1=ptr1->Next;
    }
    printf("Wrong Position for Insertion\n");
    return ERROR;
}

List Delete( List L, Position P )
{
    if(L == P)
    {
       return L->Next;
    }
    List ptr = L;
    while(ptr)
    {
        if(ptr->Next == P)
        {
            ptr->Next = P->Next;
            return L;
        }
        ptr = ptr->Next;
    }
    printf("Wrong Position for Deletion\n");
        return ERROR;
    
}
