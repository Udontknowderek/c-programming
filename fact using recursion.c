#include<stdio.h>
int fact(int);

int main(){
    int ans;
    int number; 
    printf("enter the number");
    scanf("%d", &number);
     ans = fact(number);
    printf("factorial of %d is %d", number,  ans);
}
int fact( int number){
    if (number ==0 && number ==1){
        return 1; 
        
    }  else if( number >1){
        return number * fact( number - 1);
    }
}
