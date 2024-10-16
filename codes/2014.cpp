//
// Created by wjuuiw on 2024/10/5.
//

#include <iostream>

struct NodeTree {
    int weight;
    NodeTree *left, *right;
};

int getDataDetail(NodeTree *node, int deep) {
    static int total = 0;

    if (!node->left && !node->right)
        total += node->weight * deep;
    else if (node->left)
        getDataDetail(node->left, deep + 1);
    else if (node->right)
        getDataDetail(node->right, deep + 1);

    return total;
};

int getData(NodeTree *root) {
    return getDataDetail(root, 0);
};