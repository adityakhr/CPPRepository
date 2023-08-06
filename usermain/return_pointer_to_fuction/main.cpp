#include <iostream>
using namespace std;

int *creat_array(size_t x , int y){
    
    int*s{nullptr};
    s= new int[x];
    for (size_t i{0} ; i<x ; ++i)
        *(s+i) = y;
    return s;
    }
    
void display_array(const int *const s , size_t z){
    for(size_t i{0} ; i<z ; ++i)
        cout<<s[i]<<" ";
    cout<<endl;
    }

int main(){
    
    int *my_array{nullptr};
    size_t size{};
    int value{};
    
    cout<<"\nEnter the number of integer you would like to have in array: ";
    cin>>size;
    cout<<"\nEnter the value you would like to initialize all of them to: ";
    cin>>value;
    
    my_array = creat_array(size,value);
    
    display_array(my_array , size);
    
    delete [] my_array;
    
    }