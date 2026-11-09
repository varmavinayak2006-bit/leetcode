#include<stdio.h>
int main (){
    printf("enter a number to check if it's happy\n") ;
    int n ;
    scanf("%d",&n) ;
  
  
    
    while( n != 1 && n!=4){
       long long int j = n ;
        int rem = 0 ;
       long long int total = 0;
        while(j>0){
            rem = j %10 ;
            total = total + rem*rem ;
            j = j/10 ;
        }
        n = total ;
    }
    if(n == 1) {printf("true");}
    else printf("false") ;
    
}
