#include<stdio.h>
int main (){
    printf("enter the number of coins\n");
    int n ;
    scanf("%d",&n) ;
        if (n < 1 ) return 0 ;
    if ( n == 1 || n == 2 ) return 1 ;
    int i , j , count = 0 ;
    j = 1 ;
    for ( i = n ; n > 0 ; n = n -j){
        j++ ;
        count++ ;
    }
    printf("%d",n) ;
}