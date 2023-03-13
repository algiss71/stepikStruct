#include <stdio.h>
#include<string.h>
/*
1 Стекляшкин
2 Пилюлькин
3 Смекайло
4 Растеряйка
5 Молчун
6 Сахариныч
7 Винтик
8 Шпунтик
9 Пачкуля
10 Гусля
11 Винтик
12 Шпунтик
*/
void printArr(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d] = %d \n",i, a[i]);
	}
}
int main()
{
    
    int n = 0;
    printf("Input N string: ");
    scanf("%d",&n);
    while (getchar() != '\n');
    char s[n][20];
    int a[n];
    for (int i = 0; i < n; i++)                 /* for a max of NWDS */
    {               
        if(!fgets (s[i], sizeof s[i], stdin))  /* read/validate */
            break;                              /* protect against EOF */
        int len = strlen (s[i]);                /* get length */
        if (s[i][len-1] == '\n')                /* check for trailing '\n' */
            s[i][--len] = '\0';                    /* overwrite with nulbyte  */
    }
    //printf("s[%d]");
    int num = 0;
    for (int i = 0; i < n; i++)
    {   
        num = 0;
        for (int j = 0; j < (int)strlen(s[i]); j++)
        {
            if (s[i][j] == ' ')
            {
                break;
            }
            num *= 10 * j;
            num += s[i][j] - 48; 
            //printf("num[%d][%d] = %d\n",i,j,num);
            //printf("s[%d][%d] = %c\n",i,j,s[i][j]);
        }
        a[i] = num;
        printf("-------------------------------------------\n");
    }
    //printf("%s\n",s);
    printArr(a,n);
    return 0;
}
