/*
Минимальное число
Напишите программу, которая в последовательности натуральных чисел определяет минимальное число, оканчивающееся на 3.

На вход программа получает:
- в первой строке одно целое число N - количество чисел в последовательности;
- в последующих N строках сами числа последовательности.

В последовательности всегда имеется хотя бы одно число, оканчивающееся на 3.
Количество чисел не превышает 1000. Введённые числа не превышают 30 000.

Программа должна вывести одно число – минимальное число, оканчивающееся на 3.

Для получения данных сначала считайте первую строку и извлеките число N, затем запустите цикл с N повторами и считайте N строк с данными для программы.
*/
/*
7
1
11
10
31
33
103
993
*/
#include <stdio.h>
void printArr(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d] = %d \n",i, a[i]);
	}
}


int main()
{
	 int n = 0;
	// scanf("%d",&n);

	int a[] = {1,11,10,31,33,103,993,29,23,66,13,333};
	n = sizeof(a)/sizeof(a[0]);
	int b[n];
	//int k = 0;
	//int i = 0;
	int count = 0;
	// char nextch;
	// do{
	// 	scanf("%d%c", &k,&nextch);
	// 	a[i] = k;
	// 	++i;
	// 	fflush(stdin);
	// }while(nextch != '\n' && i < n);
		
	for (int j = 0; j < n; ++j)
	{
		if(a[j] % 10 == 3)
		{
			b[count++] = a[j];
			
		}
	  	
	}  
	printArr(b,count);
	
	int min = b[0];
	for (int j = 1; j < count; ++j)
	{
	  	if(b[j] < min) min = b[j]; 
	}   
	printf("%d\n",min);
	
	return 0;
}