#include <stdio.h>
#include <stdlib.h>
char cap[4][20] = {
                    "##.#########.#######",
                    "####.#.####.#..#..##",
                    "##.##..#.#.####.##.#",
                    "##.#####.######.###."
                    };

int ndn(const long long int n)
{
    int num = 0;
    if(n == 0)
        num = 1;
    else
    {
        long long int nn = n;
        while (nn > 0)
        {
            nn /= 10;
            ++num;
        }
    }
    return num;
}
int * createNumArray(const int num, long long int n)
{
    int* arrNum = (int*)malloc(num * sizeof(int));
    
    if(n == 0)
        arrNum[0] = 0;
    else{
        for (size_t i = num - 1; n > 0; --i){
            arrNum[i] = n % 10;
            n /= 10;
        }

    }
    return arrNum;
} 
void capcha(int long long n)
{
    int num = ndn(n);
    int* arr = NULL;        
    arr = createNumArray(num,n);
    
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