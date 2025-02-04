#include <stdio.h>

int gys(int a, int b);
int gbs(int a, int b,int h);

void revert(int a[3][3]);

void revert_char(char a[50]);

int main() {
    // 第一题
    /*int r = gys(108,96);
    int s = gbs(108,96,r);*/

    // 第四题
    /*int a[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    revert(a);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/

    // 第五题
    char s[50];

    scanf("%s",s);
    revert_char(s);
    for(int i;s[i] != '\0';i++)
        printf("%c",s[i]);

    return 1;
}

int gys(int a, int b) {
    int r=a%b;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (r != 0) {
        a=b;
        b=r;
        r=a%b;
    }

    printf("gys is : %d\n",b);
    return b;
}

int gbs(int a,int b,int h){
    printf("gbs is : %d\n",a*b/h);
    return a*b/h;
}

void revert(int a[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

void revert_char(char a[50]){
    int i=0,j=0;
    char t[50];

    for(;a[i] != '\0';i++);
    i--;
    for(;i>=0;j++,i--)
        t[j] = a[i];
    j++;
    t[j] = '\0';

    for(int z=0;z<=j;z++)
        a[z] = t[z];
}