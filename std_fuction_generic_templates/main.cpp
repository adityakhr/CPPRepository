#include <iostream>
using namespace std;
template<typename T>
T Max (T a , T b){
    return (a>b)?a:b;
    }
template <typename T1 , typename T2>
void Min(T1 a , T2 b){
    cout<< a<<" , "<<b<<endl;
    }
template <typename T1>
void Swap(T1 &a , T1 &b){
    T1 temp= a;
    a= b;
    b= temp;
    }
int main(){
    int x {100};
    int y {500};
    cout<<Max<int>(x,y)<<endl;//or
    cout<<Max(x,y)<<endl;//this
    Min(10 , 8.5);
    Min<int , double>(15 , 11.25);
    cout<<x<<" , "<<y<<endl;
    Swap(x,y);
    cout<<x<<" , "<<y<<endl;
    }