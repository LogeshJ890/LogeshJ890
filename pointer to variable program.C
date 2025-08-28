// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int p = 300;
   int *s ;
   
   s = &p;
   
   
    printf("Value of the variable P: %d\n",p);
    printf("Address of the variable p :%d\n",&p);
    printf("The value stroed in the variable s :%d\n",s);
    printf("The Address of the vaeiable s : %d\n",&s);
    printf("The value stored in the address of the variable s :%d",*s);
}
