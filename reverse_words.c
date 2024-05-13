#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* reverseWords(char* s) {
    
    int n = strlen(s), i, j, n_substring = 0, nans = 0;
    char *ans = (char *)malloc(n * sizeof(char));
    int *substring_idx = (int *)calloc(n, sizeof(int));
    for(i = 0; i<n; i++){
        if(s[i]!=' ' && (i == 0 || s[i-1] == ' ')){
            substring_idx[n_substring++] = i;
            //printf("%d\n", i);
            //printf("%d\n", n_substring);
        }
    }
    for(i = n_substring-1; i>-1; i--){
        j = substring_idx[i];
        while(s[j] != ' ' && j != n){
            //printf("%d\n", nans);
            //printf("%d\n", j);
            ans[nans++] = s[j++];
        }
        ans[nans++] = ' ';
    }
    if(nans != n)
        ans[--nans] = '\0';
    //printf("n = %d\n", n);
    return ans;
}

int main(void){

    char a[] = "a good   example";
    char *c = reverseWords(a);
    printf("%s", c);
}