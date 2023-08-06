#include <iostream>
#include <vector>
using namespace std;
main(){
// with reference==================================



    int num{100};
    int &ref{num};
    
    cout<<num<<endl;
    cout<<ref<<endl;
    
    ref = 300;
    
    cout<<num<<endl;
    cout<<ref<<endl;

//without reference================================



//      int num{100};
//      int ref{num};
//    
//      cout<<num<<endl;
//      cout<<ref<<endl;
//    
//      ref = 300;
//    
//      cout<<num<<endl;
//      cout<<ref<<endl;
      
//==========================================================

// without reference ==========================================================



//      vector <string> stooges {"Aditya" , "Ayushi" , "Shivangi"};
//      
//      for(auto str : stooges){
//          str = "Rajesh";
//      cout<<str<<" ";}
//       cout<<endl;
//       
//       for(auto str : stooges)
//           cout<<str<<" ";

// with reference =============================================================



     vector <string> stooges {"Aditya" , "Ayushi" , "Shivangi"};
      
     for(auto &str : stooges){
          str = "Rajesh";
      cout<<str<<" ";}
       cout<<endl;
       
       for (size_t i{0} ; i< 3 ; ++i)
           cout<<stooges.at(i)<<" ";

}