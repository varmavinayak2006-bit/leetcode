#include<stdio.h>
int main (){
    printf("enter the size of array \n") ;
    int numsSize ;
    scanf("%d",&numsSize) ;
    int nums[numsSize] ;
    printf("enter the possible test case in array\n") ;
    int i               ;
    for ( i =  0 ; i < numsSize ; i++){
        scanf("%d",&nums[i]) ;
    }
            int min ; 
        min = nums[0] ;
  
    if ( numsSize == 1){
        
    }
    if ( numsSize == 2){
        if ( nums[0] > nums[1]){
            min = nums[1] ;

        }
    }
    if ( numsSize >= 3){
    for ( i = 0 ; i <= numsSize -2 ; i++ )
    {
        if ( nums[i] > nums[i+1]){
            min = nums[i+1] ;
        }
    }  }  
        printf("%d",min) ;
        return 0 ;
}