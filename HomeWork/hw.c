#include<stdio.h>
#include<math.h>

int main (){
    int x, y, z, sum;
    float avg;
    printf("inter 1st number - ");
    scanf("%d", &x);

    printf("inter 2nd number - ");
    scanf("%d", &y);

    printf("inter 3rd number - ");
    scanf("%d", &z);

    sum = x + y + z;
    avg = sum / 3;
    printf("ans is - %.2f", avg);
    
}