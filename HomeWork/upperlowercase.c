#include<stdio.h>

int main(){
    char character;
    printf("give me a character : ");
    scanf("%c", &character);

    if(character >= 'A' && character <= 'z'){
        printf("uppercase");
    }else{
        if(character >= 'a' && character <= 'z'){
            printf("lowercase");
        }
    }
}