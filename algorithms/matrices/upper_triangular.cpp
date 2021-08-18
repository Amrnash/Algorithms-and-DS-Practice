#include "upper_triangular.h"
#include <iostream>
UpperTriangle::UpperTriangle(int n): size{n}
{
    A = new int[size * ( size + 1) / 2];
}
UpperTriangle::~UpperTriangle() {
    delete[] A;
}
void UpperTriangle::set(int i, int j, int el) {
    if(j >= i) {
        int index = (((i - 1) * size) - (i - 1) * (i - 2) / 2) + j - i;
        A[index] = el;
    }
}
int UpperTriangle::get(int i, int j) {
    if(j >= i) return A[(((i - 1) * size) - (i - 1) * (i - 2) / 2) + j - i];
    else return 0;
}
void UpperTriangle::display() {
    for(int i{1}; i <= size; i++) {
        for(int j{1}; j <= size; j++) {
            if( j >= i) {
                std::cout << " " << A[(((i - 1) * size) - (i - 1) * (i - 2) / 2) + j - i] << " ";
            } 
            else {
                std::cout << " 0 ";
            }
        }
        std::cout << std::endl;
    }
}