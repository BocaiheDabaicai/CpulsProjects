#include <stdio.h>

int max_data(int,int,int); // 求最大值

int main_1(){
    //  第4题
    printf("****************\n");
    printf("   Hello World! \n");
    printf("****************\n");

    // 第5题
    printf("*****\n");
    printf("  *****\n");
    printf("    *****\n");
    printf("      *****\n");

    // 第6题
    printf("The max is: %d\n", max_data(3,1,2));

    return 0;
}

int max_data(int a,int b,int c){
    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;

    return max;
}