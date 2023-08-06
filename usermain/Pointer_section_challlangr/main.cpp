#include <iostream>
using namespace std;

void print(const int *const arr , size_t s){
    cout<<"[ ";
    for (size_t i{0} ; i< s ; ++i)
        cout <<arr[i]<<" ";
    cout<<"]"<<endl;
    }
int all_array(const int *const arr1 , size_t x , const int *const arr2 , size_t y){
    int *new_array{nullptr};
//    new_array= new int [x*y];
    int position{0};
    
    for (size_t i{0} ; i<y ; ++i){
        for (size_t j{0} ; j<x ; ++j){
            new_array[position]= arr2[i]*arr1[j];
              position++;
              
        }
              
    } return *new_array;
    
    }

main() {
    const size_t size_array1{5};
    const size_t size_array2{3};
    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};
    cout<<"Array 1: ";
    print(array1 , size_array1);
    cout<<"array 2: ";
    print(array2 , size_array2);
    
    int *result = all_array (array1 , size_array1  , array2 , size_array2);
    const size_t result_size{size_array1*size_array2};
    cout <<"result";
    print(result , result_size);
//    delete [] result;
    
    }