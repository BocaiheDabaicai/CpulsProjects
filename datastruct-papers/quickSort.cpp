//
// Created by wjuuiw on 2024/10/1.
//

/*
 * 快速排序的实现代码
 * */

#include <iostream>

/*
int sort(int A[], int L, int R) {
    int mid = A[L];
    while (L < R) {
        while (A[R] >= mid && L < R) R--;
        A[L] = A[R];
        while (A[L] <= mid && L < R) L++;
        A[R] = A[L];
    }
    A[L] = mid;
    return L;
}

void quickSort(int A[], int L, int R) {
    if (L >= R) return;
    int mid = sort(A, L, R);
    sort(A, L, mid - 1);
    sort(A, mid + 1, R);
}*/
