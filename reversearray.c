#include<stdio.h>
int main(){
    int a[100];
    int size, i;
    printf("enter the size  of an array");
    scanf("%d", &size);
    printf("enter the element5s of an array");
    for(i = 1; i <=size; i++){
        scanf("%d", &a[i]);
    }
    for( i = size; i >0; i--){
        printf("%d", a[i]);
    }
    return 0;
}
