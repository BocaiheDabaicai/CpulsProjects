#include <stdio.h>

// 练习题
int main_1() {
    /*
     * 4.1
     * 1
     * a:1 2
     * b:0
     * c:1
     * d:2
     * 2
     * 总是一样的，验证代码如下
     * */
    int i = 13, j = 2;
    printf("%d %d", (-i) / j, -(i / j));

    /*
     * 3,4,5,6,7,8 c89,c99下表达式的值会有什么结果，了解即可
     * */

    /*
     * 4.2
     * 9
     * a:57 8
     * b:3 2 1
     * c:2 -1 3
     * d:0 0 0
     * 10
     * a:12 12
     * b:3 4
     * c:2.5 8.5
     * d:6 9
     * */

    /*
     * 4.3
     * 11
     * a:0
     * b:6,11 6
     * c:0,8 7
     * d:3,4 5 4
     * 12
     * a:6 16
     * b:6 -7
     * c:6 23
     * d:6 20
     * 13
     * ++i与i+=1相同??
     * */

    /*
     * 4.4
     * 14
     * a:(((a*b) - (c*d)) + e)
     * b:(((a/b)%c)/d)
     * c:((((–a) – b) + c) - (+ d))
     * d:(((a * (- b)) / c) - d)
     * */

    /*
     * 4.5
     * 15
     * a:3,2
     * b:0,2
     * c:1,2
     * d:1,3
     * */


    return 0;
}

// 算法题
int main_2() {

    // 第一、二题
    /*int a;
    printf("Enter a three-digit number: ");
    scanf("%d", &a);

    printf("The reversal is: %d%d%d\n", a % 10, a / 10 % 10, a / 100);*/

    // 第三题
    /*int a1, a2, a3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &a1, &a2, &a3);

    printf("The reversal is: %d%d%d\n", a3, a2, a1);*/

    // 第四题
    /*int a4;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &a4);

    printf("In octal, your number is: %d%d%d%d%d\n", a4 / 8 / 8 / 8 / 8 % 8, a4 / 8 / 8 / 8 % 8, a4 / 8 / 8 % 8,
           a4 / 8 % 8, a4 % 8);*/

    // 第五题
    /*int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
            first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));*/

    // 第六题
    int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6,
            first_sum, second_sum, total;

    printf("Enter the first 12 digits of a EAN:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);

    first_sum = i2 + i4 + i6 + j2 + j4 + j6;
    second_sum = i1 + i3 + i5 + j1 + j3 + j5;
    total = 3 * first_sum + second_sum - 1;

    printf("Check digit: %d\n", 9 - total % 10);

    return 0;
}