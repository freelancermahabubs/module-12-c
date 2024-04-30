#include<stdio.h>


void sum(int x, int y){


int s = x + y;
printf("%d\n",s);
    
}
int main(){

int a, b;
scanf("%d %D", &a, &b);
sum(a, b);
    return 0;
}