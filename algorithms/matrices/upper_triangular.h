#pragma once
class UpperTriangle 
{
    private:
        int size;
        int* A;
    public:
        UpperTriangle(int n);
        ~UpperTriangle();
        void set(int i, int j, int el);
        int get(int i, int j);
        void display();
};