//
// Created by NfryCreator on 2024/9/24.
//

/*
 *  （1）答：
 *  通过使用链表，判断结点位置是否存在，如果存在那么输出结点的值并返回1，否则就返回0.
 *  （2）答：
 *  1. 获取该链表的长度（包含头结点）
 *  2. 用 链表长度 - 结点倒数位值 + 1 得到正序位值
 *  3. 使用for循环遍历，寻找该结点，如果该结点不存在，则返回0；如果存在，输出该结点的值，并返回1.
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