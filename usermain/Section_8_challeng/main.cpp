#include <iostream>
using namespace std;
int main() {
    int cent{};
    int dollar{};
    int quater{};
    int dime{};
    int nickel{};
    int dukki{};
    int penny{};
    int balance{};
    cout<<"Enter the amount in cents: ";
    cin>>cent;
    if (cent<=0) cout<<"Please enter a valid amount in cents.\n";
    dollar=cent/100;
    balance=cent-(dollar*100);
    quater=balance/25;
    balance-=quater*25;
    dime=balance/10;
    balance-=dime*10;
    nickel=balance/5;
    balance-=nickel*5;
    dukki=balance/2;
    balance-=dukki*2;
    penny=balance/1;
    balance-=penny*1;
    cout<<"Dollar: "<<dollar<<"\nQuater: "<<quater<<"\nDime: "<<dime<<"\nNickel: "<<nickel<<"\ndukki: "<<dukki<<"\nPenny: "<<penny<<endl;
    return 0;
}