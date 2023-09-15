#include <iostrem>
using namespace std;
main(){
    int num{10};
    int num2{20};
    cout<<"the value of num is: "<<num<<"\n";
    {
        int num{50};
        cout<<"the value of num here is: "<<num<<"\n";
        cout<<"The value of num2 is: "<<num2<<"\n";
        }
    cout<<"The vlaue of num is: "<<num<<endl;
}