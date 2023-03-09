#include <stdio.h>
#include<string.h>

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
        printf("s[%d] = %c\n",i,s[i][0]);
    }
    //printf("%s\n",s);
    return 0;
}
