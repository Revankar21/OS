#include<stdio.h>
#include "mylib.h"


int main(){
int a =9, b=3;
printf("addition :%d \n",add(a,b));
printf("subtraction :%d \n", sub(a,b));
printf("multipilcation :%d \n ", mul(a,b));
printf("division :%d \n", div(a, b));
}




// static lib

// cc -c test1.c test2.c
// ar -cvq static.a test1.o test2.o
//  cc prog.c static.a
// ./a.out


// dynamic
// cc -fPIC -c test1.c test2.c
// cc -shared -o libctest.so test1.o test2.o
// cc -L . prog.c -l ctest -o dynamic
// ./dynamic
