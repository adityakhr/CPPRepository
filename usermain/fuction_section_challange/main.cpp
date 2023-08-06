#include <iostream>
#include <vector>
using namespace std;

void display_manu();

char get_selection();



main(){
    vector<int>vec{};
    char selection{};
    
    do{
        display_manu();
        cout<<"\n============================================\n";        
        char selection = get_selection();
        switch (selection){
            case 'P' : {
            if(vec.size() == 0)
                cout<<"The list is empty!\n";
            else{
                cout<<"[ ";
                for(auto i : vec)
                    cout<<i<<" ";
                cout<<"]"<<endl;
                } 
            }break;
            case 'A': {
                int num{};
                cout<<"enter the digit to be added: ";
                cin>>num;
                vec.push_back(num);
                cout<<num <<" is added.\n";
                }break;
            case 'M' : {
                int total{};
                for(auto i : vec)
                    total+= i;
                cout<<"The mean value will be "<<static_cast<double>(total)/vec.size()<<".\n";
                }break;
            case 'S': {
                if(vec.size()!=0){
                    int smallest= vec.at(0);
                    for (auto i : vec)
                        if(i<smallest){
                            smallest=i;
                                cout<<"The smallest number in list is "<<i<<"."<<endl;}
                }else cout<<"List is empty, unable to find smallest\n";
                }break;
            case 'L' :{
                if (vec.size()!= 0){
                    int largest= vec.at(0);
                    for(auto i : vec)
                        if(i>largest){
                            largest=i;
                               cout<<"The largest number in list is "<<i<<"."<<endl;}
                }else cout<<"The list is empty, unable to find largest.\n";
                }break;
            
            case 'Q' : {
                cout<<"you've selected to quit, Good bye!\n";
                }break;
                
            default :
             cout<<"Please select a valid option\n";
                
            
            }
        
        }while(selection != 'Q');
}

void display_manu(){
    cout<<"++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"p) print list\n";
    cout<<"a) Add integer\n";
    cout<<"m) mean value\n";
    cout<<"s) smallest integer\n";
    cout<<"l) largest integer\n";
    cout<<"q) quit\n";
    cout<<"Select any option above: ";
}

char get_selection(){
    char selection{};
    cin>>selection;
    return toupper(selection);
}