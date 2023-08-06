#include <iostream>
using namespace std;

void change(int x , int y){
    --x;
    ++y;
    }

int main(){
    int a {200};
    int b{300};
    change (a , b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
    }
    
    