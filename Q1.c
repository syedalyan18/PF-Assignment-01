#include<stdio.h>
#include<string.h>
int main(){
    int dailyLimit = 5000;
    int spendingAmount,transactionAmount,transactionsinHour;
    char transactionCountry[20];
    printf("Enter the spending amount for today:");
    scanf("%d",&spendingAmount);
    printf("Enter the tansaction amount:");
    scanf("%d",&transactionAmount);
    if(spendingAmount + transactionAmount > dailyLimit){ 
        printf("Transaction flagged:Daily limit exceed\n");
       return 0;
     }
    printf("Enter transaction country:");
    scanf("%s", &transactionCountry);
if ((strcmp(transactionCountry,"Pakistan") != 0 && strcmp(transactionCountry,"UAE") != 0)){
        printf("Transaction flagged:unsual country.\n");
        return 0;
    }
    printf("Enter number of transactions in an hour (including this one):");
    scanf("%d", &transactionsinHour);
    if (transactionsinHour > 3){
        printf("Transaction flagged:limit exceeded of transactions in an hour\n");
    } else{
        printf("Transaction is being processed!!\n");
    }
    return 0;
}
