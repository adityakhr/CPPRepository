#include <iostream>
using namespace std;
main(){
    double num1{};
    double num2{};
    char k{};
    do{
        cout<<"====================================================\nPlease chose one of  the option below:"<<endl;
        cout<<"a) Additon\nb) Subtraction\nc) multiplication\nd) division\nq) Quit\n";
        cin>>k;
        if (k == 'a' || k == 'A'){
            cout<<"you chosed to addition, now please enter the numbers seperated by white space to be added:\n";
            cin>>num1;
            cin>>num2;
            cout<<"the addition of entered number is: "<<num1+num2<<".\n====================================================\n"<<endl;
            }
            
        else if(k == 'b' || k=='B'){
            cout<<"you chosed to subtraction, now please enter the numbers seperated by white space to be subtract:\n";
            cin>>num1;
            cin>>num2;
            cout<<"the subtraction of entered number is: "<<num1-num2<<".\n====================================================\n"<<endl;
            }
        else if (k=='c'|| k=='C'){
            cout<<"you chosed to multiplication, now please enter the numbers seperated by white space to be multiply:\n";
            cin>>num1;
            cin>>num2;
            cout<<"the multiplication of entered number is: "<<num1*num2<<".\n====================================================\n"<<endl;
            }
        else if (k=='d' || k=='D'){
             cout<<"you chosed to division, now please enter the numbers seperated by white space to be divide:\n";
            cin>>num1;
            cin>>num2;
            cout<<"the division of entered number is: "<<num1/num2<<".\n====================================================\n"<<endl;
            }
        else if(k=='q'||k=='Q')
                cout<<"Good Bye!\n";
        else {
        cout<<"Plese enter a valid option, Thankyou!\n";
        cin>>k;
        }
        }while(k != 'q' &&  k != 'Q');
}