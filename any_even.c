/*
На вход подаётся список из n [1, 1000] целых чисел из диапазона [0, 1000], записанных в одну строку через пробел.

На выход ваша программа должна вернуть любое чётное число из этого списка
*/
#include <stdio.h>

#define N 10

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
	
	
	for (int j = 0; j < i; ++j)
	{
	  	if (a[j] % 2 == 0)
	    {
		   	printf("%d ", a[j]);
	     	break;
	    }
	}    
	    
	// for (int j = 0; j < i+1; ++i)
	// {
	//     
	    
	// }
	
	return 0;
}