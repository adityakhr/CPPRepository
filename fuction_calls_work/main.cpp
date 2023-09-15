#include <iostream>
#include <cmath>
using namespace std;

void fucn2(int &x , int  y , int z){
    x+=y+z;
}

int fucn1(int a, int b){
    int result{};
    result= a+b;
    fucn2(result , a , b);
    return result;

}
 int main() {
     int x{10};
     int y{20};
     int z{};
     z= fucn1(x,y);
     cout<<z<<endl;
     return 0;
 }