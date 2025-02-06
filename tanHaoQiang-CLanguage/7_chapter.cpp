#include <stdio.h>
#include <math.h>

int gys(int a, int b);
int gbs(int a, int b,int h);

void revert(int a[3][3]);
void revert_char(char a[50]);
void concat_char_arr(char a[],char b[],char c[]);
void expand_number(char a[]);
void max_long_word(char a[]);
float Legendre_Polynomials(int a,int x);
void student_calculation(float a[10][5]);

void work_input(int a[],char b[][8]);
void work_sort(int a[],char b[][8]);
void work_search(int a[],char b[][8],int c);

void hex_change_dec(char a[]);
void int_change_string(int a);
void calc_day(int year,int month,int day);

int main_1() {
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
    /*char s[50];

    scanf("%s",s);
    revert_char(s);
    for(int i;s[i] != '\0';i++)
        printf("%c",s[i]);*/

    // 第六题
    /*char a[100],b[100],c[100];

    printf("a:");
    scanf("%s",a);
    printf("b:");
    scanf("%s",b);
    concat_char_arr(a,b,c);
    printf("result:%s\n",c);*/

    // 第八题
    /*char str[80];

    printf("str:");
    scanf("%s",str);
    expand_number(str);
    printf("result is: %s",str);*/

    // 第十题
    /*char str[100];

    scanf("%s",str);
    max_long_word(str);*/

    // 第十三题
    /*printf("The final data is: %f\n",Legendre_Polynomials(12,7));*/

    // 第十四题
    /*float a[10][5]={
            {45,35,78,66,55},
            {55,15,58,76,95},
            {32,46,78,66,75},
            {54,46,79,45,65},
            {60,69,65,75,75},
            {43,54,66,99,66},
            {35,54,65,67,87},
            {1,45,77,76,75},
            {99,93,82,85,89},
            {91,90,89,76,88},
    };
    student_calculation(a);*/

    // 第十五题
    /*int a[] = {2001,2003,2002,2000,2005,2004,2009,2007,2006,2010};
    char b[][8] = {
            {"dsa"},
            {"dqwr"},
            {"bgf"},
            {"oopg"},
            {"loif"},
            {"vite"},
            {"hvjd"},
            {"iroe"},
            {"cnxs"},
            {"spol"},
    };

    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10;i++) {
        for (int j = 0; b[i][j] != '\0'; j++)
            printf("%c", b[i][j]);
        printf(" ");
    }

    work_sort(a,b);

    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10;i++) {
        for (int j = 0; b[i][j] != '\0'; j++)
            printf("%c", b[i][j]);
        printf(" ");
    }

    printf("\n");
    work_search(a,b,2010);*/

    // 第十六题
    /*hex_change_dec("a11");*/

    // 第十七题
    /*int_change_string(-123);*/

    // 第十八题
    calc_day(2003,11,10);

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
void concat_char_arr(char a[],char b[],char c[]){
    int i=0,j=0;
    for(;a[i] != '\0';i++)
        c[i] = a[i];
    for(;b[j] != '\0';j++)
        c[i+j] = b[j];
    c[i+j] = '\0';
}
void expand_number(char a[]){
    int i=0;
    for(;a[i]!='\0';i++);
    for(;i>0;i--){
        a[i*2] = a[i];
        a[i*2-1] = ' ';
    }
}
void max_long_word(char a[]){
    int count=0;
    int temp=0;

    for(int i=0;a[i]!='\0';i++){
        while(a[i] != ' ' && a[i]!='\0') {
            temp++;
            i++;
        }
        if(count < temp) count = temp;
        temp = 0;
    }

    printf("The long word length is: %d\n",count);
}
float Legendre_Polynomials(int a,int x){
    if(a == 0) return 1;
    if(a == 1) return x;
    return ((2*a-1) * x - Legendre_Polynomials(a-1,x) - (a-1) * Legendre_Polynomials(a-2,x)) / a;
}
void student_calculation(float a[10][5]){
    float average_student[10];
    float average_class[5];
    float max_score_class_and_student[2][5];
    float average_variance; // just use in claim the name target

    for(int i=0;i<10;i++){
        float sum=0;
        for(int j=0;j<5;j++){
            sum += a[i][j];
        }
        average_student[i] = sum / 5;
    }

    for(int i=0;i<5;i++){
        float sum=0;
        for(int j=0;j<10;j++){
            sum += a[j][i];
        }
        average_class[i] = sum / 10;
    }

    for(int i=0;i<5;i++){
        float max=a[0][i];
        float max_tag=0;
        for(int j=0;j<10;j++){
            if(max < a[j][i]) {
                max = a[j][i];
                max_tag = j;
            }
        }
        max_score_class_and_student[0][i] = max;
        max_score_class_and_student[1][i] = max_tag;
    }

    float sum1=0,sum2=0;
    for(int i=0;i<10;i++){
        sum1 += average_student[i] * average_student[i];
        sum2 += average_student[i];
    }

    for(int i=0;i<10;i++)
        printf("The %d student average is: %f\n",i,average_student[i]);
    for(int i=0;i<5;i++)
        printf("The %d class average is: %f\n",i,average_class[i]);
    for(int i=0;i<2;i++)
        for (int j = 0; j < 5; ++j) {
            i == 0 ?
            printf("The max class score is: %f\n",max_score_class_and_student[i][j]):
            printf("The max class student number is: %.0f\n",max_score_class_and_student[i][j]);
        }
    printf("The average_variance is: %f\n",sum1/10-((sum2/10) * (sum2/10)));
}

void work_input(int a[],char b[][8]){
    for(int i=0;i<10;i++){
        printf("The %d number is:",i);
        scanf("%d",a[i]);
        printf("The %d name is:",i);
        scanf("%s",b[i]);
    }
}
void work_sort(int a[],char b[][8]){
    int tag;
    for(int i=0;i<10;i++){
        tag=i;
        for(int j=i;j<10;j++){
            if(a[tag] > a[j]) tag = j;
        }
        int temp = a[i];
        a[i] = a[tag];
        a[tag] = temp;

        int z=0;
        char temp_c[8];
        for(;b[i][z] != '\0';z++)
            temp_c[z] = b[i][z];
        temp_c[z] = '\0';
        for(int x=0;b[tag][x] != '\0';x++)
            b[i][x] = b[tag][x];
        for(int x=0;temp_c[x] != '\0';x++)
            b[tag][x] = temp_c[x];
    }
}
void work_search(int a[],char b[][8],int c){
    int left=0,right=10,mid=(right+left)/2;

    while(left <= right){
        if(c == a[mid]){
            for(int i=0;b[mid][i] !='\0';i++)
                printf("%c",b[mid][i]);
            break;
        }
        if(c > a[mid]) {
            left = mid+1;
            mid = (left + right) / 2;
        }
        if(c < a[mid]) {
            right = mid-1;
            mid = (left + right) / 2;
        }
    }

    if(left > right)
        printf("no the data.\n");
}

void hex_change_dec(char a[]){
    int result=0;
    int peg=0;

    for(;a[peg] != '\0';peg++)
        printf("%c",a[peg]);
    printf("\n");

    for(int i=0;a[i]!='\0';i++){
        if(a[i] >= 'a' && a[i] <= 'f'){
            result = (a[i] - 'a' + 10) + result * 16;
        }
        if(a[i] >= 'A' && a[i] <= 'F'){
            result = (a[i] - 'A' + 10) + result * 16;
        }
        if(a[i] >= '0' && a[i] <= '9'){
            result = (a[i] - '0') + result * 16;
        }

    }

    printf("%d",result);
}
void int_change_string(int a){
    int temp= abs(a),x=0;
    if(a<0){
        putchar('-');
    }
    while(temp != 0) {
        temp /=10;
        x++;
    }
    for(int i=0;i<x;i++){
        int temp2 = abs(a);
        for(int j=i;j<x-1;j++)
            temp2 /= 10;
        // printf("%d: %d : %c\n",temp2,temp2%10,temp2%10+'0');
        putchar(temp2%10 + '0');
    }
}
void calc_day(int year,int month,int day){
    int month_arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int result=0;

    for(int i=0;i<month-1;i++)
        result += month_arr[i];

    result += day;

    if (year %4 == 0 && year%100 != 0 || year % 400 == 0) result++;

    printf("The day of the year is: %d\n",result);
}