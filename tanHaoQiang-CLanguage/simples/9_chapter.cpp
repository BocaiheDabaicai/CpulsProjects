#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student_score_node)

struct Student{
    int num;
    char name[10];
    char sex;
    char address[20];
};

struct Student_score{
    int num;
    char name[10];
    float score;
};

struct Person{
    char name[20];
    int count;
};

struct Student_score_whole{
    int num;
    char name[10];
    char sex;
    float score;
};

struct Student_score_average{
    int num;
    char name[10];
    float score[3];
    float average;
};

struct Student_score_node{
    int num;
    float score;
    struct Student_score_node *next;
};

struct Student_and_teacher{
    int num;
    char name[10];
    char sex;
    char job;
    union is_class{
        int class_room;
        char position[10];
    }category;
};

void input_Student_score_average(Student_score_average stu[]);
struct Student_score_average max_Student_score_average(Student_score_average stu[]);
void print_Student_score_average(Student_score_average stu);
struct Student_score_node *creat();
void print_Student_score_node(Student_score_node *p_node1);

int main(){
    // 9.1
    Student a = {2001,"Bruce",'M',"Los Angles"};
    printf("%d %s %c %s\n",a.num,a.name,a.sex,a.address);

    // 9.2
    Student_score stu1 = {1000,"Bikjs",89.1};
    Student_score stu2 = {1001,"Aldqwa",93.2};

    if(stu1.score > stu2.score)
        printf("%d %s %.2f\n",stu1.num,stu1.name,stu1.score);
    else if(stu1.score < stu2.score)
        printf("%d %s %.2f\n",stu2.num,stu2.name,stu2.score);
    else{
        printf("%d %s %.2f\n",stu1.num,stu1.name,stu1.score);
        printf("%d %s %.2f\n",stu2.num,stu2.name,stu2.score);
    }

    // 9.3
    Person a1 = {"bdf",0};
    Person a2 = {"fvdf",0};
    Person a3 = {"ertt",0};

    for(int i=0;i<2000;i++){
        if(i%3 == 0) a1.count++;
        if(i%6 == 0) a2.count++;
        if(i%2 == 0) a3.count++;
    }

    printf("The final result is, a1: %d a2: %d a3: %d\n",a1.count,a2.count,a3.count);

    // 9.4
    Student_score student1[5] = {
            {1000,"das",87.2},
            {1001,"ert",57.2},
            {1002,"vbq",61.1},
            {1003,"nng",72.3},
            {1004,"asg",38},
    };

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(student1[i].score < student1[j].score){
                Student_score temp = student1[i];
                student1[i] = student1[j];
                student1[j] = temp;
            }
        }
    }

    for(int i=0;i<5;i++)
        printf("%d %s %.2f\n",student1[i].num,student1[i].name,student1[i].score);

    // 9.5,9.6
    Student_score_whole student2 = {2000,"ppo",'W',78.2};
    Student_score_whole *p = &student2;

    printf("The info is: %d %s %c %.2f\n",(*p).num,(*p).name,(*p).sex,(*p).score);
    printf("The info is: %d %s %c %.2f\n",p->num,p->name,p->sex,p->score);
    printf("\n");

    Student_score_whole student3[3] = {
            {2001,"fdq",'w',88.3},
            {2002,"xxc",'m',98.3},
            {2003,"ggh",'w',78.3},
    };
    Student_score_whole *p1 = student3;

    for(;p1<student3+3;p1++)
        printf("The info is: %d %s %c %.2f\n",p1->num,p1->name,p1->sex,p1->score);

    // 9.7
    Student_score_average student4[3] = {};
    // input_Student_score_average(student4);
    // print_Student_score_average(max_Student_score_average(student4));
    printf("\n");

    // 9.8
    Student_score_node head = {0,0.0,NULL};
    Student_score_node node1 = {1000,78.0,NULL};
    Student_score_node node2 = {1001,81.2,NULL};
    Student_score_node node3 = {1002,83.1,NULL};
    head.next = &node1;
    node1.next = &node2;
    node2.next = &node3;

    Student_score_node *p_node = head.next;

    while(p_node != NULL){
        printf("%d %.2f\n",p_node->num,p_node->score);
        p_node = p_node->next;
    }
    printf("\n");

    // 9.9,9.10
    // Student_score_node *p_node1 = creat();

    /*while(p_node1->num != 0){
        printf("%d %.2f\n",p_node1->num,p_node1->score);
        p_node1 = p_node1->next;
    }*/

    // print_Student_score_node(p_node1);

    // 9.11
    /*Student_and_teacher person[2];

    for(int i=0;i<2;i++){
        scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);
        if(person[i].job == 's') scanf("%d",&person[i].category.class_room);
        else if(person[i].job == 't') scanf("%s",person[i].category.position);
        else printf("There have not the job.");
    }

    for(int i=0;i<2;i++){
        if(person[i].job == 's')
            printf("%d %s %c %c %d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.class_room);
        else
            printf("%d %s %c %c %s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
    }*/

    // 9.12
    enum Color{red,yellow,blue,white,black};
    enum Color i,j,k, pri;
    int n=0,loop;
    for( i = red;i <= black;i = (enum Color)(i + 1)){
        for(j=red;j<=black;j = (enum Color)(j + 1)){
            if(i!=j){
                for(k=red;k<=black;k = (enum Color)(k + 1))
                    if((k!=i) && (k!=j)){
                        n++;
                        printf("%-4d",n);
                        for(loop=1;loop<=3;loop++){
                            switch (loop) {
                                case 1:pri = i;break;
                                case 2:pri = j;break;
                                case 3:pri = k;break;
                                default:break;
                            }
                            switch(pri){
                                case red:printf("%-10s","red");break;
                                case yellow:printf("%-10s","yellow");break;
                                case blue:printf("%-10s","blue");break;
                                case white:printf("%-10s","white");break;
                                case black:printf("%-10s","black");break;
                                default:break;
                            }
                        }
                    }
                printf("\n");
            }
        }
    }
    printf("\ntotal is: %5d\n",n);

    return 0;
}

void input_Student_score_average(Student_score_average stu[]){
    for(int i=0;i<3;i++) {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].average = (stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;
    }
}
struct Student_score_average max_Student_score_average(Student_score_average stu[]){
    Student_score_average temp = stu[0];
    for(int i=0;i<3;i++)
        if(temp.average < stu[i].average) temp = stu[i];

    return temp;
}
void print_Student_score_average(Student_score_average stu){
    printf("The information is: %d %s ",stu.num,stu.name);
    for(int i=0;i<3;i++)
        printf("%.2f ",stu.score[i]);
    printf("%.2f\n",stu.average);
}
struct Student_score_node *creat(){
    struct Student_score_node head = {0,0.0,NULL};
    struct Student_score_node *p1_node,*p2_node;
    p1_node =  (struct Student_score_node *)malloc(LEN);
    scanf("%d %f",&p1_node->num,&p1_node->score);
    head.next = p1_node;

    while(p1_node->num != 0){
        p2_node = (struct Student_score_node *)malloc(LEN);
        scanf("%d %f",&p2_node->num,&p2_node->score);
        p1_node->next = p2_node;
        p1_node = p2_node;
    }

    p1_node->next = NULL;

    return head.next;
}
void print_Student_score_node(Student_score_node *p_node1){
    while(p_node1->num != 0){
        printf("%d %.2f\n",p_node1->num,p_node1->score);
        p_node1 = p_node1->next;
    }
}