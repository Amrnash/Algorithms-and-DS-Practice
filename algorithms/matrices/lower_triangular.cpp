#include "lower_triangular.h"
#include <iostream>
LowerTriangle::LowerTriangle(int n): size{n}
{
    A = new int[size * ( size + 1) / 2];
}
LowerTriangle::~LowerTriangle() {
    delete[] A;
}
void LowerTriangle::set(int i, int j, int el) {
    if(i >= j) {
        A[(i * ( i - 1) / 2) + j - 1] = el;
    }
}
int LowerTriangle::get(int i, int j) {
    if(i >= j) return A[(i * ( i - 1) / 2) + j - 1];
    else return 0;
}
void LowerTriangle::display() {
    for(int i{1}; i <= size; i++) {
        for(int j{1}; j <= size; j++) {
            if( i >= j) {
                std::cout << " " << A[(i * ( i - 1) / 2) + j - 1] << " ";
            } 
            else {
                std::cout << " 0 ";
            }
        }
        std::cout << std::endl;
    }
}