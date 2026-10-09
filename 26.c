#include<stdio.h>
int main (){
    printf("enter the size of array\n") ;
    int numsSize ;
    scanf("%d",&numsSize) ;
    printf("enter the duplicate sorted array\n") ;
    int nums[numsSize] ;
    for (int i = 0 ; i < numsSize ; i++){
        scanf("%d",&nums[i]) ;
    }
    if (numsSize == 0){
        return 0 ;
    }
    else {

        int back , front , back1 ;
   
   back = 0 ;
     back1 = 0 ;
    int count = 1;
   front = 0 ;

    do {
        if (nums[back] == nums[front] ) {
            front++;
        } else  
         {
            count++;
            back1++ ;
            nums[back1] = nums[front] ;
            back = front;
        }
    } while (front != numsSize ) ;
    printf("final array\n") ;
    for(int i = 0 ; i < count ; i++){
        printf("%d\t",nums[i]) ;
    }
    }


}

