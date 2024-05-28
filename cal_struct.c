#include <stdio.h>

struct a_struct{
    char ch; // 1byte
    int m;  // 4byte
    double n; // 8byte
};

int main(void){

    struct a_struct x[2];
    struct a_struct *p;
    p = &x[1];
    int size = (char *)p - (char *)x;
    printf("size a_struct = %dbyte\n", size);
    printf("size p = %ldbyte\n", sizeof(p));
    printf("size *p %ldbyte\n", sizeof(*p));
    printf("size x[0] = %ldbyte\n", sizeof(x[0]));
    printf("size x[1] = %ldbyte\n", sizeof(x[1]));
    printf("size x = %ldbyte\n", sizeof(x));
    return 0;
}
