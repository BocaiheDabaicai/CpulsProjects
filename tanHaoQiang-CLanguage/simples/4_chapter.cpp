#include <stdio.h>
#include <math.h>

int jump_function(float data);

int main_1(){
    // 4.1 略
    // 4.2 略
    // 4.3 略
    // 4.4 略
    // 4.5
    printf("The result is: %d\n", jump_function(2));
    printf("The result is: %d\n", jump_function(0));
    printf("The result is: %d\n", jump_function(-4));
    // 4.6
    /*char grade;
    scanf("%c",&grade);
    printf("Your score:");
    switch (grade) {
        case 'A':printf("85~100\n");break;
        case 'B':printf("70~84\n");break;
        case 'C':printf("60~69\n");break;
        case 'D':printf("<60\n");break;
        default:printf("enter error data!\n");
    }*/
    // 4.7 略
    // 4.8
    /*int year;
    scanf("%d",&year);

    if(year%4 ==0 && year%100 != 0  || year%400 == 0)
        printf("it is a lunar year.\n");
    else
        printf("It is not a lunar year.\n");*/
    // 4.9
    float a=1,b=2,c=2;
    float delta = b*b - 4*a*c;
    float x1,x2,data_front,data_end;
    if(delta < 0) {
        delta = fabs(delta);
        data_front = -b / 2*a;
        data_end = delta / 2*a;
        printf("x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n",data_front,data_end,data_front,data_end);
    }else{
        x1 = (-b + sqrt(delta)) / 2*a;
        x2 = (-b - sqrt(delta)) / 2*a;
        printf("x1 = %.2f, x2 = %.2f\n",x1,x2);
    }






    return 0;
}

int jump_function(float data){
    if(data < 0) return -1;
    else if(data > 0) return 1;
    else return 0;
}