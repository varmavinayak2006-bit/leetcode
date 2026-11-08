bool search(int* nums, int numsSize, int target) {
    int change ;
    if(numsSize == 1){
        if(nums[0]==target){
            return true ;
        }
        else return false ;
    }
    if (numsSize == 2){
        if(nums[0]== target || nums[1]== target) return true ;
        else false ;
    }
    int flag = 0 ;
    for( int i = 0 ; i <= numsSize-2 ; i++){
        if(nums[i]>nums[i+1]){
            flag = 1 ;
            change = i +1;
            break ;
        }
    }

    if(change == 1 && nums[change]== target) return true ;
    if(change == numsSize-1 && nums[change] == target) return true ;
    if(flag == 0) change = numsSize -1 ;
    int low1 , mid1 , high1,low2 , mid2 , high2 ;
    low1 = 0 ;
    high1 = change-1 ;
    low2 = change ;
    high2 = numsSize-1 ;
    int found = 0 ;
    while (high1 >= low1 || high2 >= low2){

        if(high1 >= low1){
            mid1 = ( low1 + high1)/2 ;
            if (nums[mid1] == target){
                return true ;
            }
            else if ( target > nums[mid1]){
                low1 = mid1 + 1 ;
            }
            else {
                high1 = mid1 -1 ;
            }
        }
        if(high2 >= low2){
            mid2 = ( low2 + high2)/2 ;
            if (nums[mid2] == target){
                return true ;
            }
            else if ( target > nums[mid2]){
                low2 = mid2 + 1 ;
            }
            else {
                high2 = mid2 -1 ;
            }

        }
    }
    
        return false ;
}