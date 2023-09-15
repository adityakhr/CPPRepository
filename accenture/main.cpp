#include <iostream>
#include <string>
#include <deque>
#include <cctype>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;


//int check(string s){
//    vector <int> a{};
//    for(int i{0} ; i<s.size() ; ++i){
//        a.push_back(s.at(i));
//        }
//    for(int i{0};i<s.size() ;++i){
//        if(! isdigit(s.at(i)) && s.size()<=0){
//           return 0; 
//        }
//    }
//    for(int i{0} ; i<s.size(); ++i){
//        int count1 = std::count( s.begin() , s.end() , i );
//        if (count1 != s.at(i)){
//            return 0 ;
//            }
//        }
//    for(int i{0};i<s.size() ;++i){
//        string::iterator t;
//        string::iterator t1;
//        for(int j{i+1};j<s.size() ;++j){
//            if (s.at(i)==s.at(j)){
//                t= find(s.begin() , s.end() , s.at(i));
//                t1 = find(s.begin()+(i+1) , s.end() , s.at(j));
//                s.erase(t1);
//                --j;
//                }
//            }
//        }
//    return s.size();
//    }
//
//
//int main(){
//    string num{};
//    cin>>num;
//    check(num);
//}


//int main(){
//    int size{};
//    cin>>size;
//    vector <int> arr{};
//    for(int i {0} ; i<size ; ++i){
//        signed int k{};
//        cin>>k;
//        signed int t = pow(k , 2);
//        arr.push_back(t);
//        }
//    sort(arr.begin() , arr.end());
//    for(auto i : arr){
//        cout<<i<<" ";
//        }cout<<endl;
//    }












//int main(){
//    string s1{};
//    cin>>s1;
//    string k {};
//    for(int i {0} ; i<s1.size(); ++i){
//        string::iterator t;
//        if(s1.at(i) =='_'){
//            t= find(s1.begin() , s1.end() , s1.at(i));
//            s1.erase(t);
//            k+=toupper(s1.at(i));
//            }
//        else if(s1.at(i) == toupper(s1.at(i))){
//            if(i>0){
//                k+='_';
//                k += tolower(s1.at(i));
//                }else{
//                    k+=tolower(s1.at(i));
//                    }
//            }
//        else{
//            k+=s1.at(i);
//            }
//        }
//    cout<<k<<endl;
//    }



//int main(){
//    int num{};
//    cin>>num;
//    int r = 99999%num;
//    int ans = 99999-r;
//    cout<<ans<<endl;
//    cout<<ans%num<<endl;
//    }




//int main(){
//    string s{};
//    cin>>s;
//    char k , d;
//    cin>>k>>d;
//    int i{0};
//    string ans{};
//    int p{};
//    int j = p+1;
//    while (i < s.size()){
//        string :: iterator t;
//        t = find(s.begin() , s.end() , k);
//        if(t!=s.end()){
//            p = t-s.begin();
//            while( s.at(j) == k ){
//                ans+=s.at(p);
//                ans+=s.at(j);
//                ++j;
//                }
//            }
//        }
//    string :: iterator t1;
//    t1 = ::find(ans.begin() , ans.end() , d);
//    if(t1!=ans.end()){
//        cout<<ans<<endl;
//        }else{
//            cout<<"Sorry\n";
//            }
//}









//int check(long long int k){
//    long int z{};
//    while (k != 0){
//        int r = k%10;
//        z+=r;
//        k/=10;
//        }
//    return z;
//    }
//int main(){
//    long long int num{};
//    cin>>num;
//    long int sum{};
//    sum = check(num);
//    while(sum>9){
//        sum = check(sum);
//        }
//    if(sum>0 && sum == 1){
//        cout<<"UNO\n";
//        }else{cout<<"NOT UNO\n";}
//    }





//int main(){
//    int arr[]{35,15,45,25,55};
//    int count{0};
//    for(int i{1} ; i<5 ; ++i){
//        if (arr[i-1]>arr[i] && arr[i]<arr[i+1]){
//            ++count;
//            }
//        int k{};
//        k = i+1;
//        //cout<<i<<endl;
//        if (k == (5-1)){
//            break;
//            }
//        }
//    cout<<count<<endl;
//    }    




//
//int main(){
//    int size {};
//    cin>>size;
//    int arr[size];
//    for (int i{0} ; i<size ; ++i){
//        cin>>arr[i];
//        }
//    for(int i {0} ; i<size; ++i){
//        for(int j {i+1} ; j<size ; ++j){
//            if (arr[i] > arr[j]){
//                 int k = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = k;
//                }
//            }
//        }
//    for(auto i : arr){
//        cout<<i<<" ";
//        }cout<<endl;
//    }

//
//
//int main(){
//    int size {};
//    cin>>size;
//    int arr[size];
//    for (int i{0} ; i<size ; ++i){
//        cin>>arr[i];
//        }
//    int k {};
//    while (k<size){
//        for(int i {0} ; i<size; ++i){
//            if (arr[i] > arr[i+1]){
//                int p = arr[i];
//                arr[i] = arr[i+1];
//                arr[i+1] = p;
//                }
//            }
//        ++k;
//        }
//    for(auto i : arr){
//        cout<<i<<" ";
//        }cout<<endl;
//    }


//int main(){
//    int n{};
//    cin>>n;
//    int arr[n];
//    for(int i {0} ; i<n; ++i){
//        cin>>arr[i];
//        }
//    int key{};
//    cin>>key;
//    int i{0};
//    int k {0};
//    while (i<n){
//        int t = k+key;
//        if(t>=n){
//            t=t%n;
//            cout<<arr[t]<<" ";
//            }else{
//                cout<<arr[t]<<" ";
//                }
//        ++i;
//        ++k;
//        }
//    }

//
//long long int fabbonacci_number(long long int n){
//    if (n ==0)
//        return 0;
//    else if(n == 1)
//        return 1;
//    else if (n >= 2 ){
//        return fabbonacci_number(n-1) + fabbonacci_number(n-2);
//        }
//    }
//
//
//long long int fac(long long int n){
//    if (n==0)
//        return 1;
//    else if(n>=1){
//        return n*fac(n-1);
//        }
//    }
//
//
//int main(){
//    long long int k{};
//    cin>>k;
//    cout<<fabbonacci_number(k)<<endl;
//    cout<<fac(k)<<endl;
//    }




//int main(){
//    string vec{};
//    getline(cin , vec);
//    int count{};
//    for (int i {0} ; i<vec.size() ; ++i){
//        string:: iterator t;
//        string:: iterator t1;
//        for (int j{i+1} ; j<vec.size() ; ++j){
//            if(vec.at(i) == vec.at(j)){
//                t  = find( vec.begin()+(i+1) , vec.end() , vec.at(j) );
//                t1 = find( vec.begin() , vec.end()-j , vec.at(i) );
//                vec.erase(t);
//                vec.erase(t1);
//                if (i>0){
//                    --i;
//                    }
//                --j;
//                }
//            }
//        }
//    count = vec.size();
//    cout<<count<<endl;
//    for(auto i: vec)
//        cout<<i;
//    }





//int main(){
//    string s{};
//    getline(cin ,s);
//    int i{0};
//    int n = s.size();
//    string k;
//    vector<string> v{};
//    while (i<s.size()){
//        if (::isalpha(s.at(i))){
//            k +=s.at(i);
//            }
//        else{
//            v.push_back(k);
//            k.clear();
//            }
//        
//        ++i;
//        }
//    if (k.size() !=0){
//            v.push_back(k);
//            k.clear();
//            }
//    sort(v.begin() , v.end());
//    cout<<"[{ ";
//    for(auto i: v){
//        cout<<i<<" "; 
//        }cout<<"}]"<<endl;
//    
//    }






//void check_pallin(string k ){
//    deque <char> d{};
//    for (int i{0} ; i<k.size() ; ++i){
//        d.push_back(k.at(i));
//        for(int j{i+1} ; j<k.size();++j){
//            if (k.at(i) == k.at(j)){
//                d.push_back(k.at(j));
//                }
//            }
//        if (d.size()==1){
//            d.clear();
//            }else{
//                ckeck_deque(d);
//                }
//        }
//    }
//int main(){
//    string s{};
//    cin>>s;
//    check_pallin(s);
//    }





//void tolower(string &k){
//    for (int i{0} ; i<k.size() ; ++i){
//        if (::isalpha(k.at(i)) || ::isdigit(k.at(i))){
//            k.at(i) = tolower(k.at(i));
//            }else{
//                string::iterator t;
//                t = find(k.begin() , k.end() , k.at(i));
//                k.erase(t);
//                if (i>0){
//                    --i;
//                    }
//                }
//        }
//    }
//
//bool check_pallon(string k ){
//    int a = 0;
//    int f = k.size();
//    int b = f-1;
//    while (a!=b){
//        if (k.at(a) != k.at(b)){
//            return 0;
//            }
//        ++a;
//        --b;
//        }
//    return 1;
//    }
//
//int main(){
//    string n;
//    cin>>n;
//    tolower(n);
//    cout<<n<<endl;
//    cout<<boolalpha;
//    cout<<check_pallon(n);
//    }











//int main(){
//    string s{};
//    getline(cin,s);
//    vector <int > inte{};
//     for (int i {0} ; i<s.size() ; ++i){
//        int count {1};
//        string:: iterator t;
//        string:: iterator t1;
//        for (int j{i+1} ; j<s.size() ; ++j){
//            if(s.at(i) == s.at(j)){
//                t  = find( s.begin()+(i+1) , s.end() , s.at(j) );
//                s.erase(t);
//                --j;
//                ++count;
//                }
//            }
//        inte.push_back(count);
//        }
//    vector<int>:: iterator e=max_element(inte.begin() , inte.end());
//    int g = *e;
//    for (auto i{0} ; i<inte.size() ;++i){
//        if (g == inte.at(i)){
//            cout<<s.at(i)<<endl;
//            }
//        }
//    }







//
//int main(){
//    string s{};
//    cin>>s ;
//    string k{};
//    cin>>k;
//    for(int i {0} ; i<s.size() ; ++i){
//        int t = s.find(k);
//        if (t != -1){
//            int j{0};
//            while (j<k.size()){
//                string::iterator y;
//                y = s.begin()+t;
//                s.erase(y);
//                ++j;
//                }
////            string::iterator f;
////            f = s.begin()+t;
////            char g ='3.14';
////            s.insert(f , g);
//            }
////        cout<<s.at(i);
//    }
//    cout<<s<<endl;
//}



//bool check(string s , string key){
//    int i {0};
//    while (i < s.size()){
//        int count{};
//        for(int j {0} ; j<key.size() ; ++j){
//            int m = i;
//            for(int k {} ; k<key.size() ; ++k){
//                if (key.at(j) == s.at(m)){
//                    ++count;
//                    }
//                ++m;
//                }
//            }
//        if (count == key.size()){
//                return true;
//                }
//        ++i;
//        }
//    return false;
//    }
//
//int main(){
//    string s{} , key{};
//    cin>>s>>key;
//    bool k = check (s , key);
//    if (k == true){
//        cout<<"Yes"<<endl;
//        
//    }
//    else if (k == false){
//        cout<<"No\n";
//        }
//    }

//bool check_password(string m){
//    int digit_count{0};
//    int char_count{0};
//    int cap_count{0};
//    string k {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//    if (m.size()== 0 || ::isdigit(m.at(0))) {
//        return false;
//        }
//    for (int i {0}; i<m.size() ; ++i){
//        if (m.at(i) == '/' || m.at(i) == ' '){
//            return false;
//            }
//        else if (isdigit(m.at(i))){
//            ++digit_count;
//            }
//        else if (isalpha(m.at(i))){
//            ++char_count;
//            }
//        for(int j{0} ; j<26 ; ++j){
//            if (m.at(i) == k.at(j)){
//                ++cap_count;
//                }
//            }
//        }
//    if (digit_count>=1 && char_count>=4 && cap_count>=1){
//        return true;
//        }else{
//            return false;
//            }
//    }
//
//int main(){
//    string s {};
//    getline(cin,s);
//    cout<<"Checking entered password, if it's valid or not\n\n";
//    bool k = check_password(s);
//    if (k == false){
//        cout<<"Not excepted, Entered unvalid password\n\n";
//        }else{cout<<"Excepted\n\n";}
//    }







//
//int main(){
//    int num{};
//    do{
//        cout<<"\nPlease chose\n"
//                "1) Addition \n" 
//                "2) subtraction \n" 
//                "3) multiplication \n" 
//                "4) division: "
//                <<endl;
//        cin>>num;
//        if (num<0 || num>4){
//            cout<<"=====================================\n"<<"Invalid input\nFor quit please press 0"<<"\n=====================================\n";
//            }
//        if (num>=1 && num<=4){
//            int a, b;
//            cout<<"Enter first number and second number separated by while space: ";
//            cin>>a>>b;
//            if (num == 1){
//                cout<<"=====================================\n"<<a+b<<"\n====================================="<<endl;
//                }
//            else if (num == 2){
//                cout<<"=====================================\n"<<a-b<<"\n====================================="<<endl;
//            }
//            else if ( num == 3){
//                cout<<"=====================================\n"<<a*b<<"\n====================================="<<endl;
//            }
//            else if (num == 4){
//                cout<<setprecision(10);
//                cout<<"=====================================\n"<<static_cast<double>(a)/b<<"\n====================================="<<endl;
//            }
//        }
//        }while(num != 0);
//        cout<<"=====================================\n"<<"Good bye\nPress any key"<<"\n====================================="<<endl;
//    }








//bool check_string(string k , string l){
//    if (k.size() != l.size()){
//        return false;
//        }
//    for(int i {0} ; i<k.size() ; ++i){
//        int count1 = count( k.begin() , k.end() , k.at(i) );
//        int count2 = count( l.begin() , l.end() , k.at(i) );
//        if (count1 != count2){
//            return false;
//            }
//        }
//    return true;
//    }
//int main(){
//    string a{}, b{};
//    cin>>a>>b;
//    int k = check_string(a, b);
//    if (k == 1){
//        cout<<"Yes\n";
//        }else{cout<<"No\n";}
//    }










//void check_digit(int k , int l){
//    while(l<k){
//        int count{};
//        int num {};
//        cin>>num;
//        if (num>=1 && num<=100000000){
//            for(int j{0} ; j<num ; ++j){
//                for(int m{0} ; m<num ; ++m){
//                    if ((2*j)+(7*m) == num ){
//                        ++count;
//                    }
//                }
//            }
//        }
//    if (count > 0 ){
//        cout<<"YES\n";
//    }else{cout<<"NO\n";}
//    ++l;
//    }
//}
//int main() {
//	// your code goes here
//	int tc, i{0};
//    cin>>tc;
//	if (tc>=1 && tc<=1000){
//	    check_digit(tc,i);
//	}
//}









//int fab(int k){
//    if (k == 0){
//        return 0;
//        }
//    else if (k==1){
//        return 1;
//        }
//    else if(k > 1){
//        return (fab(k-1) + fab(k-2));
//        }
//    else {
//        return -1;
//        }
//    }
//
//int main(){
//    int num {};
//    cin>>num;
//    cout<<fab(num);
//    }











//int main(){
//    int i {3};
//    int max{6};
//    int min{1};
//    srand (time (0));    /*important to generate different number each time..*/
//    while (i > 0 ){
//    int k  = rand();
//    int m  = k%50;     /*  %50 mean between 0 to 50*/
//    cout<<m<<endl;
//    --i;
//    }
//    }










//int main(){
//    int s {};
//    cin>>s;
//    vector<int> v{};
//    while (s!=0){
//        int r= s%10;
//        v.push_back(r);
//        s/=10;
//        }
//    reverse (v.begin() , v.end());
//    string m{"abcdefghijklmnopqrstuvwxyz"};
//    for(int i{0} ; i<v.size() ; ++i){
//        if (i<(v.size()-1)){
//            if(((v.at(i)*10)+v.at(i+1))<=26 && i<v.size()){
//            int n=((v.at(i)*10)+v.at(i+1));
//            cout<<m.at(n-1);
//            i=i+1;
//            }else{
//                cout<<m.at(v.at(i)-1);
//                }
//            }else{
//                cout<<m.at(v.at(i)-1)<<endl;
//                }
//        }
//    }

















//class Player{
//public:
//    string name{"None"};
//    int age{00};
//    
//    void set_name(string s){
//        name  = s;
//        }
//    void set_age(int k){
//        age = k;
//        }
//    };
//int main(){
//    Player a;
//    Player b;
//    a.set_name("Abhishek");
//    a.set_age(23);
//    b.set_name("Aditya");
//    b.set_age(22);
//    vector<Player> p{};
//    p.push_back(a);
//    p.push_back(b);
//    cout<<"NAME"<<" - "<<"AGE"<<endl;
//    for(auto i : p){
//        cout<<i.name<<" - "<<i.age<<endl;
//        }
//    }



//int main(){
//    string m {};
//    cin>>m;
//    vector<int>vec{};
//    int con{};
//    con = count(m.begin() , m.end() , 'l');
//    vec.push_back(con);
//    con = count(m.begin() , m.end() , 'r');
//    vec.push_back(con);
//    con = count(m.begin() , m.end() , 'u');
//    vec.push_back(con);
//    con = count(m.begin() , m.end() , 'd');
//    vec.push_back(con);
//    int i {0} ; 
//    int t = vec.at(0)<vec.at(1)? vec.at(0) : vec.at(1);
//    int f = vec.at(2)<vec.at(3)? vec.at(2) : vec.at(3);
//    int removal{};
//    while(i < t  ){
//        removal+=2;
//        ++i;
//        }
//    i = 0;
//    while( i< f  ){
//        removal+=2;
//        ++i;
//        }
//    cout<<m.size() - removal<<endl;
//    }












////////////////////////       binary search //////////////////////////////////////


//int binarysearch(vector <int> ar , int m , int k){
//    int s = 0 ;
//    int e = m;
//    while (s >! e){
//        int mid = (s+e)/2;
//        if (ar.at(mid) == k){
//        return mid;
//        }
//        else if (ar.at(mid) > k){
//            e= mid-1;
//            }
//        else if (ar.at(mid) < k){
//            s = mid+1;
//            }
//        }
//    return -1;
//    }
//int main(){
//    int size{};
//    cin>>size;
//    vector<int> arr(size);
//    for (int i {0} ; i<size ; ++i){
//        int num;
//        cin>>num;
//        arr[i] = num;
//        }
//    int key{};
//    cin>>key;
//    sort(arr.begin() , arr.end());
//    cout<<binarysearch(arr , size , key);
//    }








//int main(){
//    int n {20};
//    //cin>>n;
//    int m{1};
//    for(int i{1} ; i<=n ; ++i){
//        for(int j {1} ; j<=n ; ++j){
//            if(j<=(n-i)){
//                cout<<" ";
//                }else{cout<<"*";}
//            }cout<<endl;
//        }
//    }



//
//int main(){
//    int n{};
//    cin>>n;
//    for(int i {1} ; i<=n ; ++i){
//        for(int j {1}; j<=(n-i) ; ++j){
//            cout<<" ";
//            }
//        for(int j {1}; j<=i ; ++j){
//            cout<<j<<" ";
//            }
////        for(int j {1}; j<=(n-i) ; ++j){
////            cout<<" ";
////            }
//        cout<<endl;
//        }
//    }    





//int main(){
//    int n{};
//    cin>>n;
//    for(int i {1} ; i<=n ; ++i){
//        for(int j {1}; j<=(n-i) ; ++j){
//            cout<<" ";
//            }
//        for(int j {1}; j<=i ; ++j){
//            cout<<j<<" ";
//            }
////        for(int j {1}; j<=(n-i) ; ++j){
////            cout<<" ";
////            }
//        cout<<endl;
//        }
//    }    






//int main(){
//    int n{};
//    cin>>n;
//    for(int i {1} ; i<=n ; ++i){
//        int k{i};
//        for(int j {1}; j<=n ; ++j){
//            if (j <= (n-i)){
//                cout<<" "<<" ";   
//                }else{
//                    cout<<k<<" ";
//                    --k;
//                    }
//            }
//        if (i > 1 ){
//            int l {i};
//            int p{2};
//            for(int j {1} ; j<=l-1 ; ++j){
//                cout<<p<<" ";
//                ++p;
//                }
//            }
//        cout<<endl;
//        }
//    }    











//int main(){
//    int n{};
//    cin>>n;
//    for (int i {1} ; i<=n ; ++i){
//        for(int j{1} ; j<=n ; ++j){
//            if(j <= (n-i)){
//                cout<<" "<<" ";
//                }else{
//                    cout<<"*"<<" ";
//                    }
//            }
//        if (i > 1){
//            int l{i};
//            for(int j{1} ; j<=l-1 ; ++j){
//               cout<<"*"<<" "; 
//            }
//            }
//        cout<<endl;
//        }
//    for (int i {n} ; i>=1 ; --i){
//        int g {n};
//        for(int j{1} ; j<=n ; ++j){
//            if ((i+j) <= g){
//                cout<<" "<<" "; 
//                }else{cout<<"*"<<" ";}
//            }
//        for(int j{i} ; j>1 ; --j){
//               cout<<"*"<<" "; 
//            }
//        cout<<endl;
//        }
//    }    


//
//int main(){
//    int size{5};
////    cin>>size;
//    int arr[size]{1,2,3,7,5};
////    for(int i {0} ; i<size ; ++i){
////        int num{};
////        cin>>num;
////        arr[i] = num;
////        }  
//    int key{12};
////    cin>>key;
//    int s{};
//    int e{};
//    vector<int> vec{};
//    for (int i {0} ; i<size-1 ; ++i){
//        int sum {arr[i]};
//        s= i;
//        for(int j{i+1} ; j<size ; ++j){
//            e= j;
//            sum+=arr[j];
//            if (sum == key){
//                cout<<j<<" ";
////                int k {};
////                for(int j {s} ; j<=e  ; ++j){
////                    k = (k*10)+arr[j];
////                    }
////                vec.push_back(k);
//                break;
//                }
//            }
//        
//        }
//    for(auto i : vec)
//        cout<<i<<" ";
//    }














//
//
//void checksubstring(vector <string> &s){
//    for(int i {0} ; i<s.size() ; ++i){
//        deque<char>d{};
//        for(int j {0} ; j<s.at(i).size() ; ++j){
//            d.push_back(s.at(i).at(j));
//            }
//        for(int j{0} ; j<s.at(i).size() ; ++j){
//            char a = d.front();
//            char b  = d.back();
//            if (a == b){
//                d.pop_front();
//                d.pop_back();
//                }else{
//                    vector<string>::iterator r;
//                    r = find(s.begin() , s.end() , s.at(i));
//                    s.erase(r);
//                }
//            }
//        }
//    }
//int main(){
//    string m {};
//    cin>>m;
//    vector<string>vstr{};
//    for (int i {0} ; i<m.size() ; ++i){
//        string g{};
//        int t  = count (m.begin() , m.end() , m.at(i));
//        if (t>1){
//            string::iterator t; 
//            t  = find(m.begin()+(i+1) , m.end() , m.at(i));
//            int k {};
//            if (t!=m.end()){
//                k = t-m.begin();
//                }
//            for(int j {i} ; j<=k ; ++j){
//                g+=m.at(j);
//                }
//            }
//        if (g.size()>0){
//            vstr.push_back(g);
//            }
//        }
//    checksubstring(vstr);
//    int a= vstr.at(0).size();
//    string w{vstr.at(0)};
//    for(auto i : vstr){
////        cout<<i<<endl;
////        }
//        if (i.size() >= a){
//            w = i;
//            }
//        }cout<<w<<endl;
//        
//    }











//int main(){
//    int row{};
//    cin>>row;
//    {
//    int i {1};
//    while (i<=row){
//        int j{1};
//        while (j<=row){
//            if ((i+j)<=row){
//                cout<<" "<<" ";
//                }else{
//                    cout<<"*"<<" ";
//                    }
//            ++j;
//            }
//        int k = 1;
//        while (k <= (i-1)){
//            if (i>1){
//                cout<<"*"<<" ";
//                }
//            ++k;
//            }
//        cout<<endl;
//        ++i;
//        }    
//    }
//    {
//    int i {row-1};
//    while (i>=1){
//        int j{1};
//        while (j<=row){
//            if ((i+j)<=row){
//                cout<<" "<<" ";
//                }else{
//                    cout<<"*"<<" ";
//                    }
//            ++j;
//            }
//        int k = 1;
//        while (k <= (i-1)){
//            cout<<"*"<<" ";
//            ++k;
//            }
//        cout<<endl;
//        --i;
//        }
//    }
//    
//    }