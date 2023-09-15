#include <iostream>
#include <string>
using namespace std;
main(){
    string name{"Aditya"};
    string*str {&name};
    cout<<&name<<endl;             
    cout<<str<<endl;
    cout<<*str<<endl;
    cout<<name<<endl;
    
    *str= "Khare is king";
    cout<<name<<endl;
    
    
    name = "king should be one and it's Aditya";
    cout<<*str<<endl;
    
//indirectly the moral story is (&name == str) and ( name == *str).


}