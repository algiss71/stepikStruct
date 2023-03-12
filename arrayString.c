#include <stdio.h>
#include<string.h>

int main()
{
    char *ch_arr[10] = {
                         "spike",
                         "tom",
                         "jerry"
                     };

    printf("%u, %s\n",ch_arr[0], ch_arr[0]);
    printf("%u, %s\n",ch_arr[1], ch_arr[1]);
    printf("%u, %s\n",ch_arr[2], ch_arr[2]);
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; ch_arr[i][j] != '\0'  ; j++)
        {
            printf("%c",*(*(ch_arr + i) + j));
            //printf("%c ", ch_arr[i][j]);
        }
        printf("j = %d\n",j);
    }
    


    return 0;
}
