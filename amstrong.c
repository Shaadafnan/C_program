#include <stdio.h>
#include <stdlib.h>

int main() {
    //taking inputs 
    int num,num1,sum=0,digit;
    printf("Enter the number :\t ");
    scanf("%d",&num);
    num1=num;
    while(num!=0){
        digit=num%10;
        sum=sum+(digit*digit*digit);
        num=num/10;
    }
    if(num1==sum){
        printf("AMstring number\n");
    
    }
    else{
        printf("not amstrong ");
    }
    return 0;
}