#include <stdio.h>

void print_positive_tri(int);
void print_negative_tri(int);

int main(void)
{

    // print right triangle;
    int num = 10;
    print_positive_tri(num);
    printf("\n");
    print_negative_tri(num);

    return 0;
}

void print_positive_tri(int n)
{

    int i, j, ni = n - 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j <= n - i - 2)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

void print_negative_tri(int n)
{

    int i, j, ni = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}