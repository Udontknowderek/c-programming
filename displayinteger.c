#include<stdio.h>
int main (){
    int a[100];
    int i;
    int n;
    printf("enter the size of an array");
    scanf("%d", &n);
    printf("enter  the elements of an array");
    for(i = 0; i <n; i++){
        scanf("%d", &a[i]);
    }
     for (i = 0; i <n ; i++){
    printf(" %d", a[i]);
}
return 0;
}
