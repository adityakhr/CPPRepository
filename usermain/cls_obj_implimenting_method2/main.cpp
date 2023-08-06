#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account a1{};
    a1.set_balance(1000);
    a1.get_balance();
    a1.set_name("Aditya's Account");
    a1.get_name();
    if(a1.deposite(500))
        cout<<"deposition completed.\n";
        else{
            cout<<"Can't completed with deposition.\n";
            }
    if (a1.withdraw(500))
        cout<<"Withdrawal completed.\n";
        else{
            cout<<"Not sufficient balance.\n";
            }
    if(a1.withdraw(700))
        cout<<"Withdrawal completed.\n";
        else{
            cout<<"Not sufficient balance.\n";
            }
    
    return 0;
}