#include <stdio.h>
#include <stdbool.h>

#define N 8

typedef int Data;
typedef struct{
    Data s[N];
    unsigned int top;
}Stack;

bool is_empty(Stack * st){
     return st->top == 0; 
}
bool is_full(Stack * st){
    return st->top == sizeof(st->s)/sizeof(st->s[0]); 
}

void print(Stack* st){
    if(is_empty(st)){
        printf("\nStack is empty\n");
    }
    else{
    for(unsigned int i = 0; i < st->top;++i)
        printf("%d ",st->s[i]);
    printf("\n");
    }
    if (is_full(st))
    {
        printf("\nStack is full\n");
    }
}
void init(Stack * st){
    st->top = 0;
}
void push(Stack * st, Data data){
    if (is_full(st))
    {
        printf("\nStack is full\n");
    }
    else{
        st->s[st->top] = data;
        st->top++;
    }
    }
Data pop(Stack * st){
    if(is_empty(st)){
        printf("\nStack is empty\n");
        return 1;
    }
    else{
        Data res = st->s[st->top-1];
        st->top--;
    return res;
    }
}
int main()

{
    Data test[N]={5,17,-3,0,48 ,2,13,66};
    Stack  s;
    Stack *st = &s;

    init(st);
    print(st);
    Data d;
    for (size_t i = 0; i < N; i++){
        d = test[i];
        printf("push %d :",d ); 
        push(st,d);
        print(st);
    }
    
    while (!is_empty(st))
    {
        d = pop(st);
        printf("pop %d :",d );
        print(st);

    }
    
   

    return 0;

}