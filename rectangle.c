/*
Прямоугольники
Дети племени «Тумба-Юмба» любят играть в логические игры. 
Однажды вождь племени придумал детям задачу на построение прямоугольников одинаковой площади. 
Пусть дана площадь прямоугольника, тогда нужно найти количество различных прямоугольников с целочисленными длинами сторон заданной площади. 
Например, для площади 20 можно построить три различающихся прямоугольника с такой же площадью.

Итак, на вход подаётся одно целое положительное число, не превосходящее 109 – это заданная площадь прямоугольника.

На выход нужно вывести на экран искомое количество прямоугольников.
*/

#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	int count = 0;
	for (int i = 1; i * i < n + 1; ++i)
		if (n % i == 0 )
			count++;
	printf("%d\n",count);
	return 0;
}
/*
def delit(n) :
    i = 1
    res = 0
    while i * i < n + 1:
        if not n % i :
            res += 1
        i += 1
    return res
 
num = int(input())
print(delit(num))

*/