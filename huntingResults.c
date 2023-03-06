/*
Вождь племени «Тумба-Юмба» очень аккуратен в подсчёте успехов на охоте, 
но он особенным образом записывает результаты. 
В местных лесах водятся 9 разных видов животных – они обозначаются цифрами 
от 1 до 9. После охоты вождь раскладывает трофеи по видам животных 
по возрастанию номеров подряд, например, так:

334555
то есть пойманы две «тройки», одна «четвёрка», три «пятёрки», и, затем, 
так же как мы только что назвали результаты, так и записывает их:

231435
Вождь таким образом шифрует результаты охоты.

Помогите вождю – напишите программу, которая из входной строки будет 
делать зашифрованную. Длина входной строки не превышает 100 символов.
*/
#include <stdio.h>
#include <string.h>

void printArr(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d] = %d \n",i, a[i]);
	}
}

int main()
{
	
	char s[100]={};
	scanf("%s",s);
	int n = (int)strlen(s)+1;
    int a[n];
    int count = 0;
    int i = 0;
    printf("n = %d\n",n);
	for (i = 0; i  < n-1; ++i)
		a[i] = s[i] - 48;
	a[n-1] = 10;
	printf("sizeof = %d\n",(int)sizeof(a));
	printf("a[%d]= %d\n",n,a[n]);
	printArr(a,n);
	//printf("n = %d\n",n);
	for (i = 0; i  < n-1 ; i++)
	{
		++count;
		if ( a[i] < a[i+1])
		{
			
			printf("%d%d",count,a[i]);
			count = 0;
		}
		
	}
	 printf("\n");
	// printf("a[%d] = %d",i,a[i]);
	// printf("\n");
		
	return 0;
}
//a[i] == a[n-1] ||





// int removeDuplicates(int* nums, int numsSize){
//      if(numsSize <= 1) return  numsSize;
//         int i = 0;
//         for (int j = 1; j < numsSize; j++){
//                 if(nums[j] != nums[i]){
//                     nums[++i] = nums[j];
//                 }
//         }
//         return i++;
// }