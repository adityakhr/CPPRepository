//#include <iostream>
//using namespace std;
//main(){                                                          
//    int num{10};                                               /*  example for local variable*/
//    int num2{20};
//    cout<<"the value of num is: "<<num<<"\n";
//    {
//        int num{50};
//        cout<<"the value of num here is: "<<num<<"\n";
//        cout<<"The value of num2 is: "<<num2<<"\n";
//        }
//    cout<<"The vlaue of num is: "<<num<<endl;

//  int local_example(int x){
//      return x;
//  }
//int main(){
//    cout<<local_example(200);
//    
//}
//  void local_example(int x){
//      cout<< x;
//  }
//int main(){
//    local_example(200);
//    
//}
   
   
/*====================================================================================================*/
//#include <iostream>
//using namespace std;
//
//int num {5000};
//
// void global_variable(){
//     cout <<num<<endl;
//     num += 1000;
//     cout<<num<<endl;
// }
// 
// int main(){
//     global_variable();
//     global_variable();    /* it's a global variable example.......... 
                            /*now value of num is 6000 it won't initialize again(as we decleared 5000)*/
//}
/*==============================================================================================================*/


#include <iostream>
using namespace std;

void variable (){
    static int num {6000};
    cout<<num<<endl;
    num += 2000;
    cout<<num<<endl;
}
int main(){
    variable();
    variable();                      /* it's a static local variable example.......... 
                            /*now value of num is 8000 it won't initialize again(as we decleared 6000)*/
}