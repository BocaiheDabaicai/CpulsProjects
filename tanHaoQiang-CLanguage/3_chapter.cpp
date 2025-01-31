#include <stdio.h>
#include <math.h>

int main_1() {
    // 1.
    printf("p=%f\n", pow(1 + 0.07, 10));

    // 2.
    printf("5year: %f\n", 1000 * (1 + 5 * 0.03));

    float two = 1000 * (1 + 2 * 0.021);
    printf("2+3year: %f\n", two * (1 + 3 * 0.0275));

    float three = 1000 * (1 + 3 * 0.0275);
    printf("3+2year: %f\n", three * (1 + 2 * 0.021));

    float one = 1000 * (1 + 1 * 0.015);
    for (int i = 1; i < 5; i++) one = one * (1 + 1 * 0.015);
    printf("1+1+1+1+1year: %f\n", one);

    printf("life5_year: %f\n", 1000 * pow((1 + 0.0035 / 4), 4 * 5));

    // 3.
    float m = log10(6000 / (6000 - 300000 * 0.01)) / log10(1 + 0.01);
    printf("p=%.1f\n", m);

    // 4.
        //    char c1 = 97, c2 = 98;
        //    char c1 = 197, c2 = 198;    // ascii 字符的输入范围在0~127
    int c1 = 97, c2 = 98;   // 与 char 格式的结果一致
    printf("c1=%c,c2=%c\n", c1, c2); // 按字符格式输入整数，会得到字符
    printf("c1=%d,c2=%d\n", c1, c2); // 按整数格式输入整数，会得到数字

    // 6
    char c11='C',c12='h',c13='i',c14='n',c15='a';
    printf("The password is %c%c%c%c%c\n",c11+3,c12+4,c13+6,c14+7,c15+9);

    return 1;
}