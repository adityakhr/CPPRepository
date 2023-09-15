#include <iostream>
using namespace std;
int main() {
    int length{}, width{}, height{};
    double base_cost{2.50};
    double case1_charges{0.10};
    double case2_charges{0.25};
    const int limit{10};
    double total_cost{0};
    cout<<"Welcome to ADITYA PACKAGE DELIEVERY service.\nEnter the length, width, height of package in inch seperated with white space: ";
    cin>>length>>width>>height;
    int volume{length*width*height};
    if(length<=limit&&width<=limit&&height<=limit)
        {
          if (volume<100)
              total_cost=base_cost;
        else if(volume>100)
            total_cost= base_cost+(base_cost*case1_charges);
        else if(volume>500)
            total_cost= base_cost+(base_cost*case2_charges);
            
cout<<"Base cost is $2.5 .\nIf the package volume is more than 100 cubic inch 10% extra charges will be there.\nIf package volume more than 500 cubic inch 20% extra charges will be there\n============================================================================================\nYour package Volume is "<<volume<<" cubic inch so the cost of shiping will be: $"<<total_cost<<endl;
    }
    else 
         cout<<"Sorry, Can not ship the package- dimension issue.\n";
}