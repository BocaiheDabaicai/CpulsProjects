//
// Created by NfryCreator on 2024/9/30.
//

#include <iostream>

struct LinkNode {
    char val;
    LinkNode *next;

    LinkNode() : val('\0'), next(nullptr) {};

    LinkNode(char val) : val(val), next(nullptr) {};

    LinkNode(char val, LinkNode *next) : val(val), next(next) {};
};

int getLength(LinkNode *head) {
    int i = 0;
    LinkNode *p = head;
    while (p) {
        p = p->next;
        i++;
    }
    return i;
}

LinkNode search(LinkNode *list1, LinkNode *list2) {
    LinkNode *p = list1;
    LinkNode *q = list2;
    int pLen = getLength(list1);
    int qLen = getLength(list2);
    int data;

    if (pLen >= qLen) {
        data = pLen - qLen;
        for (int i = 0; i < data; i++) p = p->next;
    } else {
        data = qLen - pLen;
        for (int i = 0; i < data; i++) q = q->next;
    }

    while (p) {
        if (p->val == q->val) return *p;
        p = p->next;
        q = q->next;
    }

    return -1;
}

int main() {
    LinkNode *list_7 = new LinkNode('g');
    LinkNode *list_6 = new LinkNode('n', list_7);
    LinkNode *list_5 = new LinkNode('i', list_6);
    LinkNode *list_4 = new LinkNode('d', list_5);
    LinkNode *list_3 = new LinkNode('a', list_4);
    LinkNode *list_2 = new LinkNode('o', list_3);
    LinkNode *list_1 = new LinkNode('l', list_2);
    LinkNode *list_head = new LinkNode('\0', list_1);

    LinkNode *list2_5 = new LinkNode('g', nullptr);
    LinkNode *list2_4 = new LinkNode('n', list2_5);
    LinkNode *list2_3 = new LinkNode('i', list2_4);
    LinkNode *list2_2 = new LinkNode('e', list2_3);
    LinkNode *list2_1 = new LinkNode('b', list2_2);
    LinkNode *list2_head = new LinkNode('\0', list2_1);

    LinkNode result = search(list_head, list2_head);
    std::cout << result.val << std::endl;
    return 1;
}