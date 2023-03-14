#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*
    0 
    0 
    1 
    0 
    1 
    1 
    0 
    0 
    1 
    1 
    0 
    0 
    0 
*/
char *test[104] = {

    ")",
    "(",
    "",
    "hi)(",
    "hi(hi)",
    "Write ((a function) that takes (a string) of parentheses), and (determines if) the order is valid(.)",
    "(",
    "hi(hi)(",
    "((())()())",
    "(c(b(a)))(d)",
    "hi(hi))(",
    "())(()" ,
    "Write ((a function) that takes (a string) of parentheses), and (determines if) the order is valid).("
};
bool validParentheses(const char *str_in)
{
    int count = 0;
    // for (int i = 0; i < (int)strlen(str_in); i++)
    // {
        
    //     if (str_in[i] == '(') ++count;
    //     if (str_in[i] == ')')
    //     {
    //         if (count == 0) return false;
    //         --count;
    //     } 
        
    // }
    while (*str_in)
    {
        if (*str_in == '(') ++count;
        if (*str_in == ')') --count;
        if (count < 0) return false;
        str_in++;
    }
    
    return count == 0;
    
}

int main()
{
    
    for (int i = 0; i < 13; i++)
    {
        printf("%d\n",validParentheses(test[i]));
    }
    
    return 0;
}
