#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
    int num;
    char name[10];
    float scores[3];
    float average;
};

int main(){
    // 第三题
    /*FILE *fp;
    char str[100];
    int i=0;

    if((fp= fopen("tanHaoQiang-CLanguage/10_chapter/b.txt","w"))==nullptr){
        printf("can not open the file.\n");
        exit(0);
    }

    printf("input a string:\n");
    gets(str);
    while(str[i]!='!'){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        fputc(str[i],fp);
        i++;
    }

    fclose(fp);

    fp= fopen("a1","r");
    fgets(str, strlen(str)+1,fp);

    printf("%s\n",str);
    fclose(fp);*/

    // 第四题
    /*FILE *fp;
    char str[100],result[500];
    int i=0;

    fp = fopen("tanHaoQiang-CLanguage/10_chapter/a.txt","r");
    fgets(str, 200,fp);
    printf("%s\n",str);
    for(;str[i]!='\0';i++)
        result[i] = str[i];

    fclose(fp);

    fp = fopen("tanHaoQiang-CLanguage/10_chapter/b.txt","r");
    fgets(str, 200,fp);
    printf("%s\n",str);
    for(int j=0;str[j]!='\0';i++,j++)
        result[i] = str[j];
    result[i] = '\0';
    fclose(fp);


    printf("%s\n",result);
    for(int x=0;result[x]!='\0';x++) {
        char temp = result[x];
        int temp_count = 0;
        for(int y=x;result[y]!='\0';y++){
            if(temp > result[y]) {
                temp = result[y];
                temp_count = y;
            }
        }
        if(temp != result[x]) {
            result[temp_count] = result[x];
            result[x] = temp;
            // printf("%s:%c\n", result, temp);
        }
    }
    printf("%s\n",result);*/

    // 第五题、第六题、第七题、第八题
    /*Student stu[5] = {
            {0,"sdq",{67.5, 65.7, 44}},
            {1,"hhy",{67.5, 82.7, 66}},
            {2,"wwz",{69, 66.2, 72}},
            {3,"bbm",{71, 69.7, 65}},
            {4,"oop",{76.5, 68.7, 62}},
    };
    FILE *fp;

    fp = fopen("tanHaoQiang-CLanguage/10_chapter/stu.txt","w");
    for(int i=0;i<5;i++) {
        float sum = 0;
        sum += stu[i].scores[0] + stu[i].scores[1] + stu[i].scores[2];
        stu[i].average = sum/3;
        fwrite(&stu[i], sizeof(Student), 1, fp);
    }
    fclose(fp);

    fp = fopen("tanHaoQiang-CLanguage/10_chapter/stu.txt","r");
    for(int i=0;i<5;i++){
        fread(&stu[i],sizeof(Student),1,fp);
        printf("%d %s %.2f %.2f %.2f: %.2f\n",stu[i].num,stu[i].name,stu[i].scores[0],stu[i].scores[1],stu[i].scores[2],stu[i].average);
    }
    fclose(fp);

    Student stu_sort[5];
    fp = fopen("tanHaoQiang-CLanguage/10_chapter/stu.txt","r");
    for(int i=0;i<5;i++){
        fread(&stu[i],sizeof(Student),1,fp);
        stu_sort[i] = stu[i];
    }
    fclose(fp);

    for(int i=0;i<5;i++){
        Student temp = stu_sort[i];
        int temp_count = i;
        for(int j=i;j<5;j++){
            if(stu_sort[j].average < temp.average){
                temp = stu_sort[j];
                temp_count = j;
            }
        }
        if(strcmp(temp.name,stu_sort[i].name) != 0){
            temp = stu_sort[temp_count];
            stu_sort[temp_count] = stu_sort[i];
            stu_sort[i] = temp;
        }
    }

    printf("\n");
    for(int i=0;i<5;i++)
        printf("%d %s %.2f %.2f %.2f: %.2f\n",stu_sort[i].num,stu_sort[i].name,stu_sort[i].scores[0],stu_sort[i].scores[1],stu_sort[i].scores[2],stu_sort[i].average);

    fp = fopen("tanHaoQiang-CLanguage/10_chapter/stu_sort.txt","w");
    for(int i=0;i<5;i++) {
        fwrite(&stu_sort[i], sizeof(Student), 1, fp);
    }
    fclose(fp);


    Student stu_insert = {5,"iuu",{76.4,33.2,88.9}};
    Student stu_sort_ori[6];
    fp = fopen("tanHaoQiang-CLanguage/10_chapter/stu_sort.txt","r");
    for(int i=0;i<5;i++){
        fread(&stu_sort_ori[i],sizeof(Student),1,fp);
    }
    fclose(fp);

    printf("\n");
    for(int i=0;i<5;i++)
        printf("%d %s %.2f %.2f %.2f: %.2f\n",stu_sort_ori[i].num,stu_sort_ori[i].name,stu_sort_ori[i].scores[0],stu_sort_ori[i].scores[1],stu_sort_ori[i].scores[2],stu_sort_ori[i].average);

    stu_insert.average = (stu_insert.scores[0] + stu_insert.scores[1] + stu_insert.scores[2])/3;
    int position = 0;
    for(int i=0;i<5;i++)
        if(stu_insert.average < stu_sort_ori[i].average) {
            position = i;
            break;
        }
    for(int i=4;i>=position;i--){
        // printf("----%s\n",stu_insert.name);
        stu_sort_ori[i+1] = stu_sort_ori[i];
    }

    stu_sort_ori[position] = stu_insert;

    printf("\n");
    for(int i=0;i<6;i++)
        printf("%d %s %.2f %.2f %.2f: %.2f\n",stu_sort_ori[i].num,stu_sort_ori[i].name,stu_sort_ori[i].scores[0],stu_sort_ori[i].scores[1],stu_sort_ori[i].scores[2],stu_sort_ori[i].average);


    fp = fopen("tanHaoQiang-CLanguage/10_chapter/stu_sort_insert.txt","w");
    for(int i=0;i<6;i++) {
        fwrite(&stu_sort_ori[i], sizeof(Student), 1, fp);
    }
    fclose(fp);

    *//*fp = fopen("tanHaoQiang-CLanguage/10_chapter/stu_sort.txt","w");
    for(int i=0;i<6;i++) {
        fwrite(&stu_sort_ori[i], sizeof(Student), 1, fp);
    }
    fclose(fp);*/

    

    return 1;
}