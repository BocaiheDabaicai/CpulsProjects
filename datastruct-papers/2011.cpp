//
// Created by NfryCreator on 2024/9/27.
//

#include <iostream>
#include <cmath>

int getData(int A[], int n, int B[], int m) {
    int p = 0, q = 0;
    int len = ceil((n + m) / 2);
    int record;

    for (int i = 0; i < len; i++) {
        if (A[p] >= B[q]) {
            record = B[q];
            q++;
        } else {
            record = A[p];
            p++;
        }
    }

    return record;
}

int main() {
    int A[5] = {11, 13, 15, 17, 19};
    int B[5] = {2, 4, 6, 8, 20};
    int result = getData(A, 5, B, 5);
    std::cout << result << std::endl;
    return 1;
}