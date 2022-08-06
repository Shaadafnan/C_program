#include <stdio.h>
#include <stdlib.h>

int main() {
    //taking inputs 
    float principle,roi,time,Simple_interest;
    printf("Enter the Principle amount :\n");
    scanf("%f",&principle);
    printf("Enter the rate of interest :\n");
    scanf("%f",&roi);
    printf("Enter the time period :\n");
    scanf("%f",&time);
    //calculating simple interest
    Simple_interest=(principle*roi*time)/100;
    //display the output
    printf("Simple interest is : %.2f",Simple_interest);
    
    return 0;
}