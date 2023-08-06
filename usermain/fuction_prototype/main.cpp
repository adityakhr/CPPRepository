#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print (int);
void print (double);
void print (string);
void print (string , string);
void print (vector<string>v);

void print (int num){
    cout<<"printing num: "<<num<<"\n";
}
void print (double num){
    cout <<"printing double: "<<num<<"\n";
}
void print (string s){
    cout<<"printing string: "<<s<<"\n";
}
void print (string s , string t){
    cout <<"printing 2 strings: "<<s<<" and "<<t <<"\n";
}
void print (vector <string> v ){
    cout<<"printing vector string: ";
    for (auto k : v){
    cout<<k + " ";}
}
int main(){
    print (100);
    print (125.36);
    print ("frank");
    print ("Aditya is king" , "Khare is kong.");
    
    vector <string>surnames{"khare" , "shrivastava" , "bachchan"};
    print (surnames);
}
