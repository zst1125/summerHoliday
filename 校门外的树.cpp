#include<stdio.h>  
int main()  
{  
    int L, M, i, j, n;  
    int a[10001], b[10001];  
    scanf("%d %d",&L, &M);
    n = M*2;
    for(i=0; i<n; i+=2)  
        scanf("%d %d", &b[i], &b[i+1]);  
    for(i=0; i<=L; i++)
        a[i] = i;  
    int r, s;  
    for(i=0; i<n; i+=2)
    {  
        r = b[i];
        s = b[i+1];
        for(j=r; j<=s; j++)  
            a[j] = -1;  
    }  
    int k=0;
    for(i=0; i<=L; i++)  
    {  
        if(a[i] != -1)  
            k++;
    }  
    printf("%d", k);
    return 0;  
}
