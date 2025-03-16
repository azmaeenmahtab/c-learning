#include<stdio.h>

int main (){
    int arr1[3][3] = {{1, 2, 3}, {2, 2, 3}, {5, 3, 5}};
    int arr2[3][3];


    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

           arr2[i][j] = arr1[j][i];


        }

    }

    for(int l = 0; l < 3; l++){

        for(int m = 0; m < 3; m++){

            printf("%d ",  arr2[l][m]);
        }
        printf("\n");
    }

}