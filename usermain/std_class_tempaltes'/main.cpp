#include <iostream>
#include <vector>
#include <string>
using namespace std;
template <typename T>
class Item {
private:
    string name;
    T value;
public:
    Item(string a , T b)
    :name {a} , value{b}{}
    
    string getname() const {
        return name;
        }
    T getvalue () const {
        return value;
        }
    
    };
    
int main(){
    Item <int> item1 {"Aditya" ,100 };
    cout<<item1.getname()<<endl;
    cout<<item1.getvalue()<<endl;
    Item <Item <string>> item3 {"Frank" , {"C++" , "Professor"}};
    cout<<item3.getname()<<endl;
    cout<<item3.getvalue().getname()<<endl;
    cout<<item3.getvalue().getvalue()<<endl;
    
    
    vector <Item<double>>vec{};
    vec.push_back (Item<double>("Larry" , 100.5));
    vec.push_back(Item<double>("Moe" , 520.5));
    vec.push_back(Item<double>("Curly" , 0.5));
    for(const auto &items : vec){
        cout<<items.getname()<<" "<<items.getvalue<<endl;
        }
    }

