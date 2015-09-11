#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void string_reverse1(char *string){
    int len = strlen(string);
    int left=0,right=len-1;
    while(left<right){
        char temp = string[left];
        string[left]=string[right];
        string[right]=temp;
        ++left;
        --right;
    }
}
char *string_reverse2(const char *string){
    int len = strlen(string);
    char *reverse_string = (char*) malloc(len);
    if(!reverse_string)
        return NULL;
    for(int i=0; i<len; ++i){
        reverse_string[i] = string[len-i-1];
    }
    return reverse_string;
}
int main(){
    char str1[] = "this is test one";
    char *str2 = NULL;
    string_reverse1(str1);
    printf("str1 %s\n", str1);
    str2 = string_reverse2(str1);
    printf("str2 %s\n", str2);
    free(str2);
    return 0;
}
