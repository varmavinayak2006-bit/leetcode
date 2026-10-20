int missingNumber(int* nums, int numsSize) {
    int total = 0 ;
    for ( int i = 0 ; i < numsSize ; i++){
        total = total + nums[i] ;
    }
    int ans ;
    ans = (numsSize*(numsSize+1))/2 ;
    return ans - total ;
    
}