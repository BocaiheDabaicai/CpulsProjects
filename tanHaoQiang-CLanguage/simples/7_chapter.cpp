#include <stdio.h>

void print_hello();
int compare_int(int a,int b);
int compare_int_four(int a,int b,int c,int d);
int student_year(int n);
int factorial(int n);
void hanoi(int n,char a,char b,char c);
void hanoi_move(char a,char b);
void sort_array(int array[],int n);
void delete_str_in_char(char str[],char del_char);

int main(){
    // 7.1
    print_hello();

    // 7.2
    printf("The result is %d\n",compare_int(3,4));

    // 7.3,7.4 略
    // 7.5
    printf("The result is %d\n",compare_int_four(3,4,7,8));

    // 7.6
    printf("The student year is %d\n",student_year(5));

    // 7.7
    printf("The factorial result is %d\n",factorial(5));

    // 7.8,great practice!
    hanoi(3,'A','B','C');

    // 7.9,7.10,7.11略
    // 7.12
    int a[10] = {2,3,4,1,8,6,9,0,7,5};
    sort_array(a,10);
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    // 7.13,7.14略

    // 7.15,优先使用局部变量，若无局部变量，再使用全局变量

    // 7.16,静态变量在程序整个运行期间不会被释放

    // 7.17,略

    // 7.18,外部变量定义后，该变量需要在后面进行定义
    // extern int outer_data;

    // 7.19,略

    // 7.20
    char str[] = {"This is a incredible miracle in this moment. I can't believe it that the animals can attack people."};
    delete_str_in_char(str,' ');
    printf("%s\n",str);

    return 0;
}

void print_hello(){
    printf("Hello World!\n");
}

int compare_int(int a,int b){
    return a > b ? a:b;
}
int compare_int_four(int a,int b,int c,int d){
    return compare_int(compare_int(compare_int(a,b),c),d);
}
int student_year(int n){
    if(n == 1) return 10;

    return student_year(n-1) + 2;
}
int factorial(int n){
    if(n == 0 || n == 1) return 1;

    return factorial(n-1) * n;
}
void hanoi(int n,char a,char b,char c){
    if(n == 1) hanoi_move(a,c);
    else{
        hanoi(n-1,a,c,b);
        hanoi_move(a,c);
        hanoi(n-1,b,a,c);
    }
}
void hanoi_move(char a,char b){
    printf("%c -> %c\n",a,b);
}
void sort_array(int array[],int n){
    for(int i=0;i<n;i++){
        int temp = array[i];
        for(int j=i+1;j<n;j++){
            if(temp > array[j]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}
void delete_str_in_char(char str[],char del_char){
    int start=0,end=0;
    while(str[start]!='\0'){
        if(str[start] != del_char){
            str[end++] = str[start];
        }
        start++;
    }
    str[end] = '\0';
}