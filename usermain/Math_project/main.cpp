#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
main(){
//    double num{};
//    cout<<"Enter a number (double): ";
//    cin>>num;
//    cout<<"The square root of the num "<<num<<" will be "<<sqrt(num)<<" !"<<endl;
//    cout<<"The cubic root of the num "<<num<<" will be "<<cbrt(num)<<" !"<<endl;
//    cout<<"The sine of the num "<<num<<" will be "<<sin(num)<<" !"<<endl;
//    cout<<"The cosine of the num "<<num<<" will be "<<cos(num)<<" !"<<endl;
//    cout<<"The ceil of  the num "<<num<<" will be "<<ceil(num)<<" !"<<endl;
//    cout<<"The floor of the num "<<num<<" will be "<<floor(num)<<" !"<<endl;
//    cout<<"The round of the num "<<num<<" will be "<<round(num)<<" !"<<endl;
//    double power{};
//    cout<<"Enter the power to raise "<<num<<" to: ";
//    cin>>power;
//    cout <<"The "<<num<<" to the power "<<power<<" will be "<<pow(num,power)<<" !"<<endl;
      int count{10};
      int min{1};
      int max{6};
      cout<<"The RNAD_MAX on my lapi is "<<RAND_MAX<<"\n";
      srand ( time (nullptr));
       for (size_t i{1} ; i <= count ; ++i)  {
        int random_number = rand()%max + min;
        cout << random_number<<endl;
      }
      
    return 0;
}