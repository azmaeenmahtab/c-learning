#include<stdio.h>
#include<math.h>
int main () {
    int a, b, c, x1, x2;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    if ((pow(b,2)-(4*a*c)) > 0){

        x1 = (-b + sqrt(pow(b,2)-(4*a*c))) / (2 * a);
        printf("x1 is = %d\n", x1);

        x2 = (-b - sqrt(pow(b,2)-(4*a*c))) / (2 * a);
        printf("x2 is = %d\n", x2);

    }
    else if ((pow(b,2)-(4*a*c)) == 0){

        x1 = -b / (2 * a);
        printf("value of x is = %d\n", x1);

    }
    else if ((pow(b,2)-(4*a*c)) < 0)
    {
        printf("value is imaginary");
    }

    return 0;
    
}