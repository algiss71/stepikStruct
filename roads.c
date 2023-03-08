/*
0 1 0 0 0 
1 0 1 1 0
0 1 0 0 0
0 1 0 0 0
0 0 0 0 0
*/

#include <stdio.h>
#define input(x) scanf("%d",&x);
#define printInt(x) printf("%d\n",x)
void printArr(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
}
int main()
{

    
	int n = 0;
	int k = 0;
	int j = 0;
	char nextch;
	input(n)
	int a[n][n];
	for (int i = 0; i < n; ++i)
		{
			do{
			scanf("%d%c", &k,&nextch);
			a[j] = k;
			++j;
			fflush(stdin);
		}while(nextch != '\n');
	}
	int sum = 0;
	//printArr(a,n*n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 1 && a[i][j] == a[j][i])
			{
				++sum;
			}
			
		}
			/* code */
	}
	
	return 0;
}