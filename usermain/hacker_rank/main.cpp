#include <iostream>
#include <string>
using namespace std;
char get_lower(char j){
    return tolower(j);
}
int main(){
    
    string one;
    string two;
    cin>>one;
    cin>>two;
    char one0{one[0]};
    char two0{two[0]};
    size_t size_one = one.size();
    size_t size_two = two.size();
    cout<<size_one<<" "<<size_two<<endl;
    for (auto i : one){
        cout<<get_lower(i);
    }
    for (auto i : two){
        cout<<get_lower(i);
    }
    cout<<endl; 
    {
        one [0]  = two0;
        for (auto i : one){
            cout<<get_lower(i);
            }
    }
    
    cout<<" ";
    
    {
        two[0] = one0;
        for (auto i : two){
            cout<<get_lower(i);
            }
    }
    return 0;
}