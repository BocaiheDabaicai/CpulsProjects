#include <stdio.h>

#define PI 3.14

// 问答题
int main_1(void) {
    printf("Hello,World!\n\n");

    /*
     * 2.2 第一问
     * 指令是 include,printf
     * 语句都是
     * */
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n\n");

    /*
     * 2.4
     * 第一问 如下代码
     * 第二问 如下代码
     * */
    int height = 8, length = 12, width = 10, volume;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n\n", (volume + 165) / 166);

    int a, b;
    float f1, f2;
    printf("Integer is : %d %d\n", a, b);
    printf("Float is : %f %f\n\n", f1, f2);

    /*
     * 2.7
     * 第一问
     *   a 不合法，因为数字不能作为标识符的开头
     * 第二问
     *   字符之间的距离太大，不易程序员阅读
     * 第三问
     *   c语言的关键字有 for,printf,while
     * */

    /*
     * 2.8
     * 第一问
     *   记号有=,(),*,-,/,;
     * 第二问
     *   answer = (3 * q – p * p) / 3;
     * 第三问
     *   联系两个标识符的记号之间的空格必不可少
     * */

    return 0;
}

// 解答题
int main_2() {
    // 第一题
    printf("       *\n");
    printf("      * \n");
    printf("     *  \n");
    printf("*   *   \n");
    printf(" * *    \n");
    printf("  *     \n\n");

    // 第二题、第三题
    float radius = 10, volume;

    printf("Enter a radius for a sphere : ");
    scanf("%f", &radius);

    volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("The result is : %.2f\n\n", volume);

    // 第四题
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n\n", amount * 1.05f);

    // 第五题、第六题
    float x, equation;
    printf("Enter an data for x: ");
    scanf("%f", &x);

    // equation = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    equation = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result is : %.2f\n\n", equation);

    // 第七题
    int dollar;
    printf("Enter an data for dollar: ");
    scanf("%d", &dollar);

    printf("$20 bills: %d\n", dollar / 20);
    printf("$10 bills: %d\n", dollar % 20 / 10);
    printf("$5 bills: %d\n", dollar % 20 % 10 / 5);
    printf("$1 bills: %d\n\n", dollar % 20 % 10 % 5);

    // 第八题
    float loan,interest_rate,monthly_payment,surplus1,surplus2,surplus3;
    printf("Enter an data for loan: ");
    scanf("%f", &loan);
    printf("Enter an data for interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter an data for monthly payment: ");
    scanf("%f", &monthly_payment);

    surplus1 = loan - monthly_payment;
    surplus1 += surplus1 * (interest_rate/12+1)*100;

    surplus2 = surplus1 - monthly_payment;
    surplus2 += surplus2 * (interest_rate/12+1)*100;

    surplus3 = surplus2 - monthly_payment;
    surplus3 += surplus3 * (interest_rate/12+1)*100;

    printf("Balance remaining after first payment: $%.2f\n",surplus1);
    printf("Balance remaining after second payment: $%.2f\n",surplus2);
    printf("Balance remaining after third payment: $%.2f\n",surplus3);

    return 0;
}