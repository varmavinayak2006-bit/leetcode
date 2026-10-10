#include<stdio.h>
int main (){
    int x ;
    printf("enter a non negative  number \n") ;
    scnaf("%d",&x) ;
  
    if ( x== 0){
        return 0 ;
    } else {
    long long int y = 1 ;
    if ( x < 4 ){
        return y ;
    }
    else {
   for ( y = 0 ; y*y <= x  ; y++){

   }
    return y-1 ;
    }
}

}