//
// Created by NfryCreator on 2024/9/24.
//

/*
 *  （1）答：
 *  通过使用链表，判断结点位置是否存在，如果存在那么输出结点的值并返回1，否则就返回0.
 *  更正：
 *  算法的基本设计思想如下：
 *  1. 定义一个获取链表长度的函数，遍历一次链表，返回该链表的长度
 *  2. 定义一个指针变量p，通过一次for循环，使指针指向对应的结点
 *  3. 通过使用 链表长度 - 结点倒数位置 + 1 得到指针p需要遍历的结点位置
 *  4. 判断该结点是否存在，若存在则打印该结点值返回1，若不存在则返回0。
 *  （2）答：
 *  1. 实现getLength(ListNode *head)函数，传入链表头结点，获取链表长度
 *  2. 定义指针p，ListNode *p = head
 *  3. 使用for(int i=1;i<length-n+1;i++)，使指针p到达对应的结点位置
 *  4. 使用if(p)判断指针p所指向的结点是否存在
 * */

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {};

    ListNode(int x) : val(x), next(nullptr) {};

    ListNode(int x, ListNode *next) : val(x), next(next) {};
};

class Solution {
public:
    int getLength(ListNode *head) {
        ListNode *temp = head;
        int count = 0;
        while (temp) {
            count++;
            temp = temp->next;
        }

        return count;
    }

    int NodeGet(ListNode *head, int n) {
        int length = getLength(head);
        ListNode *p = head;
        for (int i = 1; i < length - n + 1; i++) {
            if (p->next == nullptr) return 0;
            else p = p->next;
        }
        std::cout << p->val << std::endl;
        return 1;
    }
};

int main() {
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2, a);
    ListNode *b1 = new ListNode(3, b);
    ListNode *b2 = new ListNode(4, b1);
    ListNode *b3 = new ListNode(5, b2);
    ListNode *head = new ListNode(0, b3);

    Solution *c = new Solution();
    int d = c->NodeGet(head, 8);

    std::cout << d << std::endl;
}