//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;

//void double_data(int *int_ptr){
//    cout<< (*int_ptr *= 2);
//    }
//  void swap(int*a, int*b){
//       int z = *a;
//       *a = *b;
//       *b = z;
//       }
//
//void display(vector<string>*v){
//    for(auto i : *v)
//        cout<<i<<", ";
//    }

//void print( char*n , char sitback){
//        do{
//            cout<<*n++<<" ";
//        }while (*n != 'l');
//    }
//main(){
//    int value{5052};
//    int *int_ptr{nullptr};
//    cout<<value<<endl;
//    cout<<&value<<endl;
    
//   double_data(&value);
//    int_ptr=&value;
//    double_data(int_ptr);
//      int x{10};
//      int y{20};
//      
//      cout<<"The value of x is: "<<x<<".\n";
//      cout<<"The value of y is: "<<y<<".\n";
//      
//      swap(x , y);
//      
//      cout<<"After swaping the values of x and y.....\n";
//      cout<<"Now the value of x is: "<<x<<".\n";
//      cout<<"Now the value of y is: "<<y<<".\n";
      
//      vector<string>name{"Rajesh" , "Deepmalika" , "Ayushi" , "Aditya"};
//      
//       
//     display(&name);
//     cout<<"Khare"<<endl;
     
//     char numbers[]{'a' , 'k' , 'd' , 'l' , 'r'};
//     
//     print(numbers  , -1);
     
//     vector<int>vec1{12, 13, 64, 85, 96, 74};
//     int ary[]{1, 2, 3, 4, 5, 6};
//     int*p1{ary};
//     int*p2{&vec1};
//     cout<<*p1+3<<endl;
//     cout<<ary[3]<<endl;
//     cout<<p2<<endl;
//     cout<<&vec1<<endl;
//
//}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display_vector(vector <string> *str);

int main(){
    
    vector <string> vec {};
    display_vector(&vec);
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    vec.push_back("Larry");
    vec.push_back("Ayden");
    vec.push_back("Dean");
    vec.push_back("Addep");
    cout<<"Size of vector "<<vec.size()<<endl;
    display_vector(&vec);
    

} 

    void display_vector(vector <string> *str){
         if ((*str).size() != 0){
        for (auto i : *str){
            cout<<i<<" ";}
        cout<<endl;
        }else{cout<<"vector is empty.\n";}
}
