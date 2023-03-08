/*
На вход подаётся строка – это шахматная запись одного хода - 
начальной позиции фигуры и конечной позиции, например, так: D5-C7.

На выход нужно вывести результат анализа записи хода: 
YES - если указанный ход верный, 
NO - если такой ход не по правилам, указанным для Коня.

Гарантируется, что запись хода будет состоять из 5-ти символов, 
в середине будет «дефис», буквы и цифры будут расположены на 
правильных местах и в разрешённом диапазоне для шахматной доски.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define G 9
int main()
{
    int k1,k2;
    char s[5] = {};
    char g[G] = " ABCDEFGH";
    for (int i = 0; i < G; i++)
    {
        printf("G[%d] = %c\n",i,g[i]);
    }
    printf("\n");
    printf("input string:");
    scanf("%5s",s);
    printf("%s\n",s);
    printf("\n");
    for (int i = 0; i < G; i++)
    {
        printf("G[%d] = %c\n",i,g[i]);
    }
    printf("\n");
    for (int i = 0; i < (int)strlen(s); i++)
    {
        printf("s[%d] = %c\n",i,s[i]);
    }
    printf("\n");
    for (int i = 0; i < G; i++)
    {
        printf("g[%d] = %c\n",i,g[i]);
        if (s[0]==g[i])
        {
            printf("i = %d\n", i);
            k1 = i;
            printf("k1 = %d\n", k1);
        }
        if (s[3]==g[i])
        {
            printf("i = %d\n", i);
            k2 = i;
            printf("k2 = %d\n", k2);
        }
    }
    
    if (abs((k1-k2)*(s[1]-s[4])) == 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
        
    
    printf("(%d, %d)-(%d, %d)\n", k1, s[1]-48, k2, s[4]-48);
    
    
    return 0;
}
