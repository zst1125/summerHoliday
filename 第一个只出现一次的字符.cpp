#include<cstdio>
#include<cstring>
using namespace std;
char ch[100000];
int s=0;
int main()
{
	scanf("%s",ch);
	for(int i=0;i<strlen(ch);i++)
	{
		s=0;  
		for(int j=0;j<strlen(ch);j++)
		{
			if(ch[i]==ch[j])
				s++;
		}		
		if(s==1)
		{
		printf("%c",ch[i]);
		return 0;
		}	
    }
	printf("no");
 } 


