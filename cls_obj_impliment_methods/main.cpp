#include <iostream>
using namespace std;

class Account{
    
private:
    string name{};
    double balance{0};
    
public:
    void set_balance( double bal){balance = bal;}
    double get_balance(){ return balance;}
    
    void set_name(string s);
    string get_name();
    
    bool deposite(double a);
    bool withdraw(double a);
    
    
    };
    
bool Account :: withdraw(double a){
    
    if ((balance-a)>0){
        balance-=a;
        cout<<"withdrawal completed\n";
        return true;}
    else {
        cout<<"Not sufficient balance!"<<endl;
        }
    
    }
    
    


string Account::get_name(){
    
    return name;
    
    }
    
 bool Account::deposite(double a){
     
     balance+=a;
     cout<<"Deposition completed\n";
     return true;
     }
    
void Account::set_name(string s){
    
    name = s;
    
    }
    


int main(){
    Account a1{};
    a1.set_balance(1000);
    a1.get_balance();
    a1.set_name("Aditya's Account");
    a1.get_name();
    a1.deposite(500);
//    a1.withdraw(500);
    a1.withdraw(1400);
}