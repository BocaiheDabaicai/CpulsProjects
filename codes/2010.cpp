//
// Created by NfryCreator on 2024/9/25.
//

/*
 *  经此一役，终所了解，c++不好轻易获取数组长度，且不轻易能计算出数组长度，down。
 * */

/*#include <iostream>


void printArray(int R[],int length){
    for(int i=0;i<length;i++) std::cout << R[i] << ',';
    std::cout << std::endl;
}
void Reverse(int R[],int length, int p) {
    int a[length];
    int i = 0;
    for (int j = p; j < length; i++, j++) { // j 指向左移的第一个位置p,并完成将左移第一个位置之后的所有元素依次放入a数组
        a[i] = R[j];
    }
    for (int q = 0; i < length; i++,q++) a[i] = R[q];   // 将R数组的0~p-1个位置的元素依次插入a数组的剩余位置
    for(int z = 0;z<length;z++) R[z] = a[z];    // 将结果给予数组R
    printArray(R,length);
}


int main_2() {
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    Reverse(b,10,5);
    return 1;
}*/


