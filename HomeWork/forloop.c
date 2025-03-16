#include<stdio.h>

int main (){
    char str[3][50] = {"sdns", "fdfdf"};

    for(int i = 0 ; i < 3; i++){
         

        
        printf("%s", str[i]);
        
        printf("\n");
    }

    int ans = strlen(str);
    printf("%d", ans);
}