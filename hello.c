//create a menu for the bank with create,delete,withdraw and deposit options
#include<stdio.h>
#include<string.h>
FILE *f;
int main(){
    int option_home;
    char finish;
    //home page
    struct createaccount{
        char first_name[10];
        char last_name[10];
        int phone_number;
        char pan[10];
    }s[10];
    int n;
    first:
    printf("Welcome to the bank of everi!!\n");

    printf("1.CREATE ACCOUNT\n2.DELETE ACCOUNT\n3.DEPOSIT\n4.WITHDRAW\n");
    printf("Please select the Option to Continue!!");
    scanf("%d",&option_home);
    if(option_home==1){
        printf("enter the number of account to create :\n");
        scanf("%d",&n);
        multiple:
        printf("Please enter the details mentioned below\n");
        for(int i=0;i<n;i++){
            f=fopen('xt.txt','w');
            printf("Account no %d\n",i);
            printf("enter the first and lastname:\n");
            fscanf("%s%s",s->first_name,s->last_name);
            printf("enter the Phone number: \n");
            fscanf("%d",&s->phone_number);
            printf("Enter the Pan card number :\n");
            fscanf("%s",s->pan);        
    }
        printf("Thank you for choosing us!!\n");
        printf("Check your entered details below\n");
        for(int j=0;j<n;j++){
            printf("%s\n%s\n%d\n%s\n",s->first_name,s->last_name,s->phone_number,s->pan);
        }
    }
    else if(option_home==2){
        printf("PLease enter the account number\n");

    }
    else if(option_home==3){
        printf("PLease enter the account number\n");
        printf("PLease enter the amount\n");
        printf("AMount has been withdrwn sucessfully\n");
        return 0;
    }
    else if(option_home==4){
        printf("PLease enter the account number\n");
        printf("PLease enter the amount\n");
        printf("AMount has been withdrwn sucessfully\n");
        return 0;
    }
    else{
        printf("PLease enter the option correctlyt\n");
        goto first;
        }
    fclose(f);
    }