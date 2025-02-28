#include <stdio.h>
#include <math.h>

int fibonacci(int n);

int main_1(){
    // 5.1
    /*int sum=0;
    for(int i=0;i<=100;i++) sum += i;
    printf("The result is: %d\n",sum);*/

    // 5.2,5.3 略

    // 5.4
    /*int sum=0;
    for(int i=0;i<1000;i++){
        if(sum >= 100000) break;
        int yuan = rand() % 900 + 100;
        printf("The number %d contributes %d yuan.\n",i,yuan);
        sum += yuan;
    }
    printf("The sum is: %d\n",sum);*/

    // 5.5
    /*for(int i=100;i<=200;i++){
        if(i%3 != 0) printf("%d ",i);
    }
    printf("\n");*/

    // 5.6
    /*for(int i=1;i<=4;i++){
        int sum = i;
        for(int j=1;j<=5;j++){
            printf("%2d  ",sum);
            sum += i;
        }
        printf("\n");
    }*/

    // 5.7
    /*int sign = 1;
    float pi = 0, n=1,term=1;

    while(fabs(term)>=1e-6){
        pi += term;
        n += 2;
        sign = -sign;
        term = (float)sign * 1/n;
    }
    printf("%f\n",pi*4);*/

    // 5.8
    /*for (int i = 1; i <= 40; ++i) {
        printf("%d ", fibonacci(i));
    }*/

    // 5.9
    /*int data = 13;
    int i=2;

    for(;i<10;i++){
        if(data % i == 0) {
            printf("The number is not a prime number.\n");
            break;
        }
    }

    if(i == 10) printf("The number is a prime number.\n");*/

    // 5.10
    /*for(int data = 100;data<=200;data++){
        int i=2;
        for(;i<10;i++)if(data % i == 0) break;

        if(i == 10) printf("%d ",data);
    }*/

    // 5.11
    char text[200];
    scanf("%s",text);

    for(int i=0;text[i]!='\0';i++){
        if(text[i] >= 'A' && text[i]<='Z' || text[i] >= 'a' && text[i]<='z'){
            if(text[i] >= 'W' && text[i]<='Z' || text[i] >= 'w' && text[i]<='z') text[i] = text[i] - 22;
            else text[i] = text[i] + 4;
        }
    }

    for(int i=0;text[i]!='\0';i++){
        printf("%c",text[i]);
    }


    return 0;
}

int fibonacci(int n){
    if(n == 1) return 1;
    if(n == 2) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}