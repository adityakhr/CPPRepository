#include <iostream>
#include <vector>
using namespace std;
main() {
    char selec{};
    vector<int>vec{};
    do{
    cout<<"================================================================\n                                       \nSelect the one option from below.....\n";
    cout<<"P - Print number\n"<<"A - Add number\n"<<
    "M - Display mean of the number\n"<<"S - Displaythe smallest number\n"<<
    "L - display the largest number\n"<<"Q - Quit\n";
    cin>>selec;
    if (selec=='p'|| selec=='P'){
        if(vec.size()!= 0){
        cout<<"[ ";
        for (int i: vec)
        cout<<i<< " ";
        cout<<" ]\n";
        }
        else cout<<"[] - the list is empty. \n";
        }
    else if (selec=='A'||selec=='a'){
        int num1{};
        cout<<"Enter the number to be added in list: ";
        cin>>num1;
        vec.push_back(num1);
        cout<<num1<<" is added to the list.\nIf you want to add more please select option A and add one number at one time.\n";
        }
    else if (selec=='M'|| selec=='m'){
            if (vec.size()==0){
                cout<<"Can't calculate mean- data not found!\n";}
            else{
                int total{0};
                for(auto num2 :vec)
                    total+=num2;
                cout<<"Mean value will be "<<static_cast<double>(total)/vec.size()<<endl;
                }
        }
    else if (selec=='S'||selec=='s'){
        if(vec.size()==0)
            cout<<"Can't find bcoz the list is empty!\n";
        else{
            int smallest=vec.at(0);
            for(auto num3 : vec)
                if (num3<smallest)
                    smallest=num3;
            cout<<smallest<<endl;
            }
    }
    else if (selec=='L'||selec=='l')
        if(vec.size()==0)
            cout<<"Can't find bcoz the list is empty!\n";
        else{
            int largest=vec.at(0);
            for(auto num4: vec)
                if(num4>largest)
                largest=num4;
            cout<<largest<<endl;
        
            }
    else
        cout<<"Please chose the correct option!\n";
        
    }while(selec!='q' && selec!='Q');
}