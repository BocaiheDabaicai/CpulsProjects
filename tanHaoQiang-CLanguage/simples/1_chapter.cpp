#include <stdio.h>

int main_1(){
    // 1.1
    printf("This is a C program.\n");

    // 1.2
    int a,b;
    printf("input:(a,b)");
    scanf("%d,%d",&a,&b);
    printf("The sum is: %d\n",a+b);

    // 1.3(接上)
    printf("The bigger is: %d",a>b?a:b);

    return 0;
}