#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int row {};
    cin>>row;
    int col{};
    cin>>col;
    int arr[row][col];
    for (int i {0} ; i<row ; ++i){
        for (int j {0} ; j<col ; ++j){
            int num{};
            cin>>num;
            arr[row][col] = num;
            }
        }
    for(auto i: arr)
        cout<<i<<" ";
//    for (int i {0} ; i<row ; ++i){
//        for (int j {0} ; j<col ; ++j){
//            cout<<arr[row][col]<<" ";
//            }cout<<endl;
//        }
    }