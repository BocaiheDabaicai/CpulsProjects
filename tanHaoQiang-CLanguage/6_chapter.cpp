#include <stdio.h>

int main_1() {
    // 题目一
    /*int a[100];
    for (int i = 0; i < 100; i++) {
        a[i] = i + 1;
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 2; j <= 10; j++)
            if (a[i] % j == 0) a[i] = 0;
    }

    for (int i = 0; i < 100; i++) {
        if (a[i] > 0)
            printf("%d ", a[i]);
    }*/

    // 题目二
    /*int a[10] = {2,3,4,2,7,9,4,1,3,5};

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }*/

    // 题目三
    /*int a[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    },left=0,right=0;

    for(int i=0;i<3;i++){
        printf("%d ",a[i][i]);
    }
    for(int i=0;i<3;i++){
        printf("%d ",a[i][2-i]);
    }*/

    // 题目六
    /*int a[10][10];

    a[0][0] = 1;
    a[1][0] = 1;
    a[1][1] = 1;
    for(int i=2;i<10;i++){
        for(int j=0;j<i;j++){
            if(j==0 || j==i-1) a[i][j] = 1;
            else a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }*/

    // 题目七
    /*int n=5, row, col,data;

    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = 0;
        }
    }

    a[0][n / 2] = 1;
    row = 0;
    col = n / 2;
    data = 1;

    for (int i = 1; i < n * n; i++) {
        int tempRow = row - 1 >= 0 ? row - 1 : n - 1;
        int tempCol = col + 1 < n ? col + 1 : 0;

        if(a[tempRow][tempCol] >0) {
            row += 1;
        }else{
            row = tempRow;
            col = tempCol;
        }
        a[row][col] = ++data;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }*/

    // 题目八
    /*int arr[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    }, rowMax = arr[0][0], row = 0, col = 0;
    int t = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (rowMax < arr[i][j]) {
                rowMax = arr[i][j];
                row = i;
                col = j;
            }
        }
        for (; t < 3; t++) {
            if (rowMax > arr[t][col]) break;
        }
        if (t == 3)printf("%d ", rowMax);
        rowMax = arr[++row][0];
        t = 0;
    }*/

    // 题目九
    /*int a[10]={9,8,7,6,5,4,3,2,1,0};
    int data,left=0,right=10,mid=(left+right)/2;

    scanf("%d",&data);

    while (left <= right){
        if(data == a[mid]){
            printf("%d ",mid);
            break;
        }
        if(data < a[mid]) {
            left = mid+1;
            mid = (left + right)/2;
        }
        if(data > a[mid]){
            right = mid-1;
            mid = (left + right)/2;
        }
    }
    if(left > right) printf("no the input\n");*/

    // 题目十
    /*char text[3][80];
    int big=0,small=0,digit=0,space=0,other=0;

    for(int i=0;i<2;i++){
        gets(text[i]);
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<80;j++){
            if(text[i][j] >= 'A' && text[i][j] <= 'Z') big++;
            else if(text[i][j] >= 'a' && text[i][j] <= 'z') small++;
            else if(text[i][j] >= '0' && text[i][j] <= '9') digit++;
            else if(text[i][j] == ' ') space++;
            else other++;
        }
    }

    printf("big: %d\n",big);
    printf("small: %d\n",small);
    printf("digit: %d\n",digit);
    printf("space: %d\n",space);
    printf("other: %d\n",other);*/

    // 题目十三
    /*char a[80],b[40];
    int ai=0,bi=0;

    printf("a:");
    scanf("%s",a);
    printf("b:");
    scanf("%s",b);

    while(a[ai] != '\0') ai++;
    while(b[bi] != '\0') {
        a[ai++]=b[bi++];
    }
    a[ai] = '\0';

    for(int i=0;a[i] != '\0';i++)
        printf("%c",a[i]);*/

    // 题目十四

    char a[40],b[40];
    int ai=0,bi=0;

    printf("a:");
    scanf("%s",a);
    printf("b:");
    scanf("%s",b);

    while(a[ai] == b[bi]){
        ai++;
        bi++;
    }

    if(a[ai-1] == '\0' && b[bi-1] == '\0') printf("0\n");
    else printf("%d\n",a[ai]-b[bi]);

    return 0;
}