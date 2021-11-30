#include<stdio.h>
 int main(){
     int n, i;
     int fact = 1;
     printf("enter the  number");
     scanf("%d", &n);
     if(n<0){
         printf("enter positive number only");
     }
     else{
     for(i = n; i>0; i--)
      fact = fact * i;
      printf("factorial of %d is %d", n, fact);
     }
      return 0;
 }
