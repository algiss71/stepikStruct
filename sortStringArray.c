#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define R 12
#define C 20
char s[R][C]={
              "1 Putin",
              "11 Pushkin",
              "24  Lenin",
              "4 Pilulkin",
              "34 Sharikov",
              "9 Ushakov",
              "81 Pupkin",
              "2 Ivanov",
              "91 Petrov",
              "51 Sidorov",
              "8 Izmailov",
              "100 Dergavin",
    };
char tmp[R][C];
char itog[R][C];
int numA[R];

int indexA[R];
char stringA[R][C];
int it = 0;
void addTmpArray()
{
    for (int i =0; i < R; i++)
    {
        strcpy(tmp[i],s[i]);
    }
}
void creatArray(int c, int r, char sa[][c])
{
    char *delim = " ";
    for (int i = 0; i < r; i++)
    {   
        numA[i] = atoi(strtok(sa[i], delim));
        strcpy (stringA[i] ,strtok(NULL, delim));
        indexA[i] = i;   
    }
}
int peculiarity()
{
    int sum;
    int it = 0;
    for (int i = 0; i < R; i++)
    {
        sum = 0;
        for (int j = 1; j <= numA[i]; j++)
            if(numA[i] % j == 0)
                sum += j;
               
        if(sum % 2 == 0)
        {
            continue;            
        }
        else
        {
            strncpy(itog[it],s[i], strlen(s[i]));
            ++it;
        }
    }
    strncpy(itog[it],"end", 4);
   return it; 
}
//========================================================================================
void printArr(int a[],int n){
    
    printf("["); 
	for (int i = 0; i < n; ++i)
		printf("%d, ",a[i]);
    printf("\b\b]\n");
}
void printSArray(int c, int r, char s[][c]){
    
    printf("["); 
    for (int i = 0; i < r; i++)
        printf("%s, ",s[i]);
    printf("\b\b]\n");
}
//========================================================================================
int main()
{
    int itog_size = 0;
    addTmpArray();

    

    creatArray(C,R,tmp); 
   
   
    
   itog_size = peculiarity();
    
   // printf("it = %d\n",itog_size);
    //printSArray(C,R,itog);

    creatArray(C,itog_size,itog);
    
    // printSArray(C,R,itog);
    // printSArray(C,itog_size,itog);
    printArr(numA,itog_size);
   
    printSArray(C,itog_size,stringA);
   
    return 0;
}
//========================================================================================

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