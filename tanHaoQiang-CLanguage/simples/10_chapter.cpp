#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student_type{
    char name[10];
    int num;
    int age;
    char addr[10];
};

void save(Student_type student[]);

int main(){
    // 10.1
    /*FILE *fp;
    char ch,filename[100] = {"./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_1.txt"};

    if((fp= fopen(filename,"w")) == NULL){
        printf("can not open the file.");
        exit(0);
    }

    printf("input a string with the end of the char '#'.");
    ch = getchar();
    while(ch != '#'){
        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }

    fclose(fp);
    putchar('\n');*/

    // 10.2
    /*FILE *in,*out;
    char ch,
    infile[100]={"./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_1.txt"},
    outfile[100]={"./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_2.txt"};

    if((in= fopen(infile,"r")) == NULL){
        printf("can not open infile.");
        exit(0);
    }

    if((out= fopen(outfile,"w")) == NULL){
        printf("can not open outfile.");
        exit(0);
    }

    ch = fgetc(in);
    while(!feof(in)){
        fputc(ch,out);
        putchar(ch);
        ch= fgetc(in);
    }

    putchar('\n');
    fclose(in);
    fclose(out);*/

    // 10.3
    /*FILE *fp;
    char str[3][30],temp[30];

    printf("Enter three strings:\n");
    for(int i=0;i<3;i++) gets(str[i]);

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    if((fp= fopen("./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_3.txt","w")) == NULL){
        printf("can not open outfile.");
        exit(0);
    }

    printf("\nThe new sequence is:\n");
    for(int i=0;i<3;i++){
        fputs(str[i],fp);
        fputs("\n",fp);
        printf("%s\n",str[i]);
    }

    fclose(fp);*/

    // 10.4
    /*Student_type student[10]={
            {"dsww",1000,23,"POP"},
            {"frre",1001,15,"DQW"},
            {"dsww",1004,45,"DSF"},
            {"asdw",1021,12,"POP"},
            {"cdss",1040,15,"FGH"},
            {"csdq",1011,34,"YRT"},
            {"jyut",1066,34,"WEW"},
            {"mhjg",2001,39,"JTY"},
            {"gjre",1030,78,"HJK"},
            {"poiu",1003,45,"PIO"},
    };

    save(student);*/

    // 10.5
    /*FILE *fp1,*fp2;
    char ch;

    fp1 = fopen("./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_1.txt","r");
    fp2 = fopen("./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_5.txt","w");
    ch = getc(fp1);

    while(!feof(fp1)){
        putchar(ch);
        ch= getc(fp1);
    }

    putchar('\n');

    rewind(fp1);
    ch = getc(fp1);
    while(!feof(fp1)){
        fputc(ch,fp2);
        ch= fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);*/

    // 10.6
    FILE *fp;
    Student_type stu[10];

    if((fp= fopen("./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_4.txt","r")) == NULL){
        printf("can not open outfile.");
        exit(0);
    }

    for(int i=0;i<10;i+=2){
        fseek(fp,i*sizeof (struct Student_type),0);
        fread(&stu[i],sizeof (struct Student_type),1,fp);
        printf("%s %d %d %s\n",stu[i].name,stu[i].num,stu[i].age,stu[i].addr);
    }

    fclose(fp);

    return 0;
}

void save(Student_type student[]){
    FILE *fp;

    if((fp= fopen("./tanHaoQiang-CLanguage/simples/10_chapter_simples/simple_4.txt","w")) == NULL){
        printf("can not open simple_4.txt.");
        exit(0);
    }

    for(int i=0;i<10;i++){
        if(fwrite(&student[i],sizeof( struct Student_type),1,fp) != 1)
            printf("file write error!\n");
        printf("%s %d %d %s\n",student[i].name,student[i].num,student[i].age,student[i].addr);
    }

    fclose(fp);
}