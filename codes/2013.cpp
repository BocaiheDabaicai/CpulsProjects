//
// Created by wjuuiw on 2024/10/2.
//

#include <iostream>

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

void QuickSort(int A[], int L, int R) {
    if (L >= R) return;
    int mid = sort(A, L, R);
    sort(A, L, mid - 1);
    sort(A, mid + 1, R);
}

void printArray(int R[], int length) {
    for (int i = 0; i < length; i++) std::cout << R[i] << ',';
    std::cout << std::endl;
}

int result(int A[], int L, int R) {
    printArray(A, 8);
    QuickSort(A, L, R);
    printArray(A, 8);

    int mid = (R - L) / 2;
    int data = A[mid];
    int count = 1;
    for (int l = mid - 1; l > 0; l--)
        if (data == A[l]) count++;
    for (int r = mid + 1; r < R; r++)
        if (data == A[r]) count++;

    return count > mid ? data : -1;
}

int main_5() {
    int a[] = {0, 5, 5, 3, 5, 5, 7, 5};
    int resultData = result(a, 0, 7);
    std::cout << resultData << std::endl;

    int b[] = {0, 2, 5, 3, 5, 5, 7, 3};
    int resultData1 = result(b, 0, 7);
    std::cout << resultData1 << std::endl;
    return 1;
}
