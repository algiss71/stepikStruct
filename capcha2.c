#include <stdio.h>
#include <stdlib.h>
char cap[]="##.#########.###########.#.####.#..#..####.##..#.#.####.##.###.#####.######.###.";

void capcha(int n)
{
    int nn = n;
    size_t num = 0;

    while (nn>0)
    {
        nn /= 10;
        ++num;
    }
    
    int* arrNum = (int*)malloc(num*sizeof(int));
    for (size_t i = num - 1; n > 0; --i)
    {
        arrNum[i] = n % 10;
        n /= 10;
    }
        
    for (size_t i = 0; i < num; i++)
    {
        for (int j = arrNum[i] * 2; j < 80; j += 20) 
        {
            printf("%c%c", cap[j],cap[j+1]);
        }    
        printf("\n");
    }
    
    printf("\n");
}
int main() {

    int n = 0;
    scanf("%d",&n);
    capcha(n);
    return 0;
}