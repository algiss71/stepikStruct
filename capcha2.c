#include <stdio.h>
#include <stdlib.h>
//char cap[]="##.#########.###########.#.####.#..#..####.##..#.#.####.##.###.#####.######.###.";
char cap[4][20] = {
                    "##.#########.#######",
                    "####.#.####.#..#..##",
                    "##.##..#.#.####.##.#",
                    "##.#####.######.###."
                    };

int ndn(const long long int n)//количество цифр в числе
{
    if(n < 0) exit(1);
    if(n == 0) return 1;
    int num = 0;

    long long int nn = n;
    while (nn > 0)
    {
        nn /= 10;
        ++num;
    }
    return num;
}
int * createNumArray(const int num, long long int n)//создание массива из цифр числа
{
    int* arrNum = (int*)malloc(num * sizeof(int));
    for (size_t i = num - 1; n > 0; --i)
    {
            arrNum[i] = n % 10;
            n /= 10;
            //printf("arrNum[%d] = %d\n",i,arrNum[i]);
    }
    return arrNum;
}
void printArray(const int *a, const int num)
{
    printf("[");
    for(int i = 0; i < num; ++i)
        printf("%d, ",a[i]);
    printf("\b\b]\n");
}
void capcha(long long int n)
{

    int num = ndn(n);
    int* arr = NULL;
    arr = createNumArray(num,n);
    printArray(arr,num);
   for (int i = 0; i < 4; ++i)
   {
        for(int j = 0; j < num; ++j)
            printf("%c%c", cap[i][arr[j] * 2],cap[i][arr[j] * 2 + 1]);
        printf("\n");
   }
    printf("\n");

}

int main() {

    long long int n = 0;
    scanf("%lld",&n);
    capcha(n);
    return 0;
}
