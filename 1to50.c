#include<stdio.h>
int main(){
  int number; 
  int i;
  printf("enter the number");
  scanf("%d", &number);
  for(i = 1; i <=number; i++){
    printf("%d", i);
    printf("\n");
  }
  return 0;
}
