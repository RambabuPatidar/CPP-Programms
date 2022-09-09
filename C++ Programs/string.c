#include<stdio.h>
#include<string.h>

void word(char str[], char search[]) {
    int i=0;
    int b  =strlen(str);
    for(i =0; i<b; i++) {
        int j = 0;
        int storeIndex = i;
        while( str[i] == search[j]) {
            j++; i++;
        }
        if( j == strlen(search)) {

            printf("found the string from %d index to %d index ", storeIndex, i-1);
            return;
        }
    }

    if(i == b ) {
        printf("search word doesnot exist in the string ");
    }
}

int main() {

    char str[100], search[100];
    printf("enter the string ");
    gets(str);

    printf("enter the word to be searched");
    gets(search);

    word(str, search);
    return 0;
}