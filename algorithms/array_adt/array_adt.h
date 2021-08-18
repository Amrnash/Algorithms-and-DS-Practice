class Array_adt
{
private:
    int* A;
    int size;
    int length;
public:
    Array_adt(int size = 0);
    ~Array_adt();
    static bool isSorted(int* arr, int length);
    static void seperate_positive_from_negative(int* arr, int length);
    static int* merge(int* arr_a, int* arr_b, int arr_a_length, int arr_b_length);
    int get_length();
    void display();
    void add(int el);
    int get(int index);
    void set(int index, int el);
    void insert(int index, int el);
    void delete_index(int index);
    int linear_search(int el);
    int binary_search(int el);
    int binary_search_recursive(int el);
    int max();
    int min();
    int sum();
    void reverse();
};
