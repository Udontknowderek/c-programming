#include<stdio.h>
int main(){
    int a[4]= {9, 4, 5, 6,};
    int i, j, flag =0;
     printf("enter the element of an array to be searched");
    
    scanf("%d", &j);
   for(i = 0; i<=5; i++){
        if(j==a[i]){
            flag =1; 
            printf("element found at %d location", i+1);
            
            
        }
    }
    if (flag==0){
        printf("element not found");
    }
}
