#include <iostream>
using namespace std;
int main() {
    bool equal_result{};
    bool not_equal_result{};
    int num1{},num2{};
    cin>>num1>>num2;
    equal_result= num1==num2;
    not_equal_result= num1!=num2;
    cout<<boolalpha;
    cout<<"equal result: "<<equal_result<<endl;
    cout<<"not equal result: "<<not_equal_result<<endl;
    return 0;
}