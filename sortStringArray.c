
#include <stdio.h>
#include <string.h>
#define R 12
#define C 20
char s[R][C]={
              "1 Putin",
              "11 Pushkin",
              "24  Lenin",
              "6 Pilulkin",
              "34 Sharikov",
              "19 Ushakov",
              "81 Pupkin",
              "92 Ivanov",
              "91 Petrov",
              "51 Sidorov",
              "66 Izmailov",
              "100 Dergavin",
    };
int numA[R];
char stringA[R][C];
void printArr(int a[],int n)
{
    printf("[");

	for (int i = 0; i < n; ++i)
	{
		printf("%d, ",a[i]);
	}
    printf("\b\b]\n");
}
void creatNumArray()
{
    int num;
    for (int i = 0; i < R; i++)
    {   
        num = 0;
        for (int j = 0; j < (int)strlen(s[i]); j++)
        {
            if (s[i][j] == ' ')
                break;
            
            num *= 10;
            num += s[i][j] - 48;
            
        }
        numA[i] = num;
    }
}

void creatStringArray()
{
    
    for (int i = 0; i < R; i++)
    {   
        for (int j = (int)strlen(s[i]); j > 0 ; j--)
        {
            if(s[i][j] == ' ') break;;
            stringA[i][j] = s[i][j];
        }
        
       
    }
}
int main()
{
    for (int i = 0; i < R; i++)
    {
        printf("%s\n",s[i]);
    }
    
    creatNumArray();
    printArr(numA,R);
    creatStringArray();
    for (int i = 0; i < R; i++)
    {
        printf("%s\n",stringA[i]);
    }


    return 0;
}


/* This program would sort the input strings in
 * an ascending order and would display the same
 */
// #include<stdio.h>
// #include<string.h>
// int main(){
//    int i,j,count;
//    char str[25][25],temp[25];
//    puts("How many strings u are going to enter?: ");
//    scanf("%d",&count);

//    puts("Enter Strings one by one: ");
//    for(i=0;i<=count;i++)
//       gets(str[i]);
//    for(i=0;i<=count;i++)
//       for(j=i+1;j<=count;j++){
//          if(strcmp(str[i],str[j])>0){
//             strcpy(temp,str[i]);
//             strcpy(str[i],str[j]);
//             strcpy(str[j],temp);
//          }
//       }
//    printf("Order of Sorted Strings:");
//    for(i=0;i<=count;i++)
//       puts(str[i]);
   
//    return 0;
// }
//================================================================================================
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
 
// #define NMAX 8
 
// int scmp(const void *p1, const void *p2)
// {
//     const char *s1, *s2;
 
//     s1 = * (char **) p1;
//     s2 = * (char **) p2;
//     return strcmp(s1, s2);
// }
 
// int main(void)
// {
//     int nums[NMAX] = { 2, 154, 5, 47, 23, 0, 100, 1 };
//     char *lines[NMAX], s[4096];
//     int i;
 
//     for(i = 0; i < NMAX; i++) {
//         sprintf(s, "%d", nums[i]);
//         lines[i] = strdup(s);
//     }
//     qsort(lines, NMAX, sizeof(char *), scmp);
    
//     for(i = 0; i < NMAX; i++)
//         printf("%s%s", lines[i], i < NMAX - 1 ? " " : "\n");
//     return 0;
// }
//================================================================================================
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int pstrcmp( const void* a, const void* b )
// {
//   return strcmp( *(const char**)a, *(const char**)b );
// }

// int main()
// {
//   const char* xs[] =
//   {
//     "1 Korra",
//     "11 Zhu Li",
//     "100 Asami",
//     "81 Mako",
//     "22 Bolin",
//     "33 Tenzin",
//     "39 Varrick",
//   };
//   const size_t N = sizeof(xs) / sizeof(xs[0]);

//   puts( "(unsorted)" );
//   for (int n = 0; n < N; n++)
//     puts( xs[ n ] );

//   // Do the thing!
//   qsort( xs, N, sizeof(xs[0]), pstrcmp );

//   puts( "\n(sorted)" );
//   for (int n = 0; n < N; n++)
//     puts( xs[ n ] );
// }