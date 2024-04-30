#include<stdio.h>
int sum (int x, int y){
int sum = x + y;
return sum;
}
int main(){

printf("%d\n", sum(52, 98));
printf("%d\n", sum(52, 91));
return 0;
}