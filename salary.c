/*
Тот-кого-нельзя-называть
Чтобы настроение жителей Солнечного города находилось по «Шкале Счастья» 
в рамках от Хорошего до Прекрасного достаточно обеспечить такое распределение зарплат, 
чтобы коротышка с самой низкой зарплатой получал не менее 10% от самой большой зарплаты в городе.

Самый активный житель города – Тот-кого-нельзя-называть, его все так называли даже мэр города - 
Тот-кого-нельзя-оскорблять, решил отслеживать настроение жителей. 
Помогите ему и напишите программу.

На вход подаётся одна строка, в которой через пробел записана последовательность целых чисел 
(это зарплаты горожан), например, такая: 600 100 500 1000. Количество чисел заранее неизвестно, 
но их не может быть более 1000 и менее 2-х.

На выход на экран нужно вывести отношение самой низкой зарплаты к самой высокой, 
выраженное в процентах с округлением до ближайшего целого.
*/

#include <stdio.h>

#define N 100

void printArr(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d] = %d \n",i, a[i]);
	}
}

int main()
{
	
	
	int a[N]={};
	int k = 0;
	int i = 0;
	char nextch;
	do{
		scanf("%d%c", &k,&nextch);
		
		a[i] = k;
		++i;
		fflush(stdin);
	}while(nextch != '\n');
	
	
	int min = a[0];
	for (int j = 1; j < i; ++j)
	{
	  	if(a[j] < min) min = a[j]; 
	} 
	//printf("min = %d\n",min);    
	int max = a[0];
	for (int j = 1; j < i; ++j)
	{
	  	if(a[j] > max) max = a[j]; 
	} 
	printf("%d\n",min*100/max);    
	    
	
	
	return 0;
}