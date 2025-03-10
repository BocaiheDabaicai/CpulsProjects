#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N M+M

void Split(unsigned short a, unsigned short *p0dd, unsigned short *pEven);

void result();

void result_1();

int quick_select(int *nums, int l, int r);

void quick_sort(int *nums, int l, int r);

void result_3(int arr[], int n, int length);

int eight_queen_check(int row, int col);

void eight_queen_print();

void eight_queen_search(int row);

int quick_version_2(int *nums, int l, int r, int k) {
    if (l == r) return nums[k];
    int partition = nums[l], i = l - 1, j = r + 1;

    while (i < j) {
        do i++; while (nums[i] < partition);
        do j--; while (nums[j] > partition);
        if (i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }

    if (k <= j) return quick_version_2(nums, l, j, k);
    else return quick_version_2(nums, j + 1, r, k);
}

int chess[8][8] = {0};
int sum = 0;

int main() {
    /*unsigned short odd, even;

    Split(1234, &odd, &even);
    printf("%d %d\n", odd, even);

    result();

    result_1();

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    result_3(arr, 4, 10);*/

    eight_queen_search(0);
    printf("Total is: %d\n",sum);

    return 0;
}

void Split(unsigned short a, unsigned short *p0dd, unsigned short *pEven) {
    char string[200], odd[100], even[100];
    int odd_count = 0, even_count = 0;

    itoa(a, string, 10);
    // printf("%s\n",string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (i % 2 == 0) {
            odd[odd_count] = string[i];
            odd_count++;
        } else {
            even[even_count] = string[i];
            even_count++;
        }
    }

    odd[odd_count + 1] = '\0';
    even[even_count + 1] = '\0';

    *p0dd = atoi(odd);
    *pEven = atoi(even);
}

void result() {
    char x, y, z;

    for (x = 'a'; x <= 'c'; x++)
        for (y = 'a'; y <= 'c'; y++)
            for (z = 'a'; z <= 'c'; z++)
                if (x != y && x != z && y != z && x != 'a' && x != 'c' && z != 'c') {
                    printf("x -> %c\n", x);
                    printf("y -> %c\n", y);
                    printf("z -> %c\n", z);
                }
}

void result_1() {
    int a[10][10];

    a[0][0] = 1;
    a[1][0] = a[1][1] = 1;

    for (int i = 2; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (j == 0 || j == i - 1) a[i][j] = 1;
            else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

}

int eight_queen_check(int row, int col) {

    for (int i = 0; i < 8; i++)if (chess[i][col] == 1) return 0;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) if (chess[i][j] == 1) return 0;
    for (int i = row, j = col; i >= 0 && j < 8; i--, j++) if (chess[i][j] == 1) return 0;

    return 1;
}

void eight_queen_print() {
    printf("The %d method of eight queen\n", sum + 1);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (chess[i][j] == 1) printf("Q ");
            else printf("# ");
        }
        printf("\n");
    }
    printf("\n");
}

void eight_queen_search(int row) {
    if (row == 8) {
        eight_queen_print();
        sum++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (eight_queen_check(row, col)) {
            chess[row][col] = 1;
            eight_queen_search(row + 1);
            chess[row][col] = 0;
        }
    }
}

/*int quick_select(int *nums,int l,int r){
    int mid = nums[l];

    while(l<r){
        while(mid <= nums[r] && l < r) r--;
        nums[l] = nums[r];
        while(mid >= nums[l] && l < r) l++;
        nums[r] = nums[l];
    }
    nums[l] = mid;
    return l;
}
void quick_sort(int *nums,int l,int r){
    if(l>=r) return;

    int mid = quick_select(nums,l,r);
    quick_select(nums,l,mid-1);
    quick_select(nums,mid+1,r);
}*/

void result_3(int arr[], int n, int length) {
    for (int i = 0; i < n; i++) {  // 排前n个数，使前n个最大数在数组最前面
        int temp = arr[i];
        for (int j = i + 1; j < length; j++) {
            if (temp < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}

int main_1() {
    int k = N * N * 5; // M+M * M+M * 5 = 5 + 5 * 5 + 5 * 5
    printf("%d\n", k);

    int a = 6, b = 8;
    while (a--);
    while (--b);
    printf("%d %d\n", a, b);

    while (0)
        printf("asdas\n");

    return 0;
}
