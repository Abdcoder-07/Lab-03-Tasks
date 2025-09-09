#include <stdio.h>
int main() {
    int Length,Width;
    printf("Enter Length\n");
    scanf("%d",&Length);
    printf("Enter Width\n");
    scanf("%d",&Width);
    int area=Length*Width;
    printf("Area of Rectangle= %d\n",area);
    return 0;
}