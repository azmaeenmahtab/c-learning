#include <stdio.h>
int gcddet( int n1, int n2){

    static int gcd;
    if(n1 < n2){
         gcd = n1;
    }
    else{
        gcd = n2;
    }

    if(n1 % gcd == 0 && n2 % gcd == 0){
        return gcd;
    }
    else{
        gcddet(gcd-1, (gcd == n1)? n2 : n1 );
    }
}
int main() {

    int num1 = 10, num2 = 50;
     
     int ans = gcddet(num1, num2);
      printf("%d", ans);
}
//int counter = 0;
// while (n != 0){
//      n = n / 10;
//      counter++;


//}
// printf("%d", counter);


