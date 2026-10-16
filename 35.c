#include<stdio.h>
int main (){
    int numsSize ;
    printf("Enter the size of array \n") ;
    scanf("%d",numsSize) ;
    int nums[numsSize] ;
    printf("enter the sorted array\n") ;
    for ( int i = 0 ; i < numsSize ; i++){
        scanf("%d",&nums[i]) ;
    }
    printf("enter the target \n") ;
    int target ;
    scanf("%d",&target) ;

       int high = numsSize -1 ;
    int low = 0 ;
    int found = 0 ;
    int mid = 0 ;
    while ( low <= high){
        mid = (low + high  ) / 2 ;
        if( target > nums[mid]){
            low = mid + 1 ;
        }
        else if ( target == nums[mid]){
            found = 1 ;
              printf("\n%d",mid) ;
              return 0 ;
         

        }
        else {
            high = mid - 1 ;
        }
    }
        printf("\n%d",low) ;

}