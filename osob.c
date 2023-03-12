#include <stdio.h>

void printArr(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d] = %d \n",i, a[i]);
	}
}


int main()
{
    //int num = 0;
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int aitog[12];
    //aitog[0] = 1;
    int sum;
    int ai = 0;
    for (int i = 0; i < 12; i++)
    {
        sum = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                sum += j;
                //printf("sum [%d][%d] = %d\n",i,j,sum);
            }
        }
        if(sum % 2 != 0)
        {
            aitog[ai] = i;
            ++ai;
            printf("i = %d, sum = %d\n",i,sum);
        }
        
    }
    printf("-----------------------------------------------------------\n");
    printArr(aitog,ai);


    return 0;
}
