#include <stdio.h>

int main_1(){
    // 3.1
    float temp = 64;

    printf("The result is: %.2f\n",(5.0/9) * (temp-32));

    // 3.2
    float r1 = 0.0036,r2=0.0225,r3=0.0198;
    float p0=1000,p1,p2,p3;

    p1 = p0 * (1+r1);
    p2 = p0 * (1+r2);
    p3 = p0 * (1+r3/2.0) * (1+r3/2.0);

    printf("The result is: %.2f\n",p1);
    printf("The result is: %.2f\n",p2);
    printf("The result is: %.2f\n",p3);

    // 3.3
    /*char upper;
    int val = 'a' - 'A';

    scanf("%c",&upper);

    printf("The result is %c\n",upper+val);*/

    // 3.4 略
    // 3.5 略
    // 3.6,3.7
    printf("%20.15f\n",1.0/3);
    printf("%55.25f\n",1.0/3);

    // 3.8
    char a='B',b='O',c='Y';
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');

    // 3.9(接上)
    /*a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');*/

    // 3.10
    /*char upper;
    int val = 'a' - 'A';
    upper = getchar();
    putchar(upper+val);
    putchar('\n');*/

    return 1;
}