/*
Свой-Чужой
Жители племени «Тумба-Юмба» единственные в долине, которые умеют правильно отвечать на один особенный вопрос. 
По правильному ответу их можно отличить от жителей других племён. Вот этот вопрос: назовите сумму целых чисел от 1 (включительно) до N (включительно).

Напишите программу для проверки жителей.

На вход в консоли с клавиатуры вводится одно целое число N (по модулю не более 104 ).

На выход – на экран выводится искомая сумма.
*/

#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	int sum = 0;
	if (n<0){
		for (int i = 1; i >= n; --i)
    	    sum += i;
	}
    else{
    	for (int i = 1; i <= n; ++i)
    	    sum += i;
    }

	printf("%d\n",sum);
	
	return 0;
}