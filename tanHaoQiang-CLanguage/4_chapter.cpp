#include <stdio.h>
#include <math.h>

int main_1() {
    // 第五题
    /*int a = 0;

    scanf("%d", &a);
    while (a > 1000) {
        printf("result>1000,please insert restarting.\n");
        scanf("%d", &a);
    }

    printf("the final result is: %.0f", sqrt(a));*/

    // 第六题
    /*int x;

    scanf("%d", &x);
    if (x < 1) printf("the result is:%d", x);
    else if (x >= 1 && x < 10) printf("the result is:%d", 2 * x - 1);
    else printf("the result is:%d", 3 * x - 11);*/

    // 第九题
    int x1=-1,x2=-1,x3=-1,x4=-1,x5=-1;
    int sum=0;

    scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);

    if(x1) sum++;
    if(x2) sum++;
    if(x3) sum++;
    if(x4) sum++;
    if(x5) sum++;

    printf("sum is:%d\n",sum);

    if(x1) printf("%d",x1);
    if(x2) printf("%d",x2);
    if(x3) printf("%d",x3);
    if(x4) printf("%d",x4);
    if(x5) printf("%d",x5);

    printf("\n");

    if(x5) printf("%d",x5);
    if(x4) printf("%d",x4);
    if(x3) printf("%d",x3);
    if(x2) printf("%d",x2);
    if(x1) printf("%d",x1);

    return 1;
}