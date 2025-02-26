#include <stdio.h>

int get_factorial(int data);
float add_numbers(float data);
void is_prime_number(int data);

int main_1(){
    // 2.1
    /*printf("The result is: %d\n", get_factorial(5))*/;

    // 2.2 略
    // 2.3
    /*for(int i=2000;i<=2500;i++){
        if(i%4 == 0 && i%100 != 0 || i%400 == 0)
            printf("%d year is correct.:)\n",i);
        else
            printf("%d year is not result\n",i);
    }*/

    // 2.4
    /*printf("The result is: %f\n", add_numbers(100));*/

    // 2.5
    is_prime_number(7);
    is_prime_number(9);

    return 0;
}

int get_factorial(int data){
    if(data == 1) return 1;

    return data*get_factorial(data-1);
}
float add_numbers(float data){
    if(data == 1) return 1;

    float sign = (int)data % 2 == 0? -1:1;
    float value = sign * 1/data;

    return value + add_numbers(data-1);
}
void is_prime_number(int data){
    int i=2;
    if(data < 3) printf("The data needs to bigger than 2.\n");
    else{
        for(;i<6;i++)
            if(data % i == 0){
                printf("The data is not a prime number.\n");
                break;
            }
    }
    if(i==6) printf("The data is a prime number.\n");
}