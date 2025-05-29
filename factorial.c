#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int result = 1;

    for (; num !=0;num--)
    {
       result = result*num;
        
    }
     printf("%d",result);


}