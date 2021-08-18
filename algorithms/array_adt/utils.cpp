#include <iostream>
void swap(int &x, int &y) {
    int tmp{0};
    tmp = x;
    x = y;
    y = tmp;
}
void display_array(int* arr, int length) {
    int i{0};
    while(i < length) {
        std::cout << arr[i] << ", ";
        i++;
    }
    std::cout<<std::endl;
}