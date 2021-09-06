#include<stdio.h>
#include<string.h>


char s[5][55] = {
	"XXX...X.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX.",
	"X.X...X...X...X.X.X.X...X.....X.X.X.X.X.",
	"X.X...X.XXX.XXX.XXX.XXX.XXX...X.XXX.XXX.",
	"X.X...X.X.....X...X...X.X.X...X.X.X...X.",
	"XXX...X.XXX.XXX...X.XXX.XXX...X.XXX.XXX.",
};



int main()
{
    
	int n;
	int len, i, x;
	int j, k;
	char str[110];
	scanf("%d", &n);
	scanf("%s", str, 110);
	len = strlen(str);
	for (j = 0; j < 5; ++j)
	{
		for (i = 0; i < len - 1; ++i)
		{
			x = str[i] - '0';
			for (k = 4 * x; k <= 4 * x + 3; ++k)
				printf("%c", s[j][k]);
		}
		x = str[i] - '0';
		for (k = 4 * x; k <= 4 * x + 2; ++k)
			printf("%c", s[j][k]);
		printf("\n");
	}
	return 0;
}
