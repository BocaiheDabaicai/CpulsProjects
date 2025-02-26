#include <stdio.h>

int jump_function(float data);

int main(){
    // 4.1 略
    // 4.2 略
    // 4.3 略
    // 4.4 略
    // 4.5
    printf("The result is: %d\n", jump_function(2));
    printf("The result is: %d\n", jump_function(0));
    printf("The result is: %d\n", jump_function(-4));
    // 4.6 ...

    return 0;
}

int jump_function(float data){
    if(data < 0) return -1;
    else if(data > 0) return 1;
    else return 0;
}