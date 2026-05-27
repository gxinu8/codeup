#include<stdio.h>

void Change(int *n, int *m){
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}

int main(){
    int a=0, b=0, c=0;
    scanf("%d %d", &a, &b);
    Change(&a, &b);
    printf("%d %d", a, b);
}