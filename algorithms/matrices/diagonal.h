#pragma once
class Diagonal 
{
    private:
        int size;
        int* A;
    public:
        Diagonal(int n);
        ~Diagonal();
        void set(int i, int j, int el);
        int get(int i, int j);
        void display();
};