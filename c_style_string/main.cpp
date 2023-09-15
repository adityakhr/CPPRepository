#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char first_name[20];
    char last_name [20];
    char full_name[20];
    cout << "please enter your first name\n";
    cin>>first_name;
    cout <<"please enter your last name\n";
    cin>>last_name;
    strcpy(full_name , first_name);
    strcat(full_name, " ");
    strcat(full_name,last_name);
    cout << "Your full name according to the thing you've entered is "<<"___"<<full_name<<"___"<<endl;
    cout <<"__________________________________________________________________________\n\nyour full name length is "<<strlen(full_name)<<"\n";
    return 0;
}