#include<stdio.h>
int main (){
    int num ;
    printf("enter the data \n") ;
    scanf("%d",&num);
     int total , temp ;
    if( num < 10) printf("%d",total) ;
    temp = num ;
    while( temp/10 != 0){
        total = 0 ;
        int old ;
        old = temp ;
        while(old > 0){
            int rem ;
            rem = old % 10 ;
            total = total + rem ;
            old = old / 10 ;
        }
        temp = total ;
        if ( total < 10){
    printf("%d",total) ;
        }
    }
   printf("%d",total) ;
}