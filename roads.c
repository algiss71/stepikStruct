#include <stdio.h>
#include <stdlib.h>
#define input(x) scanf("%d",&x);
#define printInt(x) printf("%d\n",x)
int ** dynamic_array_alloc(int N, int M)
{
    int **A = (int **)malloc(N*sizeof(int *));
    for(int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M*sizeof(int));
    }
    return A;
}
void dynamic_array_free(int **A, int N)
{
    for(int i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);
}
void dynamic_array_print(int **A, int N, int M)
{
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%*d", 5, A[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    
	int n = 0;
	int k = 0;
	int j = 0;
	char nextch;
	input(n)
	int **a = dynamic_array_alloc(n, n);
	//int a[n][n];
	for (int i = 0; i < n; ++i)
		{
			j=0;
			do{
			scanf("%d%c", &k,&nextch);
			a[i][j] = k;
	
			++j;
			fflush(stdin);
		}while(nextch != '\n');
	}
	dynamic_array_print(a,n,n);
	
	int sum = 0;
	
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == 1 && a[i][j] == a[j][i])
			++sum;
	
	printInt(sum/2);
	dynamic_array_free(a, n);
	return 0;
}