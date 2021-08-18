#include "diagonal.h"
#include <iostream>
Diagonal::Diagonal(int n): size{n}
{
    A = new int[size];
}
Diagonal::~Diagonal() {
    delete[] A;
}
void Diagonal::set(int i, int j, int el) {
    if(i == j) {
        A[i] = el;
    }
}
int Diagonal::get(int i, int j) {
    if(i == j) return A[i];
    else return 0;
}
void Diagonal::display() {
    for(int i{0}; i < size; i++) {
        for(int j{0}; j < size; j++) {
            if( i == j) {
                std::cout << " " << A[i] << " ";
            } 
            else {
                std::cout << " 0 ";
            }
        }
        std::cout << std::endl;
    }
}