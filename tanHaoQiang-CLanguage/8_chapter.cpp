#include <stdio.h>
#include <string.h>

void swap(int *p1,int *p2);
void compare(int a[5][5],int result[5][2],int ref);
void sort(char str[10][100]);

int main(){
    // 第一题
    /*int n1,n2,n3;
    int *p1,*p2,*p3;

    scanf("%d %d %d",&n1,&n2,&n3);
    p1=&n1;
    p2=&n2;
    p3=&n3;

    if(*p1 > *p2) swap(p1,p2);
    if(*p1 > *p3) swap(p1,p3);
    if(*p2 > *p3) swap(p2,p3);

    printf("The result is: %d %d %d\n",*p1,*p2,*p3);*/

    // 第三题
    /*int a[10] = {2,5,6,7,9,0,1,3,4,8};
    int *p_min = &a[0],*p_max = &a[9],*p=&a[0];

    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<10;i++){
        if(*p > a[i]) p = &a[i];
    }
    swap(p_min,p);

    for(int i=0;i<10;i++){
        if(*p < a[i]) p = &a[i];
    }
    swap(p_max,p);

    for(int i=0;i<10;i++)
        printf("%d ",a[i]);*/

    // 第四题
    /*int a[10]={2,5,6,7,9,0,1,3,4,8},m=4;

    for(int i=10-m;i<10;i++){
        int temp = a[i];
        for(int j=i;j>=i-10+m;j--){
            a[j] = a[j-1];
        }
        a[i-10+m] = temp;
    }

    for(int i=0;i<10;i++)
        printf("%d ",a[i]);*/

    // 第五题
    /*int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i=0;

    for(;a[i];i++);

    printf("The last number is: %d\n",a[i-1]);*/

    // 第六题
    /*char str[80];
    char *p = &str[0];

    scanf("%s",str);

    for(;*p!='\0';p++);

    printf("The length is: %d\n",p - &str[0]);*/

    // 第八题
    /*char str[120] = {"ashdk123AOID FHASKD 123123SDFGasd)(*&()&*(^&*%^& "};
    char *p=&str[0];
    int big=0,small=0,space=0,digit=0,other=0;

    // scanf("%s",str);

    for(;*p != '\0';p++){
        if(*p >= 'A' && *p <= 'Z') big++;
        else if(*p >= 'a' && *p <= 'z') small++;
        else if(*p >= '1' && *p <= '9') digit++;
        else if(*p == ' ') space++;
        else other++;
    }

    printf("big: %d\n",big);
    printf("small: %d\n",small);
    printf("space: %d\n",space);
    printf("digit: %d\n",digit);
    printf("other: %d\n",other);*/

    // 第十题，弃掉，不好写，不好想，价值不高
    /*int a[5][5] = {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15},
            {16,17,18,19,20},
            {21,22,23,24,25},
    };
    int result[5][2] = {
            {0,0},
            {0,0},
            {0,0},
            {0,0},
            {0,0},
    };

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[result[0][0]][result[0][1]] < a[i][j]){
                result[0][0] = i;
                result[0][1] = j;
            }
            if(a[result[1][0]][result[1][1]] > a[i][j]){
                result[1][0] = i;
                result[1][1] = j;
            }
        }
    }

    compare(a,result,2);
    compare(a,result,3);
    compare(a,result,4);

    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++)
            printf("%d ",result[i][j]);
        printf("\n");
    }

    swap(&a[2][2],&a[result[0][0]][result[0][1]]);
    swap(&a[0][0],&a[result[1][0]][result[1][1]]);
    swap(&a[0][4],&a[result[2][0]][result[2][1]]);
    swap(&a[4][0],&a[result[3][0]][result[3][1]]);
    swap(&a[4][4],&a[result[4][0]][result[4][1]]);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }*/

    // 第十一、十二题
    char str[10][100]={
            {"asdkjlkwe"},
            {"asdkjlkwg"},
            {"asdkjlkwr"},
            {"asdkjlkw2"},
            {"asdkjlkwq"},
            {"asdkjlkwz"},
            {"asdkjlkwx"},
            {"asdkjlkwa"},
            {"asdkjlkwc"},
            {"asdkjlkwd"},
    };

    sort(str);

    for(int i=0;i<10;i++){
        for(int j=0;str[i][j]!='\0';j++)
            printf("%c",str[i][j]);
        printf("\n");
    }

    return 1;
}

void swap(int *p1,int *p2){
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}
void compare(int a[5][5],int result[5][2],int ref){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i == result[ref-1][0] && j == result[ref-1][1]) continue;
            else if(a[result[ref][0]][result[ref][1]] > a[i][j] || a[result[ref][0]][result[ref][1]] == a[result[ref-1][0]][result[ref-1][1]]){
                // printf("%d:%d ",i,j);
                result[ref][0] = i;
                result[ref][1] = j;
            }
        }
    }
}
void sort(char str[10][100]){
    char *p,temp[100];
    p=temp;

    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(p,str[j]);
                strcpy(str[j],str[i]);
                strcpy(str[i],p);
            }
        }
    }
}