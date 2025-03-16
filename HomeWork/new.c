#include<stdio.h>
int main (){
    printf("BANK ACOUNT SYSTEM\n");
    printf("------------------\n");
    printf("1.DEPOSIT MONEY\n");
    printf("2.WITHDRAW MONEY\n");
    printf("3.CHECK BALANCE\n");
    printf("4.VIEW TRANSACTION HISTORY\n");
    printf("5.EXIT\n");
    printf("\n");
    int balance = 0;
    printf("Enter Initial Balance : ");
    scanf("%d", &balance);
    char history[500][500];
    int withdraw= 0;
    int deposit = 0;
    int strctr = 0;

    for(;;){
    int a;
    printf("Enter your choice : ");
    scanf("%d", &a);
    printf("\n");

    if(a == 1){
        printf("Enter Deposit Amount : ");
        scanf("%d", &deposit);
        printf("\n");

        balance = balance + deposit;
        printf("Amount successfully deposited !!\n");
        printf("Updated Balance : %d $", balance);
        snprintf(history[strctr], sizeof(history[strctr]), "deposited +%d $\n", deposit);
        printf("\n");
        printf("-----------------------------------------\n");
        deposit = 0;
        strctr++;
        
    }


    else if(a == 2){
        printf("Enter Withdraw amount : ");
        scanf("%d", &withdraw);

        if(balance > withdraw){
            balance = balance - withdraw;

            printf("Amount successfully withdrawed !!\n");
            printf("Updated Balance : %d $", balance);
            snprintf(history[strctr], sizeof(history[strctr]), "withdrawed -%d $", withdraw);
            printf("\n");
            printf("-----------------------------------------\n");
            strctr++;
            withdraw = 0;
        }else{
            printf("Insufficient funds! Transaction failed.\n");
            printf("-----------------------------------------\n");
        }
    }

    else if(a == 3){
        printf("Current balance : %d $\n", balance);
        printf("-----------------------------------------\n");
        
    }
    

    else if(a == 4){
        int i = 0;
        while(i <= strctr){
            printf("%s\n", history[i]);
            i++;
        }

        printf("-----------------------------------------\n");
    }

    else if(a == 5){
        break;
    }
    printf("1.DEPOSIT MONEY\n");
    printf("2.WITHDRAW MONEY\n");
    printf("3.CHECK BALANCE\n");
    printf("4.VIEW TRANSACTION HISTORY\n");
    printf("5.EXIT\n");

}

printf("Exiting the system...\n");
printf("Thank you for using our banking service!\n");

    
}