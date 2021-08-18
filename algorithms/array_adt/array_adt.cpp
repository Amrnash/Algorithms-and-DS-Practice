#include <iostream>
#include "array_adt.h"
#include "utils.h"
Array_adt::Array_adt(int size) {
    A = new int[size];
    length = 0;
}
Array_adt::~Array_adt() {
    delete []A;
}
int Array_adt::get(int index) {
    if(index < length) {
        return A[index];
    }
    return -1;
}
void Array_adt::set(int index, int el) {
    if(index < length) {
        A[index] = el;   
    }
}
int Array_adt::get_length() {
    return length;
}
void Array_adt::display() {
    for(int i{0}; i < length; i++) {
      std::cout << A[i] << std::endl;
    }
}
void Array_adt::add(int el) {
  A[length] = el;
  length++;
}
void Array_adt::insert(int index, int el) {
  for(int i{length}; i > index; i--) {
    A[i] = A[i - 1];
  }
  A[index] = el;
  length++;
}
void Array_adt::delete_index(int index) {
  for(int i{index}; i < length - 1; i++) {
    A[i] = A[i + 1];
    length--;
  }
}
int Array_adt::linear_search(int el) {
    for(int i{0}; i < length; i++) {
        if(el == A[i]) return i;
    }
    return -1;
}
int Array_adt::binary_search(int el) {
    int low{0}, high{length - 1}, mid{0};
    while(low <= high) {
        mid = (low + high) / 2;
        if(A[mid] == el) return mid;
        if(el < A[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
int Array_adt::binary_search_recursive(int el) {
    static int low{0}, high{length - 1}, mid{0};
    if( low <= high) {  
        mid = (low + high) / 2;
        if(A[mid] == el) return mid;
        else if(el < A[mid]) {
            high = mid - 1;
           return binary_search_recursive(el);
        }
        else {
            low = mid + 1;
            return binary_search_recursive(el);
        }
    }
    return -1;
}
int Array_adt::max() {
    int max = A[0];
    for(int i{1}; i < length; i++) {
        if(A[i] > max) max = A[i];
    }
    return max;
}
int Array_adt::min() {
    int min = A[0];
    for(int i{1}; i < length; i++) {
        if(A[i] < min) min = A[i];
    }
    return min;
}
int Array_adt::sum() {
    int sum{0};
    for(int i{1}; i < length; i++) {
        sum += A[i];
    }
    return sum;
}
void Array_adt::reverse() {
    for(int i{0}, j{length - 1}; i < j; i++, j--) {
        swap(A[i], A[j]);
    }
}
bool Array_adt::isSorted(int* arr, int length) {
    for(int i{0}; i < length - 1; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }
    return true;
}
void Array_adt::seperate_positive_from_negative(int *arr, int length) {
    int i{0}, j{length - 1};
    while( i < j) {
        while(arr[i] < 0) {i++;}
        while(arr[j] > 0) {j--;}
        if( i < j ) 
        {
            swap(arr[i], arr[j]);
        }
    }
}
int* Array_adt::merge(int *arr_a, int *arr_b, int arr_a_length, int arr_b_length) {
    int i{0}, j{0}, k{0};
    static int* arr_c = new int[arr_a_length + arr_b_length];
    while( i < arr_a_length && j < arr_b_length) {
        if(arr_a[i] < arr_b[j]) {
            arr_c[k] = arr_a[i];
            k++;i++;
        }
        else {
            arr_c[k] = arr_b[j];
            k++;j++;
        }
    }
    while( i < arr_a_length) {
        arr_c[k] = arr_a[i];
        i++;k++;
    }
    while( j < arr_b_length) {
        arr_c[k] = arr_b[j];
        j++;k++;
    }
    return arr_c;
}