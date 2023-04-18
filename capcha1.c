#include <stdio.h>

char cap[]="##.#########.###########.#.####.#..#..####.##..#.#.####.##.###.#####.######.###.";

void capcha(int n)
{
    for (int i = n * 2; i < 80; i += 20) {
        printf("%c%c\n", cap[i],cap[i+1]);
    }
    printf("\n");
}
int main() {

    int n = 0;
    scanf("%d",&n);
    capcha(n);
    return 0;
}