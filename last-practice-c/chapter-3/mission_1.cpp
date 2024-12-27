#include <stdio.h>

int main() {
    printf("%6d,%4d\n", 86, 1040); // ----86 1040
    printf("%12.5e\n", 30.253); // ----30.25300
    printf("%.4f\n", 83.162); // 83.1620
    printf("%-6.2g\n", .0000009979); //

    printf("%-8.1f\n", 83.162); // 指数表示形式，栏宽8，左对齐，小数点后保留1位数字
    printf("%10.6f\n", 83.162); // 指数表示形式，栏宽10，右对齐，小数点后保留6位数字
    printf("%-8.3f\n", 83.162); // 定点十进制表示形式，栏宽8，左对齐，小数点后保留3位数字
    printf("%6.f\n\n", 83.162); // 定点十进制表示形式，栏宽6，右对齐，小数点后无数字

    /*
     * 本题不太会，想看解释
     * (a) "%d"与" %d"
     * (b) "%d-%d-%d"与"%d -%d -%d"。
     * (c) "%f"与"%f "。
     * (d) "%f,%f"与"%f, %f"。
     * */

    // 第四题
    /*int i,j;
    float x;
    scanf("%d%f%d", &i, &x, &j);
    printf("%d\t%f\t%d\n", i, x, j);*/

    // 第五题
    /*int i;
    float x,y;
    scanf("%f%d%f", &x, &i, &y);
    printf("%f\t%d\t%f\n", x, i, y);*/

    // 第六题
    /*int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("`The sum is %d/%d\n`", result_num, result_denom);*/

    // 编程题
    // 第一题
    /*int year,month,day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("You entered the date %4.4d%2.2d%2.2d \n",year,month,day);*/

    // 第二题
    /*int year,month,day,number;
    float price;
    printf("Enter item number: ");
    scanf("%d",&number);
    printf("Enter unit price: ");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%-7.2f\t%2.2d%2.2d%4.4d\n",number,price,month,day,year);*/

    // 第三题
    /*int a1,a2,a3,a4,a5;
    printf("Enter ISBN: ");
    scanf("%d - %d - %d - %d - %d",&a1,&a2,&a3,&a4,&a5);

    printf("GS1 prefix: %d\n",a1);
    printf("Group identifier: %d\n",a2);
    printf("Publisher code: %d\n",a3);
    printf("Item number: %d\n",a4);
    printf("Check digit: %d\n",a5);*/

    // 第四题
    /*int a1,a2,a3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&a1,&a2,&a3);

    printf("You entered: %d.%d.%d\n",a1,a2,a3);*/

    // 第五题
    /*int a11, a12, a13, a14;
    int a21, a22, a23, a24;
    int a31, a32, a33, a34;
    int a41, a42, a43, a44;

    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a11, &a12, &a13, &a14, &a21, &a22, &a23, &a24, &a31, &a32, &a33, &a34,
          &a41, &a42, &a43, &a44);

    printf("%d %d %d %d\n", a11, a12, a13, a14);
    printf("%d %d %d %d\n", a21, a22, a23, a24);
    printf("%d %d %d %d\n", a31, a32, a33, a34);
    printf("%d %d %d %d\n\n", a41, a42, a43, a44);

    printf("Row sums: %d %d %d %d\n", a11 + a12 + a13 + a14, a21 + a22 + a23 + a24, a31 + a32 + a33 + a34,
           a41 + a42 + a43 + a44);
    printf("Column sums: %d %d %d %d\n", a11 + a21 + a31 + a41, a12 + a22 + a32 + a43, a13 + a23 + a33 + a43,
           a14 + a24 + a34 + a44);
    printf("Diagonal sums: %d %d\n", a11 + a22 + a33 + a44, a14 + a23 + a32 + a41);*/

    // 第六题
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1,&num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("`The sum is %d/%d\n`", result_num, result_denom);

    return 0;
}