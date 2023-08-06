#include <iostream>
using namespace std;
template <typename T>
class item {
private:
    string name;
    T value;
public:
    Item(string a , T b)
    :name {a} , value{b}{cout<<"Two argu is called\n";}
    
    string getname() const {
        return name;
        }
    T getvalue () const {
        return value;
        }
    
    };
    
int main(){
    Item <int> item1 ("Aditya" ,100 );
    cout<<item1.getname()<<endl;
    cout<<item1.getvalue()<<endl;
    return 0;
    cout<<"Hey tis is me\n";
    }