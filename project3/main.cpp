//#include <iostream>
//using namespace std;
//int main () {
//int age{};
//const int eligibility_age1{18};
//const int eligibility_age2{15};
//cout<<"whats your age?\n";
//cin>>age;
//bool work_age;
//work_age= age>eligibility_age2 && age<=eligibility_age1;
//cout<<boolalpha;
//cout<<"See if you can work is true and false: "<<work_age<<"\nIf its true you can work\n";
//return 0;
//}

















//#include <iostream>
//using namespace std;
//int main(){
//    
//      int num {};
//    cin >>num;
//    for (int i {0} ; i<=num  ; ++i){
//        if (i == 1){
//        cout<<"one\n";
//        }
//        else if (i == 2){
//            cout<<"two\n";
//        }
//        else if (i ==3 ){
//            cout<<"three\n";
//        }
//        else if (i ==4 ){
//            cout<<"four\n";
//        }
//        else if (i ==5 ){
//            cout<<"five\n";
//        }
//        else if (i == 6){
//            cout<<"six\n";
//        }
//        else if (i == 7){
//            cout<<"seven\n";
//        }
//        else if (i ==8 ){
//            cout<<"eight\n";
//        }
//        else if (i == 9){
//            cout<<"nine\n";
//        }
//        else if (i >9 && (i%2==0) ){
//            cout<<"even\n";
//        }
//        else if (i >9 && (i%2!=0) ){
//            cout<<"odd\n";
//        }
//        else{
//            cout<<"Please enter a valid number\n";
//        }
//    }
//    return 0;
//}















//#include <iostream>
//using namespace std;
//int largest(int i , int j , int k , int l){
//    
//    int ans1 =( (i>j) ? i : j);
//    int ans2  = ((ans1 > k ) ? ans1 :k);
//    int ans3  =((ans2 > l)? ans2 : l );
//    return ans3;
//}
//int print (int k);
//int main(){
//    
//    int a, b , c,d ;
//    cin>>a;
//    cin>>b;
//    cin>>c;
//    cin>>d;
//    int answer = largest(a, b, c, d);
//    cout<<print(answer)<<endl;
//}
//int print (int k){
//    
//    return k;
//    
//}











//#include <iostream>
//using namespace std;
//
//int main(){
//    long int a;
//    cin>>a;
//    long long int b;
//    cin>>b;
//    char c;
//    cin>>c;
//    float d;
//    cin>>d;
//    long double e;
//    cin>>e;
//    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<endl;
//}














//#include <iostream>
//using namespace std;
//
//main(){
//
//    size_t size{};
//    cout<<"Enter the size of array: ";
//    cin>>size;
//    int array[size];
//    int index = size-1;
//    for (int i{index} ; i>=0 ; --i){
//        int num{};
//        cout<<"\nEnter the number to be added in array: ";
//        cin>>num;
//        cout<<"\n"<<num<<" is added to array\n";
//        array[i] = num;
//        
//    }
//    cout<<"\nThe entered array is: \n";
//    for (auto i : array){
//        cout<<i<<" ";}
//    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++\n";
//}










//#include <iostream>
//using namespace std;
//
//int main(){
//     long int a;
//     long long int b;
//     char c;
//     float d;
//     long double e;
//    
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     cin>>d;
//     cin>>e;
//    
//    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<(d)<<"\n"<<(e)<<endl;
//}








//#include <iostream>
//using namespace std;
//int main(){
//    
//    size_t size {};
//    cout<<"Enter the size of the array: ";
//    cin>>size;
//    int array[size];
//    for (size_t i {0} ; i<size ; ++i){
//        int num{};
//        cout<<"\nEnter the integer to be added in array: ";
//        cin>>num;
//        array[i] =num ;
//        cout<<"\n"<<num<<" is added to the array.\n";
//    }
//    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++\nThe final Answer will be: \n";
//    for (auto i : array)
//        if (i%2 == 0){
//            cout<<i*i<<" ";
//        cout<<endl;
//            }
//}









#include <iostream>
#include <string>
using namespace std;
main(){
    
    string name{};
    cin>>name;
    int name_size =name.size();
    for (int i{0} ; i < name_size ; ++i){
        for(int j{i+1} ; j < name_size ; ++j){
            if (name[i] == name[j]){
                cout<<"Same char"<<endl;
                name.erase(i,1);
                name.erase(j,1);
            
                }//else cout<<"doesn't have same character.\n";
        }
    }
    for(auto i: name)
        cout<<i;
    }










//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//char get_lower(char j){
//    return tolower(j);
//    }
//
//main(){
//    
//    int age;
//    string first_name;
//    string last_name;
//    int standard;
//    int max_length{50};
//    int size_f_n=first_name.size();
//    int size_l_n=last_name.size();
//    
//    cin>>age;
//    cin>>first_name;
//    cin>>last_name;
//    cin>>standard;
//    cout<<age<<" ";
//    if (max_length> size_f_n){
//        for (auto i : first_name){
//            cout<<get_lower(i);
//        }
//    cout<<" ";}
//    if (max_length> size_l_n){
//        for (auto i : last_name){
//            cout<<get_lower(i);
//        }
//    cout<<" ";}
//    cout<<standard<<endl;
//    
//}
//    another code======================
//      char c;
//      cin>>c;
//      cout<<get_lower(c);
//    }