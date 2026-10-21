#include<stdio.h>
int main ()
{
    printf("enter the size of array\n") ;
    int numsSize ;
    scanf("%d",&numsSize) ;
    printf("enter the numbers from range 0 to %d",numsSize) ;
    int nums[numsSize] ;
    for(int i = 0 ; i < numsSize ; i++)
    {
        scanf("%d",&nums[i]);
    }
    int total = 0 ;
    for ( int i = 0 ; i < numsSize ; i++){
        total = total + nums[i] ;
    }
    int ans ;
    ans = (numsSize*(numsSize+1))/2 ;
    return ans - total ;

}

