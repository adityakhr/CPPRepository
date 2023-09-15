#include <iostream>
using namespace std;
double cal_area_rec1(double len , double hei){
    return len * hei;
}

void area_rec1(){
    double len{};
    double hei{};
    cout<<"Enter the length in meter: \n";
    cin>>len;
    cout<<"Enter the height in meter: \n";
    cin>>hei;
    cout <<"the area of the Rectangal with the height "<<hei<<" and length "<<len<<" will be "<<cal_area_rec1(len , hei)<<" meter squar."<<endl;
}
int main() {
    area_rec1();
//    int i{};
//    do{
//       cout <<"Please enter number b/w 1 to 6 only: ";
//       cin>>i;
//       cout<<"please enter a valid number\n";
//       }while(i>=5);
//       cout<<"thankyou we got your response!";
    
}
  