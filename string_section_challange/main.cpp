#include <iostream>
#include <string>
using namespace std;
int main(){
    string message{};
    string encrypted_message{};
    string str{"adcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"QWERTYUIOPLKJHGFDSAZXCVBNMmnbvcxzasdfghjklpoiuytrewq"};
    cout<<"Enter your message: ";
    getline(cin , message);
    cout<<"\nencrypting message.......\n";
    for (char c : message){
        int position = str.find(c);
        size_t no=string::npos;
        if(position!= no){
            char new_char = key[position];
            encrypted_message += new_char;
            }else{
                encrypted_message += c;
                }
        }
    cout<<"\nencrypted message is: "<<encrypted_message<<endl;
    
    cout<<"\nDecrypting message........\n";
    
    string decrypted_message{};
    
    for (char c : encrypted_message){
        int position = key.find(c);
        if(position != string::npos){
            char new_char = str[position];
            decrypted_message+=new_char;
            }else{
                decrypted_message+=c;
                }
        }
    cout<<"\nDecrypted message is: "<<decrypted_message<<endl;
    }