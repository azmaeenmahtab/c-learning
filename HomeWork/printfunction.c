// #include<stdio.h>
// void printHelloWorld();
// int main(){
//     printHelloWorld();
// }

// void printHelloWorld(){
//     printf("hello world");
// }

#include<stdio.h>
#include<string.h>
int main (){
    char nationality[10];
    printf("please enter your nationality = ");
    scanf("%9s", &nationality);

    if(strcmp(nationality, "indian") == 0){
        printf("Namaste");
    }
    else if(strcmp(nationality, "french") == 0){
        printf("Bonjour");
    }


}