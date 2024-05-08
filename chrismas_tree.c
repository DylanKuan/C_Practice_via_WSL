#include <stdio.h>

void print_chrismas_tree(int);

int main(void)
{

    int n = 5;
    print_chrismas_tree(n);
    return 0;
}

void print_chrismas_tree(int n)
{

    int i, j, k, counter;
    int nmap = n * 10 + 1, nlayer = 3;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < nlayer; j+=i)
        {
            for (k = 0; k < nmap-nlayer; k++)
                printf(" ");
            counter = 0;
            for (k = 0; k < nlayer; k++)
            {

                if (k <= nlayer - j - 2)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                    counter++;
                }
            }
            for (k = 1; k < counter; k++)
                printf("*");
            printf("\n");
        }
        nlayer *= 2;
    }

    for(i = 0; i<n*2;i++){
        counter = 0;
        for (k = 0; k < nmap; k++){
            if (k <= nmap - 5)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                    counter++;
                }
        }
        for (k = 1; k < counter; k++)
            printf("*");
        printf("\n");
    }
}