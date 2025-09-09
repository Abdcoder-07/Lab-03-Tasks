// Without 3rd variable
#include<stdio.h>
int main() {
    int num1=2,num2=3;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("%d %d",num1,num2);
}
