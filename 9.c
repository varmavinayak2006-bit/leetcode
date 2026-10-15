#include<stdio.h>
int main (){
    printf("enter a number to check wheteher it's palindrome \n") ;
    long long int x ;
    scanf("%d",&x) ;
        long long int temp = x ;
    int rem ;
    long long int total = 0 ;
    while(temp!= 0){
        rem = temp %10 ;
        total = total*10 + rem ;
        temp = temp / 10 ;
    }
    if ( total < 0 || total != x){
        printf("false") ;
    }
    else  {
        printf("true") ;
    }

}