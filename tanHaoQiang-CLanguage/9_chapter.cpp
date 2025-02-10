#include <stdio.h>

struct Date{
    int year;
    int month;
    int day;
};
struct Student{
    int num;
    char name[10];
    int score[3];
};
struct LinkNode{
    int data;
    LinkNode *next;
};

int get_day(Date a);
void print_self(Student stu[5]);
void print_average_and_best_self(Student stu[5]);

LinkNode *insert_LinkNode(LinkNode *head,LinkNode *data);
LinkNode *delete_LinkNode(LinkNode *head,int n);
LinkNode create_LinkNode(int data);
void print_LinkNode(LinkNode *head);

int main(){
    // 第一题
    /*Date a  = {2019,6,21};
    printf("The result day is: %d\n",30*(a.month-1)+a.day);*/

    // 第二题
    /*Date a  = {2019,6,21};
    printf("The result day is: %d\n", get_day(a));*/

    // 第三题、第五题
    /*Student stu[5] = {
            {1,"sdq",{67,88,65}},
            {2,"tty",{87,98,55}},
            {3,"ggt",{61,72,75}},
            {4,"hhy",{43,21,49}},
            {5,"fsd",{17,68,69}},
    };
    print_self(stu);
    print_average_and_best_self(stu);*/

    // 第六题
    /*LinkNode head = {0, nullptr};
    LinkNode p1 = {1, nullptr};
    LinkNode p2 = {2, nullptr};
    LinkNode p3 = {3, nullptr};
    LinkNode p4 = {4, nullptr};
    LinkNode p5 = {5, nullptr};
    LinkNode *p,*pre;

    head.next = &p1;
    p1.next = &p2;
    p2.next = &p3;
    p3.next = &p4;
    p4.next = &p5;
    pre = &p2;

    while(pre->next->next){
        p = pre->next;
        printf("%d ",p->data);
        pre->next = p->next;
    }

    printf("\nThe final data is: %d\n",pre->next->data);*/

    // 第七题、第八题、第九题
    /*LinkNode head = {0, nullptr};
    LinkNode p1 = {1, nullptr};
    LinkNode p2 = {2, nullptr};
    LinkNode p3 = {3, nullptr};

    head.next = &p1;
    p1.next = &p2;
    print_LinkNode(&head);

    insert_LinkNode(&head,&p3);
    print_LinkNode(&head);

    delete_LinkNode(&head,1);
    print_LinkNode(&head);

    LinkNode p4 = create_LinkNode(4);
    insert_LinkNode(&head,&p4);
    print_LinkNode(&head);*/

    // 第十题、第十一题
    LinkNode head1 = {0, nullptr};
    LinkNode head2 = {0, nullptr};
    LinkNode p1 = create_LinkNode(1);
    LinkNode p2 = create_LinkNode(2);
    LinkNode p3 = create_LinkNode(3);
    LinkNode p4 = create_LinkNode(4);
    LinkNode p5 = create_LinkNode(5);
    LinkNode p6 = create_LinkNode(6);

    insert_LinkNode(&head1,&p1);
    insert_LinkNode(&head1,&p3);
    insert_LinkNode(&head1,&p5);

    insert_LinkNode(&head2,&p2);
    insert_LinkNode(&head2,&p4);
    insert_LinkNode(&head2,&p6);

    print_LinkNode(&head1);
    print_LinkNode(&head2);

    LinkNode *p_left,*p_right;
    p_left = &head1;
    p_right = &head2;

    while(p_left->next != nullptr) p_left = p_left->next;
    p_left->next = p_right->next;

    print_LinkNode(&head1);

    return 1;
}

int get_day(Date a){
    int month_array[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;

    for(int i=0;i<a.month-1;i++)
        sum += month_array[i];

    if(a.year % 4 == 0) sum++;

    return sum+a.day;
}
void print_self(Student stu[5]){
    for(int i=0;i<5;i++) {
        printf("No %d student name: %s, scores are: ", stu[i].num, stu[i].name);
        for(int j=0;j<3;j++)
            printf("%d ",stu[i].score[j]);
        printf("\n");
    }

}
void print_average_and_best_self(Student stu[5]){
    int temp = 0;
    int count = 0;

    for(int i=0;i<5;i++) {
        int sum = 0;
        for(int j=0;j<3;j++)
            sum += stu[i].score[j];
        printf("No %d student name: %s, average is: %.2f\n", stu[i].num, stu[i].name,sum/3.0);
        if(temp < sum) {
            temp = sum;
            count = i;
        }
    }

    printf("The best student is No %d student named: %s, scores are: %d %d %d\n", stu[count].num, stu[count].name,stu[count].score[0],stu[count].score[1],stu[count].score[2]);
}

LinkNode *insert_LinkNode(LinkNode *head,LinkNode *data){
    LinkNode *pre;
    pre = head;

    while(pre->next != nullptr)
        pre = pre->next;

    pre->next = data;

    return head;
}
LinkNode *delete_LinkNode(LinkNode *head,int n){
    LinkNode *pre,*next,*del;
    int i=0;
    pre = head;

    while(pre->next != nullptr && i<n-1) {
        pre = pre->next;
        i++;
    }

    del = pre->next;
    next = del->next;

    pre->next = next;
    return del;

}
LinkNode create_LinkNode(int data){
    LinkNode temp = {data, nullptr};

    return temp;
}
void print_LinkNode(LinkNode *head){
    LinkNode *p = head->next;

    while(p != nullptr) {
        printf("%d ", p->data);
        p=p->next;
    }

    printf("\n");
}