#include <stdio.h>
#include <string.h>

int main(){
    // 6.1
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    for(int i=9;i>=0;i--)
        printf("%d ",array[i]);
    printf("\n");


    // 6.2
    int f_array[20] = {1,1};
    for(int i=2;i<20;i++)
        f_array[i] = f_array[i-1] + f_array[i-2];

    for(int i=0;i<20;i++)
        printf("%d ",f_array[i]);
    printf("\n");

    // 6.3
    float area_array[] = {23.3,11.3,15.6,17.2,13.9,10.8,12.5,13.9,56.4,55.3};
    float temp;

    for(int i=0;i<10;i++){
        temp=area_array[i];
        for(int j=i;j<10;j++){
            if(temp > area_array[j]){
                temp = area_array[j];
                area_array[j] = area_array[i];
                area_array[i] = temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        printf("%.2f ",area_array[i]);
    }
    printf("\n");

    // 6.4
    int twoD_array[2][3] = {{1,2,3},{4,5,6}};
    int twoD_array_reverse[3][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            twoD_array_reverse[j][i] = twoD_array[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",twoD_array[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",twoD_array_reverse[i][j]);
        }
        printf("\n");
    }

    // 6.5
    int seek_max_array[3][4] = {
            {2,3,6,7},
            {8,-2,-1,9},
            {4,3,-7,11},
    };
    int max[3] = {seek_max_array[0][0],0,0};

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(max[0] < seek_max_array[i][j]){
                max[0] = seek_max_array[i][j];
                max[1] = i;
                max[2] = j;
            }
        }
    }

    printf("The max data is:%d (%d,%d)\n",max[0],max[1],max[2]);

    // 6.6,6.7 略
    // 6.8
    char word_string[120] = {"asd hjd wqhuuu copio cnm"};
    int num=0,word=0;
    char str;
    // gets(word_string);
    for(int i=0;(str=word_string[i]) != '\0';i++){
        if(str == ' ') word=0;
        else if(word == 0){
            word=1;
            num++;
        }
    }

    printf("The word numbers are: %d\n",num);

    // 6.9
    char string1[50] = {"hdj kkds nnvj"};
    char string2[50] = {"vvf zzxe poyp"};
    char string3[50] = {"vvvvvv ccxzzxs xcasdas ccds"};
    char string_max[50];

    if(strcmp(string1,string2) > 0)
        strcpy(string_max,string1);
    else
        strcpy(string_max,string2);
    if(strcmp(string_max,string3) < 0) strcpy(string_max,string3);

    printf("The max string is: %s\n",string_max);


    return 0;
}