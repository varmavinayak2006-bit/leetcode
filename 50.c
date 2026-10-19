#include<stdio.h>
#include<math.h>
int main (){
    printf("enter the number \n") ;
    double x ;
    scanf("%d",&x) ;
    printf("enter the power to raised\n") ;
    int n ;
    scanf("%d",&n) ;
    double ans ;
    ans = pow(x,n) ;
    printf("\n%d",ans) ;
}