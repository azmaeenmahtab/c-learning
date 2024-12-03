#include<stdio.h>
int main(){
    int age;
    printf("input age : ");
    scanf("%d", &age);
    switch (age)
    {
    case 1:printf("its 1");
        break;
    case 2:printf("its 2");
        break;
    case 3:printf("its 3");
        break;
    
    default:printf("out of range");
        break;
    }
}