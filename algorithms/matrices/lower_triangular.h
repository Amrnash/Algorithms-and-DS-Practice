#pragma once
class LowerTriangle 
{
    private:
        int size;
        int* A;
    public:
        LowerTriangle(int n);
        ~LowerTriangle();
        void set(int i, int j, int el);
        int get(int i, int j);
        void display();
};