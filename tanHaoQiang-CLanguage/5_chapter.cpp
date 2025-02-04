#include <stdio.h>

int main_1() {
    // 第四题
    /*char str;
    int letter = 0, space = 0, digit = 0, other = 0;
    while ((str = getchar()) && str != '\n') {
        if (str >= 'a' && str <= 'z' || str >= 'A' && str <= 'Z') letter++;
        else if(str >= '0' && str <= '9') digit++;
        else if(str == ' ') space++;
        else other++;
    }

    printf("letter:%d\nspace:%d\ndigit:%d\nother:%d\n",letter,space,digit,other);*/

    // 第五题
    /*int a,n,sum=0,temp=0;

    scanf("%d %d",&a,&n);

    for(int i=0;i<n;i++){
        if(i==0) temp=a;
        else temp = temp * 10 + a;
        sum += temp;
    }

    printf("result is:%d\n",sum);*/

    // 第六题
    /*int n, sum = 0, temp = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            temp *= j;
        }
        sum += temp;
        temp = 1;
    }

    printf("result is:%d\n", sum);*/

    // 第七题
    /*double result=0;


    for (int i = 1; i <= 100; ++i) {
        result += i;
    }

    for (int i = 1; i <= 50; ++i) {
        result += i*i;
    }

    for (int i = 1; i <= 10; ++i) {
        result += 1.0/i;
    }

    printf("result is:%f\n", result);*/

    // 第八题
    /*int b,s,g;

    for(int i=100;i<1000;i++){
        b = i/100;
        s = i/10%10;
        g = i%10;
        int sum = b*b*b + s*s*s + g*g*g;
        if(i == sum)
            printf("%d \n",sum);
    }*/

    // 第九题
    /*int temp=0;

    for(int i=1;i<=1000;i++){
        for(int j=1;j<i;j++){
            if(i%j==0) temp += j;
        }
        if(temp == i) printf("%d ",temp);
        temp=0;
    }*/

    // 第十题
    /*double z=2,m=1,sum=0;
    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        sum += z/m;
        double temp = z;
        z = z+m;
        m = temp;
        printf("%f %f : %f\n",z,m,sum);
    }

    printf("result is:%f\n", sum);*/

    // 第十一题
    /*double height = 100, down = 0;

    for (int i = 0; i < 10; i++) {
        down += height;
        height /= 2;
    }

    printf("%f %f\n", down, height);*/

    // 第十二题
    int tao=1;

    for(int i=10;i>1;i--){
        tao = (tao+1) * 2;
    }

    printf("result is:%d\n", tao);

    return 0;
}