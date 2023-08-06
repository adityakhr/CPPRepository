#include <iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b);/*if there we are doing it by "pass by value" or not by "pass by reference"
                             than the copy of a is made at location of x and
                             after the fuction is done with its job the original value of a will be there,
                             no change in the value of a nad b ..*/

int main(){
    int x{};
    cout<<"Enter the value of x: \n";
    cin>>x;
    int y{};
    cout<<"Enter the value of y: \n";
    cin>>y;
    swap(x,y);
    cout<<"We have swapped the values.";
    cout<<"\nNow the value of x is "<<x<<" and y is "<<y<<endl;

}

void swap(int &a , int &b){
    int k=a;
    a=b;
    b=k;
}
//void print(vector<int> v);
//
//int main(){
//    vector<int> score{45,42,12,85,23,75};
//    print (score);
//}
//void print(vector<int> v){
//    cout<<"[ ";
//    for (int num : v){
//     cout <<num<<" ";
//     }
//     cout<<"]";
//}