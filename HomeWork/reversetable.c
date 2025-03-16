#include<stdio.h>
int main () {
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    
    for(int i = 10; i >= 1; i--){
        int ans = i * n;
        printf("%d X %d = %d\n", n, i, ans);

    }
    return 0;
}