#include<stdio.h>
int main (){
    int numsSize ;
    printf("enter the size of array\n") ;
    scanf("%d",&numsSize) ;
    int nums[numsSize] ;
    printf("enter the digits in array with atleast one non repeting digit \n") ;
    for(int i = 0 ; i < numsSize ; i++){
        scanf("%d",&nums[i]) ; }
        int total = 0 ;
    for ( int i = 0 ; i < numsSize ; i++){
        total = total^nums[i] ;

    }
    printf("%d",total) ;

    
}