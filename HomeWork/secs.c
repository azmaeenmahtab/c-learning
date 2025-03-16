#include<stdio.h>

int lcm(int n1, int n2){
    static int lcmnum = 0;
    if(n1 < n2){
         lcmnum = n2;
    }else{
        lcmnum = n1;
    }
    
    if(lcmnum % n1 == 0 && lcmnum % n2 == 0){
        return lcmnum;
    }else{
        lcmnum++;
        return lcm(n1, n2);
    }
   
}
 
int main () {
    int n1 = 2, n2 = 3;
    int ans = lcm(n1, n2);
    printf("%d", ans);
}