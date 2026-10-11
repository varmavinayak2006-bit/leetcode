#include<stdio.h>
int main (){
    printf("enter the size of array\n") ;
    int numsSize ;
    scanf("%d",&numsSize) ;
    int nums[numsSize] ;
    printf("enter the element of array\n") ;
    for (int i = 0 ; i < numsSize ; i++){
        scanf("%d",&nums[i]) ;
    }
    int total ;
    total = 0 ;
    for ( int i = 0; i < numsSize ; i++){
        if(numsSize % (i+1) == 0){
            total = total + nums[i]*nums[i] ;
        }
    }
    printf("\n%d",total) ;
    return 0 ;
}