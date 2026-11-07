#include<stdio.h>
int main (){
    int i , j ;
    printf("enter the size of array\n") ;
    int pricesSize ;
    scanf("%d",&pricesSize) ;
    printf("enter the array\n") ;
    int prices[pricesSize] ;
    for( i = 0 ; i < pricesSize ; i++){
        scanf("%d",&prices[i]) ;
    }
    // int maxProfit(int* prices, int pricesSize) {
    
    int max = 0 ;
    for ( i = 0 ; i < pricesSize ; i++){
        for ( j = i ; j < pricesSize ; j++){
            if( prices[j]-prices[i] > max){
                max =prices[j]-prices[i] ;
            }
        }
}
printf("%d",max) ;
}