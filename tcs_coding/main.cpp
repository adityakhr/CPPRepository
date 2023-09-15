#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <array>
#include <cctype>
using namespace std;
//int main(){
//    
//    string value_of_s{};
//    getline(cin , value_of_s);
//    int count1{0};
//    int count2{0};
//    cout<<value_of_s<<endl;
//    for(auto i: value_of_s){
//        if (i == '#'){
//            ++count1;
//            cout<<"Counted\n";
//            }
//        else if (i=='*'){
//            ++count2;
//            cout<<"counted\n";
//            }
//        else{cout<<"# or *, can't recognise so can't count it\n";}
//    }
//        if (count2 > count1){
//            cout<<"Positive integer\n";}
//        else if(count1 == count2){
//            cout<<"0\n";}
//        else{cout<<"Negative integer\n";}
//    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"<<count2-count1<<endl;
//    
//    
//    }














//int main(){
//    
//    int value_of_v{};
//    int value_of_w{};
//    cout<<"enter the value of v: ";
//    cin>>value_of_v;
//    cout<<"Enter the value of w: ";
//    cin>>value_of_w;
//    int x{};
//    if(2<=value_of_w && value_of_v < value_of_w && value_of_w %2 ==0){
//        x = (value_of_w - (2*value_of_v))/2;
//        cout<<"\nTwo wheeler:"<<value_of_v-x<<", four wheeler:"<<x<<endl;
//    }else {
//        cout<<"invalid values!\n";
//        }
//    
//    
//    }












//int main(){
//    
//    int size {};
//    cout<<"Enter the size of array: ";
//    cin>>size;
//    double array[size];
//    for (int i{0} ; i<size ; ++i){
//        double num{};
//        cout<<"Enter the digit to be added in array: ";
//        cin>>num;
//        array[i] = num;
//        cout<<num<<" is added\n";
//        
//        }
//    cout<<"++++++++++++++++++++++++++++++++++++\nSo entered array is \n[ ";
//    for(auto i: array){
//        cout<<i<<" ";
//        }
//    cout<<"]\n\n======================================================="<<endl;
//    double num = array[0];
//    int num2{1};
//    for(int i{0} ; i<size ; ++i){
//        if(num < array[i]){
//            
//            ++num2;}
//        }
//    cout<<num2<<endl;
//}







//char to_upper(char a){
//    return toupper(a);
//    }
//
//
//
//int main(){
//    
//    char a[10], b[10], c[10];
//    cout<<"Enter the three words(lower case) seperated with white sapce: ";
//    cin>>a;
//    cin>>b;
//    cin>>c;
//    cout<<"1st: "<<a<<"\n"<<"2nd: "<<b<<"\n"<<"3rd: "<<c<<endl;
//    cout<<endl;
//    for (int i{0} ; i<10 ; ++i){
//        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'  ||
//            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ){
//            a[i]='%';
//            }
//        }
//    for(int i {0} ; i<10 ; ++i){
//        if(b[i] == 'b' || b[i] == 'c' || b[i] == 'd' || b[i] == 'f' || b[i] == 'g' || b[i] == 'h' || 
//        b[i] == 'j' || b[i] == 'k' || b[i] == 'l' || b[i] == 'm' || b[i] == 'n' || b[i] == 'p' || 
//        b[i] == 'q' || b[i] == 'r' || b[i] == 's' || b[i] == 't' || b[i] == 'v' || b[i] == 'w' || 
//        b[i] == 'x' || b[i] == 'y' || b[i] == 'z' ||b[i] == 'B' || b[i] == 'C' || b[i] == 'D' ||
//        b[i] == 'F' || b[i] == 'G' || b[i] == 'H' || 
//        b[i] == 'J' || b[i] == 'K' || b[i] == 'L' || b[i] == 'M' || b[i] == 'N' || b[i] == 'P' || 
//        b[i] == 'Q' || b[i] == 'R' || b[i] == 'S' || b[i] == 'T' || b[i] == 'V' || b[i] == 'W' || 
//        b[i] == 'X' || b[i] == 'Y' || b[i] == 'Z'){
//            b[i]= '#';
//            }
//        }
//    for(int i {0} ; i<10 ; ++i){
//        if(c[i]== 'a' || c[i] == 'b' || c[i] == 'c' || c[i] == 'd' || c[i] == 'e' || c[i] == 'f' ||
//        c[i] == 'g' || c[i] == 'h' || c[i] == 'i' || c[i] == 'j' || c[i] == 'k' || c[i] == 'l' || 
//        c[i] == 'm' || c[i] == 'n' || c[i] == 'o' || c[i] == 'p' || c[i] == 'q' || c[i] == 'r' || 
//        c[i] == 's' || c[i] == 't' || c[i] == 'u' || c[i] == 'v' || c[i] == 'w' || c[i] == 'x' || 
//        c[i] == 'y' || c[i] == 'z'){
//            c[i]=to_upper(c[i]);
//            }
//        }
//    cout<<"===============================================\n";
//    cout<<"1st: "<<a<<"\n"<<"2nd: "<<b<<"\n"<<"3rd: "<<c<<endl;
//}






//int main(){
//    
//    int num {};
//    int check{};
//    cout<<"Enter the number that you want to check if it's prime or not: ";
//    cin>>num;
//    if (num == 0 || num == 1){
//        cout<<"You've entered the "<<num<<" which can't be prime number.\n";
//        }
//        else {
//            for(int i {1} ; i<=num ; ++i){
//                if(num%i == 0){
//                ++check;
//                }
//            }
//        }
//    if (check == 2){
//        cout<<"It's a prime number.\n";
//        }else {
//            cout<<"it's not a prime number.\n";
//            }
//    return 0;
//}









//
//int main(){
//    int size{};
//    cin>>size;
//    array <int  , 1000 > arr;
//    if(size >0 && size<=1000){
//        for(int i{0} ; i<size ; ++i){
//            int num{};
//            cin>>num;
//            if(num>0&&num<=1000){
//                arr.at(i)=num;
//            }
//        }
//    }
//    int sum{};
//    array<int ,1000>::iterator it = arr.begin();
//    for(int i{0} ; i<size ; ++i){
//        cout<<*it<<endl;
//        sum+=(*it);
//        ++it;
//        
//        }
//    cout<<"===================\n"<<sum<<endl;
//}










//int main(){
//    int size{};
//    cin>>size;
//    vector <int> v (size);
//    if (size >=1 && size <=100000){
//        for(int i{0} ; i < size ; ++i){
//            int num{};
//            cin>>num;
//            if(num>=1 && num<= 1000000000){
//                v.at(i) = num;
//            }
//        }
//        
//    }
//    sort(v.begin() , v.end());
//    for(auto i : v)
//        cout<<i<<" ";
//    cout<<endl;
//}






//
//int main(){
//    int row{};
//    cin>>row;
//    int col{};
//    cin>>col;
//    int parking[row][col];
//    int sum [row];
//    for(int i{0} ; i <row ; ++i){
//        for(int j{0} ; j<col ; ++j){
//            int num{};
//            cin>>num;
//            parking[i][j]=num;
//            }
//        }
//    cout<<"____________________________________________________________\n";
//    for(int i{0} ; i <row ; ++i){
//        for(int j{0} ; j<col ; ++j){
//            cout<<parking[i][j]<<" ";
//            }cout<<endl;
//        }
//    cout<<"\n______________________________________________________________\n";
//    for(int i{0} ; i <row ; ++i){
//        int total{};
//        for(int j{0} ; j<col ; ++j){
//            total+=parking[i][j];
//            }
//        sum[i] = total;
//        }
//    int highest = sum[0];
//    int no_of_row{1};
//    for(int i{0} ; i<row ; ++i){
//        if(highest<sum[i]){
//            highest = sum[i];
//            no_of_row += i;
//            }
//        }
//    cout<<no_of_row<<" has the maximum parking.\n";
//}





//
//int main(){
//    int size {};
//    cin>>size;
//    vector <char> vec{};
//    int count {1};
//    for (int i {0} ; i<size ; ++i){
//        char a {};
//        cin>>a;
//        vec.push_back(a);
//    }
//    cout<<"============================================\n";
//    for(auto i : vec ){
//        cout<<i<<" ";
//        }
//    cout<<"\n============================================\n";
//    
//    for(int i{0} ; i<size ; ++i){
//        for(int j{i+1} ; j<size ; ++j){
//            if (vec.at(i) == vec.at(j)){
//                ++count;
//                std::vector<char>::iterator it;
//                it = find(vec.begin() , vec.end() , vec.at(j) );
//                vec.erase(it);
//                --size;
//                }
//            }
//        cout<<vec.at(i)<<": "<<count<<endl;
//        }
//}

//
//int main(){
//    array <char , 100> name{'a','d','i','t','y','a'};
//    int size = name.size(); 
//    for (int i {0} ; i < size ; ++i){
//        for (int j {0} ; j < size ; ++j){
//            if (name.at(i) == name.at(j) ){
//                auto it1 = find(name.begin() , name.end() , name.at(i) );
//                auto it2= find(name.begin() , name.end() , name.at(j) );
////                name.erase(*it1);
////                name.erase(*it2);
//                cout<<(*it1)<<"  "<<(*it2)<<end;
//                }
//            }
//        }
//    for(auto &i: name){
//        i = std::toupper(i);
//        cout<<i<<" ";
//        }
//    cout<<endl;
//    }








//
//int  main(){
//    int size{};
//    cin>>size;
//    vector <int> vec{};
//    for (int i {0} ; i<size ; ++i){
//        int num {};
//        cin>>num;
//        vec.push_back (num);
//        }
//    sort(vec.begin(), vec.end());
//    cout<<"Smallest number in group is: "<<vec.at(0)<<endl;
//    cout<<"Largest number in group is: "<<vec.at(size-1)<<endl;
//    }


// manual sorting

//int main(){
//    int num{};
//    cin>>num;
//    int count{0};
//    if (num>1){
//        for(int i{1} ; i<=num ; ++i){
//            if (num%i == 0 ){
//            ++count;
//            }
//        }
//        if(count == 2){
//        cout<<"A prime number.\n";
//        }else{
//            cout<<"No, Not a prime number.\n";
//            }
//        }else {
//            cout<<"enter valid number.\n";
//            }
//    
//    for(int i{0} ; i<(size) ; ++i){
//    for (int j {i+1} ; j<size ; ++j){
//        if(arr[i] > arr[j]){
//            int temp = arr[i];
//            arr[i] =arr[j];
//            arr[j] = temp;
//            }
//        }
//        }
//    for(auto i : arr){
//        cout<<i<<" ";
//        }
//    cout<<endl;

//}
















//int main(){
//    string s {};
//    cin>>s;
//    int r{};
//    cin>>r;
//    bool m = true;
//    for (int i {0} ; i<s.size() ; ++i){
//            if (!isalpha(s.at(i)) || !islower(s.at(i)) || r<2 || r>50){
//                cout<<"Invalid input";
//                return 0;
//                }
//        }
//    for (int i {0} ; i<s.size() ; ++i){
//        string k {};
//        for (int j {0} ; j<r ; ++j){
//            k+=s.at(i);
//            }
//        int n = s.find(k);
//        if (n != string::npos){
//            s.erase(n , r);
//            --i;
//            }
//        }
//    cout<<s;
//    }








//
//int main(){
//    int row {};
//    int col{};
//    cin>>row >>col;
//    string command{};
//    cin>>command;
//    for(auto &i : command){
//        i = ::toupper(i);
//        }
//    for (int i {0} ; i<row ; ++i){
//        for(int j {0} ; j<col ; ++j){
//            int k = i;
//            int m = j;
//            for(int g{0} ; g<command.size() ;++g){
//            if (command.at (g) == 'L'){
//                --m;
//                if (m<0){
//                    cout<<"Unsafe\n";
//                    break;
//                    }
//                }
//            else if (command.at(g) == 'R'){
//                ++m;
//                if (m>(col-1)){
//                    cout<<"Unsafe\n";
//                    break;
//                    }
//                }
//            else if (command.at(g) == 'U'){
//                --k;
//                if (k<0){
//                    cout<<"Unsafe\n";
//                    break;
//                    }
//                }
//            else if (command.at(g) == 'D'){
//                ++k;
//                if (k>(row-1)){
//                    cout<<"Unsafe\n";
//                    break;
//                    }
//                }else{cout<<"Wrong command\n";}
//            }
//        if(m>=0&&k>=0){
//            cout<<"Safe\n";
//            }
//        }
//    }
//}





int main(){
    int row {};
    cin>>row;
    for (int i {1} ; i <= row ; ++i){
        for(int j{1} ; j<= row ; ++j){
            if((i+j)> row){
                cout<<"*"<<" ";
                }
            else{
                cout<<" "<<" ";
                }
            }
        for (int j {1} ; j<=i-1 ; ++j){
            cout<<"*"<<" ";
            }
        cout<<endl;
        }
    }