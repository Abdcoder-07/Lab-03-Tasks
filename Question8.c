#include<stdio.h>
int main() {
    printf("Enter Marks for 3 subjects");
    float sub1,sub2,sub3;
    scanf("%f %f %f",&sub1,&sub2,&sub3);
    float percentage= ((sub1+sub2+sub3)/300)*100;
    printf("Your percentage is %f",percentage);

}