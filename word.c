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

int main()
{
    
    int n =0;
    printf("Input N string: ");
    scanf("%d",&n);
    while (getchar() != '\n');
    char s[n][20];
    for (int i = 0; i < n; i++)                 /* for a max of NWDS */
    {               
        if(!fgets (s[i], sizeof s[i], stdin))  /* read/validate */
            break;                              /* protect against EOF */
        int len = strlen (s[i]);                /* get length */
        if (s[i][len-1] == '\n')                /* check for trailing '\n' */
            s[i][--len] = '\0';                    /* overwrite with nulbyte  */
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (int)strlen(s[i]); j++)
        {
            printf("s[%d][%d] = %c\n",i,j,s[i][j]);
        }
        
        printf("-------------------------------------------\n");
    }
    //printf("%s\n",s);
    return 0;
}
