#include "Account.h"

    
void Account::set_name(std::string s){
    
    name = s;
    
    }
    
std::string Account::get_name(){
    
    return name;
    
    }
    
    
 bool Account::deposite(double a){
     
     balance+=a;
     return true;
     }
    
bool Account :: withdraw(double a){
    
    if ((balance-a)>0){
        balance-=a;
        return true;}
    else {
        return false;
        }
    
    }

