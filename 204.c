#include<stdio.h>
int main (){
    int n ;
    printf("enter the number\n") ;
    scanf("%d",&n) ;
    
    int i , j ;
    int compo = 2 ;
    if ( n <= 2) return 0 ;
  
    for ( i = 2 ; i < n ; i++){
        for ( j = 2 ; j*j <= i; j++){
            if ( i % j == 0){
                compo++ ;
                break ;
            }
        }
    }
    n = n - compo ;
    printf("%d",n) ;
    

}