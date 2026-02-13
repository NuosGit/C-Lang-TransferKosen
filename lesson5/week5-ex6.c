#include <stdio.h>

int main(){
    int *pc, c;

    c = 98;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n", c);
    printf("Address of pointer pc: %p\n\n", pc);

    pc = &c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); 

    c = 18;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); 

    *pc = 8;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    return 0;
}
