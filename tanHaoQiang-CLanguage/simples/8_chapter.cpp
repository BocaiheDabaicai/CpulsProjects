#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>

void compare_number(int *p,int *q);
void exchange(int *p1,int *p2,int *p3);
void strcmp_self(char target[],char source[]);
int max_self(int x,int y);
int min_self(int x,int y);
int add_self(int x,int y);
float *search_student(float (*pointer)[4],int n);
void sort_string(char *name[],int n);
void check_student(int *array);

int main_(){
    // 8.1
    /*int data = 100;
    int *p = &data;

    printf("The result is: %d\n",*p);*/

    // 8.2
    /*int data1 = 8, data2 = 11;
    int *p = &data1,*q = &data2;

    if(*p < *q){
        int temp = *p;
        *p = *q;
        *q = temp;
    }

    printf("%d:%d\n",data1,data2);
    printf("%d:%d\n",*p,*q);*/

    // 8.3
    /*int data1 = 8, data2 = 11;
    int *p = &data1,*q = &data2;

    compare_number(p,q);

    printf("%d:%d\n",data1,data2);
    printf("%d:%d\n",*p,*q);*/

    // 8.4略
    // 8.5
    /*int data1 = 7,data2 = 13, data3 = 9;
    int *p1 = &data1,*p2 = &data2,*p3 = &data3;

    exchange(p1,p2,p3);

    printf("%d:%d:%d\n",data1,data2,data3);
    printf("%d:%d:%d\n",*p1,*p2,*p3);*/

    // 8.6,8.7
    /*int array[10] = {3,2,1,6,7,8,9,0,5,4};
    int *p = array;

    for(int i=0;i<10;i++)
        printf("%d ",array[i]);
    printf("\n");

    for(int i=0;i<10;i++)
        printf("%d ",*(p+i));
    printf("\n");*/

    // 8.8,8.9
    /*int array[10] = {3,2,1,6,7,8,9,0,5,4};
    int reverse_array[10];
    int *p = array, *q = reverse_array;

    *//*for(int i=0,j=9;i<10;i++,j--)
        reverse_array[j] = array[i];*//*

    for(int i=0,j=9;i<10;i++,j--)
        *(q+j) = *(p+i);


    for(int i=0;i<10;i++)
        printf("%d ",reverse_array[i]);
    printf("\n");*/

    // 8.10
    /*int array[10] = {3,2,1,6,7,8,9,0,5,4};
    int *p = array,*q = array;
    int temp;

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(*(p+i) < *(q+j)){
                 temp = *(p+i);
                 *(p+i) = *(q+j);
                 *(q+j) = temp;
            }
        }
    }

    for(int i=0;i<10;i++)
        printf("%d ",array[i]);
    printf("\n");*/

    // 8.11,8.12,8.13
    /*int array[3][5] = {
            {2,3,4,5,6},
            {11,3,0,8,9},
            {12,18,10,18,2}
    };
    int *p = array[0];
    int (*q)[5];
    q = array;

    for(int i=0;i<3;i++) {
        for (int j = 0; j < 5; j++)
            printf("%d : %d ", array[i][j], &array[i][j]);
        printf("\n");
    }

    for(;p < array[0] + 15;p++){
        if((p-array[0])%5 == 0) printf("\n");
        printf("%d ",*p);
    }
    printf("\n");

    printf("The result is: %d\n",*(*(q+1)+2));*/

    // 8.14,8.15
    /*float students[3][4] = {
            {76,55,43,89},
            {51,65,93,99},
            {71,82,83,83},
    };
    float *p = students[0] , (*q)[4] = students;
    float sum = 0;

    for(;p<students[0]+12;p++)
        sum += *p;
    printf("The total average is: %.2f\n",sum/12);
    printf("The 1 student scores is: %.2f %.2f %.2f %.2f\n",*(*(q+1)+0),*(*(q+1)+1),*(*(q+1)+2),*(*(q+1)+3));

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(*(*(q+i)+j)<60){
                printf("The failed student scores is: %.2f %.2f %.2f %.2f\n",*(*(q+i)+0),*(*(q+i)+1),*(*(q+i)+2),*(*(q+i)+3));
                break;
            }
        }
    }*/

    // 8.16,8.17,8.18,8.19,8.20,8.21
    /*char string_text[] = {"I love China!"};
    char *p = string_text;
    char string_text_cat[20];
    printf("%s\n",string_text);
    printf("%c\n",string_text[7]);
    printf("%s\n",p);

    *//*int i;
    for(i=0;string_text[i] != '\0';i++)
        string_text_cat[i] = string_text[i];
    string_text_cat[i] = '\0';*//*

    *//*char *p1 = string_text,*p2 = string_text_cat;

    for(;*p1 != '\0';p1++,p2++)
        *p2 = *p1;
    *p2 = '\0';*//*

    strcmp_self(string_text_cat,string_text);

    // strcpy(string_text_cat,string_text);
    printf("result: %s\n",string_text_cat);

    printf("Changed result: %s\n",p+7);*/

    // 8.22,8.23,8.24
    /*int x=7,y=9;
    int (*p)(int,int);
    p = max_self;

    printf("The max is : %d\n",max_self(x,y));
    printf("The max is : %d\n",p(x,y));

    int control_ref = 2;

    if(control_ref == 0) {
        p = max_self;
        printf("The max is : %d\n",p(x,y));
    }
    else if(control_ref == 1){
        p = min_self;
        printf("The min is : %d\n",p(x,y));
    }
    else {
        p = add_self;
        printf("The add is : %d\n",p(x,y));
    }*/

    // 8.25,8.26
    /*float students[3][4] = {
            {76,55,43,89},
            {51,65,93,99},
            {71,82,83,83},
    };
    float *p;
    p = search_student(students,1);

    printf("The scores are: ");
    for(int i=0;i<4;i++)
        printf("%.2f ",*(p+i));
    printf("\n");

    for(int t=0;t<3;t++){
        p = search_student(students,t);
        for(int i=0;i<4;i++){
            if(*(p+i) < 60){
                printf("The failed scores are: ");
                printf("%.2f %.2f %.2f %.2f",*(p+0),*(p+1),*(p+2),*(p+3));
                break;
            }
        }
        printf("\n");
    }*/

    // 8.27,8.28,8.29
    /*char *name[] = {
            "zero in your target,and go for it.",
            "Never put off what you can do today until tomorrow.",
            "You cannot improve your past,but you can improve your future.Once time is wasted,life is wasted.",
            "Whatever is worth doing is worth doing well.",
            "Like knows like."
    };
    sort_string(name,5);

    for(int i=0;i<5;i++)
        printf("%s\n",name[i]);
    printf("\n");

    char **p;
    for(int i=0;i<5;i++){
        p = name+i;
        printf("%s\n",*p);
    }
    printf("\n");

    int data[5] = {23,112,45,667,87};
    int *nums[5] = {&data[0],&data[1],&data[2],&data[3],&data[4]};
    int **q;
    q = nums;

    printf("%d\n",q);
    printf("%d\n",nums);

    printf("%d\n",*q);
    printf("%d\n",nums[0]);

    printf("%d\n",**q);
    printf("%d\n",*nums[0]);

    for(int i=0;i<5;i++){
        printf("%d ",**q);
        q++;
    }
    printf("\n");*/

    // 8.30
    int *p = (int *)malloc(5*sizeof(int));

    for(int i=0;i<5;i++) {
        *(p+i) = rand() % 100 + 1;
    }

    check_student(p);

    return 0;
}

void compare_number(int *p,int *q){
    if(*p < *q){
        int temp = *p;
        *p = *q;
        *q = temp;
    }
}
void exchange(int *p1,int *p2,int *p3){
    compare_number(p1,p2);
    compare_number(p1,p3);
    compare_number(p2,p3);
}
void strcmp_self(char target[],char source[]){
    int i=0;
    for(;source[i] != '\0';i++)
        target[i] = source[i];
    target[i] = '\0';
}
int max_self(int x,int y){
    return x > y ? x : y;
}
int min_self(int x,int y){
    return x > y ? y : x;
}
int add_self(int x,int y){
    return x+y;
}
float *search_student(float (*pointer)[4],int n){
    float *pt;
    pt = *(pointer+n);
    return pt;
}
void sort_string(char *name[],int n){
    char *temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(name[i],name[j]) > 0){
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
}
void check_student(int *array){
    printf("The failed score: ");
    for(int i=0;i<5;i++)
        if(array[i]<60) printf("%d ",array[i]);
    printf("\n");
}