// leap year
#include<stdio.h>
int main (){
    int y;
    printf("give a year = ");
    scanf("%d", &y);

    if(y % 4 == 0){
        printf("%d this is a leap year\n", y);
    }
    else if (y % 400 == 0){
        printf("%d this is a leap year\n", y);

    }
    else if (y % 100 == 0 && y % 400 == 0){
        printf("%d this is a leap year\n", y);
    }
    else{
        printf("%d this is not a leap year", y);
    }
}