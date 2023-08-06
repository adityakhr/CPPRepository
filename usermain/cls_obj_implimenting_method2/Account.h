#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account{
    
private:
    std::string name{};
    double balance{0};
    
public:
    void set_balance( double bal){balance = bal;}
    double get_balance(){ return balance;}
    
    void set_name(std::string s);
    std::string get_name();
    
    bool deposite(double a);
    bool withdraw(double a);
    
    
    };

#endif // _ACCOUNT_H_
