#include <iostream>
using namespace std;
int main(){
    int num1{50};
    int num2{100};
    int num3{};
    cout<<"Chose number bigger than 10.\n";
    cin>>num3;
    if(num3>num1) 
        cout<<"you have entered: "<<num3<<", which is "<<num3-num1<<" more to the "<<num1<<endl;
        else cout<<"You have entered wrong number.";
    return 0;
}