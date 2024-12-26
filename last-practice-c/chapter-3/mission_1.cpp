#include <stdio.h>

int main(){
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
    int year,month,day,number;
    float price;
    printf("Enter item number: ");
    scanf("%d",&number);
    printf("Enter unit price: ");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%-7.2f\t%2.2d%2.2d%4.4d\n",number,price,month,day,year);

    return 0;
}