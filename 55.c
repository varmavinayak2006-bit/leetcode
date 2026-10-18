bool canJump(int* nums, int numsSize) {
    // if( numsSize <= 2 ){
      //  return true ;
   // }
    if( numsSize == 1){
        return true ;
    }
    if ( nums[0]>=numsSize-1){
        return true ;
    }
    int j = 0 ; 
    int k = 0 ;
    while( j < numsSize){
      if(nums[j]== 0 && k > 1){
            for ( int z = 1 ; z <= k ; z++ ){
                if ( nums[j-z] != z){
                    j = j - z ;
                    break ;
                }
                else {continue ;}
            }
            

        }
        k = nums[j] ;
   
            if ( k+ j>= numsSize){
                return true ;
            }
                if (k == 0 ){
            if (j == numsSize -1){
                return true ;
            }
           else {return false ;}
        }
      //  j = j + k ; 
      int i = 0 ;

      for ( i = 0; i < k && (i+j) < numsSize -1;i++){
       
       if (nums[j+i] >= numsSize -1){
        return true ;
       }
      // if( nums[j+i]==0 && i==k){
        //k = k -1  ;
       // }
      }
      j = j+ k ;
      if ( j == numsSize -1 && nums[j]==0){
        return true ;
      }
    }
   
        return true ;
      
   

   
    
}