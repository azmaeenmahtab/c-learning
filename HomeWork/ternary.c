#include<stdio.h>

int main(){
    int age;
    printf("give a number : ");
    scanf("%d", &age);

    age > 15 ? printf("adult"):printf("not adult");
}