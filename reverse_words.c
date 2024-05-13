#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* reverseWords1(char* s) {
    
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

char* reverseWords2(char* s) {
    int n = strlen(s), i = n-1, j, nr = 0, k;
    char *result = (char *)malloc(n * sizeof(char));
    while(i>=0){
        while(i >= 0 && s[i] == ' ')
            i--;
        j = i - 1;
        if(i<0)
            break;
        while(j>=0 && s[j] != ' ')
            j--;
        if(nr != 0){
            result[nr++] = ' ';
        }
        //printf("j = %d\t i = %d\n", j, i);
        for(k = j + 1; k<=i; k++)
            result[nr++] = s[k];
        i = j;
    }
    return result;
}

int main(void){
    /*
    case1 = "the sky is blue"
    case2 = "  hello world  "
    case3 = "a good   example"
    */
    char a[] = "a good   example";
    printf("before : %s\n", a);
    //char *c = reverseWords1(a);
    char *c = reverseWords2(a);
    printf("after  : %s\n", c);
}