#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_set>
#include <cmath>
#include <deque>
#include <stack>
#include <queue>
using namespace std;


//int main(){
//    vector <string> coffee{ "Espresso Coffee" , "Cappuccino Coffee" , "Latte Coffee" };
//    vector <string> tea{ "Plain Tea" , "Assam Tea" , "Ginger Tea" , "Cardamom Tea" , "Masala Tea" , "Lemon Tea" , "Green Tea" , "Organic Darjeeling Tea" };
//    vector <string> soups { "Hot and Sour Soup"  , "Veg Corn Soup" , "Tomato Soup" , "Spicy Tomato Soup" };
//    vector <string> beverages { "Hot Chocolate Drink" , "Badam Drink" , "Badam-Pista Drink" };
//    cout<<
//    "Coffee\n\n"
//    "1. Espresso Coffee\n"
//    "2. Cappuccino Coffee\n"
//    "3. Latte Coffee\n\n"
//    "Tea\n\n"
//    "1. Plain Tea\n"
//    "2. Assam Tea\n"
//    "3. Ginger Tea\n"
//    "4. Cardamom Tea\n"
//    "5. Masala Tea\n"
//    "6. Lemon Tea\n"
//    "7. Green Tea\n"
//    "8. Organic Darjeeling Tea\n\n"
//    "Soups\n\n"
//    "1. Hot and Sour Soup\n"
//    "2. Veg Corn Soup\n"
//    "3. Tomato Soup\n"
//    "4. Spicy Tomato Soup\n\n"
//    "Beverages\n\n"
//    "1. Hot Chocolate Drink\n"
//    "2. Badam Drink\n"
//    "3. Badam-Pista Drink\n\n"
//    <<endl;
//    
//    char sel_char{};
//    cin>>sel_char;
//    sel_char = ::toupper(sel_char);
//    if (sel_char == 'C'|| sel_char == 'T'|| sel_char == 'S'|| sel_char == 'B'){
//        if (sel_char == 'C'){
//            int a{};
//            cin>>a;
//            if(a == 1 || a == 2 || a == 3  ){
//                cout<<"Welcome to CCD!\nEnjoy your "<<coffee.at(a-1)<<"."<<endl;
//                }else {
//                    cout<<"invalid input.\n";
//                    }
//            }
//        else if (sel_char == 'T'){
//            int a{};
//            cin>>a;
//            if(a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6 || a == 7 || a == 8 ){
//                cout<<"Welcome to CCD!\nEnjoy your "<<tea.at(a-1)<<"."<<endl;
//                }else {
//                    cout<<"invalid input.\n";
//                    }
//            }
//        else if (sel_char == 'S'){
//            int a{};
//            cin>>a;
//            if(a == 1 || a == 2 || a == 3 || a == 4 ){
//                cout<<"Welcome to CCD!\nEnjoy your "<<soups.at(a-1)<<"."<<endl;
//                }else {
//                    cout<<"invalid input.\n";
//                    }
//            }
//        else if (sel_char == 'B'){
//            int a{};
//            cin>>a;
//            if(a == 1 || a == 2 || a == 3 ){
//                cout<<"Welcome to CCD!\nEnjoy your "<<beverages.at(a-1)<<"."<<endl;
//                }else {
//                    cout<<"invalid input.\n";
//                    }
//            }
//        }else{
//            cout<<"Invalid input.\n";
//            }
//    
//    }













//int main(){
//    int row {};
//    cin>>row;
//    int col{};
//    cin>>col;
//    int sum[col];
//    int arr[row][col];
//    for (int i{0} ; i<row ; ++i){
//        int large{};
//        for(int j{0} ; j<col ; ++j){
//            int num{};
//            cin>>num;
//            large+=num;
//            arr[i][j]=num;
//            }
//        sum[i]=large;
//        }
//        
//    int high=sum[0];
//    int number_of_row{};
//    for(int i{0} ; i<row ; ++i){
//        if(high<sum[i]){
//            high = sum[i];
//            number_of_row = i+1;
//            }
//        }
//    cout<<"Row "<<number_of_row<<" has lagest sum of all : "<<high<<endl;
//    }














//int main(){
//    int time_in_hour {};
//    cin>>time_in_hour;
//    
//    int arriving[time_in_hour];
//    int leaving [time_in_hour];
//    int max_num[time_in_hour];
//    
//    for(int i{0} ; i<time_in_hour ; ++i){
//        int num{};
//        int nu{};
//        cout<<"Entry "<<i+1<<" hour: ";
//        cin>>num;
//        arriving[i]=num;
//        cout<<"Exit "<<i+1<<" hour: ";
//        cin>>nu;
//        leaving[i]=nu;
//        }
//    int arriving_sum {0};
//    for(int i{0} ; i<time_in_hour ; ++i){
//            arriving_sum+=arriving[i];
//            arriving_sum=(arriving_sum - leaving[i]);
//            max_num[i] = arriving_sum;
//            }
//    int maximum = max_num[0];
//    for(auto i : max_num){
//        if(maximum<i){
//            maximum = i;
//            }
//        }
//    cout<<"Maximum number of guests on cruise at an instance: "<<maximum<<endl;
//    }








//int main(){
//    
//    int total_candies{};
//    cout<<"Enter the number of candies in jar: ";
//    cin>>total_candies;
//    int minimum_candies{};
//    cout<<"Enter the minimum limit of candies that jar should always has: ";
//    cin>>minimum_candies;
//    if (minimum_candies<total_candies){
//        int sold{};
//        cout<<"Enter the number of candies you want to buy: ";
//        cin>>sold;
//        if (sold>=1 && sold<total_candies && (total_candies-sold>=minimum_candies)){
//            cout<<"Number of candies SOLD: "<<sold<<endl;
//            cout<<"Number of candies LEFT: "<<total_candies-sold<<endl;
//            }else{
//                cout<<"Invalid input!\n";
//                cout<<"Number of candies LEFT: "<<total_candies<<endl;
//                }
//                }else {cout <<"Invalid input!\n";}
//}









//int main(){
//    int num_of_trainee {3};
//    int num_of_rounds{3};
//    int oxigen[num_of_trainee][num_of_rounds];
//    int oxi_arr[num_of_trainee];
//    for(int i {0} ; i<num_of_trainee ; ++i){
//        for(int j{0} ; j<num_of_rounds; ++j){
//            int num{};
//            cin>>num;
//            oxigen[j][i] = num;
//            }
//        }
//    for(int i {0} ; i<num_of_trainee ; ++i){
//        int total_oxigen{};
//        for(int j{0} ; j<num_of_rounds; ++j){
//            total_oxigen += oxigen[i][j];
//            }
//        int average = round(total_oxigen/num_of_rounds);
//        oxi_arr[i] = average;
//        }
//    int highest_oxigen_level=oxi_arr[0];
//    cout<<"\n\n+++++++++++++\n"<<highest_oxigen_level<<"\n+++++++++++++++\n\n";
//    for(int i {0} ; i<num_of_trainee ; ++i){
//        if(highest_oxigen_level == oxi_arr[i]){
//            cout<<"Trainee number: "<<i+1<<endl;
//            }
//        }
//    }









//void calculate_time(double a ){
//    if (a==0){
//        cout<<"Time Estimate is : 0 minutes.\n";
//        }
//    else if(a>0 && a<=2000){
//        cout<<"Time Estimate is : 25 minutes.\n";
//        }
//    else if(a>2000 && a<=4000){
//        cout<<"Time Estimate is : 35 minutes.\n";
//        }
//    else if(a>4000 && a<=7000){
//        cout<<"Time Estimate is : 45 minutes.\n";
//        }
//    }
//int main(){
//    int weight_in_grams{};
//    cin>>weight_in_grams;
//    if(weight_in_grams<=7000 && weight_in_grams>=0){
//        calculate_time(weight_in_grams);
//        }else{
//            cout<<"Sorry! invalid input.";
//            }
//    }




 



//double total_cost(double a , double b){
//     return (a*18)+(b*12);
//    }
//
//
//int main(){
//    int interior_wall{};
//    cin>>interior_wall;
//    int exterior_wall{};
//    cin>>exterior_wall;
//    double interior_wall_area [interior_wall];
//    double exterior_wall_area [exterior_wall];
//    for (int i {0} ; i<interior_wall ; ++i){
//        double area{};
//        cout<<"Enter the "<<(i+1)<<" interior wall area in square feet: ";
//        cin>>area;
//        interior_wall_area[i] = area;
//        }
//    for (int i {0} ; i<exterior_wall ; ++i){
//        double area{};
//        cout<<"Enter the "<<(i+1)<<" exterior wall area in square feet: ";
//        cin>>area;
//        exterior_wall_area[i] = area;
//        }
//    double total_interior_area{};
//    double total_exterior_area{};
//    for(auto i  : interior_wall_area ){
//        total_interior_area+=i;
//        }
//    for(auto i  : exterior_wall_area ){
//        total_exterior_area+=i;
//        }
//    cout<<"Total coast for painting all walls is : "<<total_cost(total_interior_area, total_exterior_area)<<" INR"<<endl;
//}





//string to_upper(string &a){
//    for (auto &i : a){
//        i = toupper(i);
//        }
//    return a;
//    }
//void get_fare(string s , string d){
//    array<string , 8> arrc{ "TH" , "GA" , "IC" , "HA" , "TE" , "LU" , "NI" , "CA" };
//    array<long long int , 8> arrd { 800 , 600 , 750 , 900 , 1400 , 1200 , 1100 , 1500 };
//    double a_metre_price{.005};
//    int value_of_i{};
//    int value_of_j{};
//    int total_distance{};
//    array<string , 8>::iterator t;
//    array<string , 8>::iterator k;
//    if( s == d ){
//        cout<<"Invalid Input, Sorry!\n";
//        }
//        else{
//            t = find(arrc.begin() , arrc.end() , s );
//            if(t!= arrc.end()){
//                value_of_i = t-arrc.begin();
//                }
//            k = find(arrc.begin() , arrc.end() , d );
//            if(k!= arrc.end()){
//                value_of_j = k-arrc.begin();
//                }
//            int p = value_of_i+1;
//            while (p != value_of_j){
//                total_distance += arrd[p];
//                ++p;
//                if (p>=8){
//                    p%=8;
//                }
//            }
//            cout<<ceil(total_distance*a_metre_price)<<" INR"<<endl;
//        }
//}
//
//int main(){
//    string source{};
//    cin>>source;
//    string destiny{};
//    cin>>destiny;
//    source = to_upper(source);
//    destiny = to_upper(destiny);
//    get_fare(source , destiny);
//    }









//int main(){
//    int monkey{};
//    cout<<"Enter the total number of monkeys: ";
//    cin>>monkey;
//    int banana{};
//    cout<<"Enter the number of bananas eaten by single monkey: ";
//    cin>>banana;
//    int penut{};
//    cout<<"Enter the number of penuts eaten by a single monkey: ";
//    cin>>penut;
//    int total_banana{};
//    cout<<"Enter the total number of bananas: ";
//    cin>>total_banana;
//    int total_penut{};
//    cout<<"Enter the total number of penuts: ";
//    cin>>total_penut;
//    if (monkey>0 && total_banana>0 && total_penut>0 && banana>0 && penut>0 ){
//        for(int i{1} ; i<=(monkey) ; ++i){
//                if(total_banana>total_penut){
//                    total_banana-=banana;
//                    }else{
//                        total_penut-=penut;
//                        }
//                --monkey;
//                if(total_banana<banana && total_penut<penut){
//                    if (total_banana>0 || total_penut>0){
//                        --monkey;
//                        if(total_banana>total_penut){
//                            total_banana-=banana;
//                            }else{
//                                total_penut-=penut;
//                                }
//                        }
//                        else{
//                            cout<<"Remaining number of monkeys on tree is: "<<monkey<<endl;
//                            break;}
//                    }
//                }
//        }
//        else{
//                cout<<"Invalid Input.\n";
//                }
//    
//    }










//int main() {
//    vector <string> member {"None"};
//    string name{};
//    cout<<"Enter the name of the member: ";
//    cin>>name;
//    double total_commission{500};
//    member.at(0) = name;
//    char selection{};
//    cout<<"Does "<<member.at(0)<<" have child member (Y/N): ";
//    cin>>selection;
//    selection = ::toupper(selection);
//    if(selection == 'Y' || selection == 'N' ){
//        if(selection =='Y'){
//            int a{};
//            cout<<"How many child member does "<<member.at(0)<<" have: ";
//            cin>>a;
//            cout<<"Enter the names with space separation\n";
//            for(int i {1} ; i<=a ; ++i){
//                string child {};
//                cin>>child;
//                member.push_back(child);
//                total_commission+=250;
//                }
//            }else{
//                cout<<"Okay! thankyou.\n";
//                }
//        }else{
//            cout<<"Invalid Input, Sorry!\n";
//            }
//            
//    for (auto &i : member){
//        for (int j {0} ; j<i.size() ; ++j){
//            i.at(j) = toupper(i.at(j));
//            }
//        }
//    
//    
//    int s = member.size();
//    cout<<"+++++++++++++++++++++++++++++\nTotal Member: "<<s<<endl;
//    cout<<"Commission details:-\n";
//    if(s>1){
//        cout<<member.at(0)<<": "<<(5000* (.10))*(s-1)<<endl;
//        }else{
//            cout<<member.at(0)<<": "<<(5000* (.05))<<endl;
//            }
//    for(int i{1} ; i<s ; ++i){
//        cout<<member.at(i)<<": "<<(5000*(.05))<<endl;
//        }
//    
//    } 





//void remove_duplicate(int arr1[]){
//    set <int> set1{};
//    for(int i{0} ; i< 8 ; ++i){
//        set1.insert(arr1[i]);
//        }
//    int k = 0;
//    for(auto x : set1){
//        arr1[k++] = x;
//        cout<<arr1[k++]<<" ";
//        }
//    cout<<endl;
//    }
//
//int main () {
//    int arr[] {1 , 1 , 2 , 2 , 3, 3 , 4 , 4};
//    remove_duplicate(arr);
//    }

//int main() {
//    vector <int> arr {};
//    int s{1};
//    for(int i{0} ; i < 4 ; ++i){
//        int num{};
//        cin>>num;
//        arr.push_back(num);
//        s = s*(arr.at(i));
//        }
//    cout<<s<<endl;
//    int num2 {};
//    cin>>num2;
//    int num3{};
//    cin>>num3;
//    int num1 = pow( num2 , num3 );
//    cout<<num1<<endl;
//    }





//bool check(int a){
//    if (a > 0 ){
//        return true;
//        }else{
//            return false;
//            }
//    }
//
//void prime(int b){
//    int count{0};
//    for (int i{1} ; i<=b ; ++i){
//        if (b%i == 0){
//            ++count;
//            }
//        }
//    if (count == 2){
//        cout<<b<<" is a prime number.\n";
//        }else{cout<<b<<" isn't a prime number.\n";}
//
//    if (b <=9 && b>0){cout<<b<<" is a natural number.\n";}
//    else{cout<<b<<" isn't a natural number.\n";}
//    }
//
//
//int main(){
//    int num {};
//    cin>>num;
//    bool ch = false;
//    ch = check(num);
//    if (ch){
//        prime(num);
//        }
//        else{cout<<"Invalid Input\n";}
//    }



//
//int  main(){
//    int num{};
//    cin>>num;
//    
//    if (num%2 != 0){
//        
//        }
//    }

//
//
//
//int main (){
//    int size{};
//    cin>>size;
//    int arr[size];
//    vector<int> s {};
//    int num = floor (size/2);
//    if (size >0){
//        for (int i {0} ; i<size ; ++i){
//            cin>>arr[i];
//            }
//        for(auto i : arr){
//             if (i>num){
//                 s.push_back(i);
//                 }
//             }
//        for(int i {0} ; i<s.size() ; ++i){
//            int k = s.at(i) ;
//            int num = ::count(s.begin() , s.end() , k);
//            cout<<s.at(i)<<" which occurs "<<num<<" times which is greater than 3/2.\n";
//            vector<int>::iterator t;
//            t = find(s.begin(), s.end() , k);
//            s.erase(t);
//            }
//        }else {
//            cout<<"Invalid Input.\n";
//            }
//    }





//int main(){
//    int size{};
//    cin>>size;
//    vector <char> colours;
//    for (int i{0} ; i <size ; ++i){
//        char k{};
//        cin>>k;
//        colours.push_back(k);
//        }
//    for (int i {0} ; i<size ; ++i){
//        int count{1};
//        for(int j{i+1} ; j<size ; ++j){
//                if (colours.at(i) == colours.at(j)){
//                    ++count;
//                    char s = colours.at(j);
//                    vector <char> ::iterator t ; 
//                    t = find(colours.begin()+j , colours.end() , s );
//                    colours.erase(t);
//                }
//            }
//        cout<<colours[i]<<": "<<count<<endl;
//        }
//    }








//int main(){
//    int size{};
//    cin>>size;
//    int arr[size]{};
//    int i{0};
//    for(int j{0} ; j<size ; ++j){
//        cin>>arr[i];
//        if (arr[i] != 0){
//            ++i;
//            }
//        }
//    for(auto i : arr){
//        cout<<i<<" ";
//        }
//    cout<<endl;
//    }





//
//
//void square_root(int a){
//    int k = pow(a,(1/2));
//    cout<<k<<endl;
//    }
//int main(){
//    int num{};
//    cin>>num;
////    int k{0};
////    int h{0};
////    int arr[]{1,2,3,4,5,6};
////    for(int i{0} ; i<6 ; ++i){
////        for (int j {i+1} ; j<6 ; ++j){
////            if ( (arr[i] + arr[j]) == num){
////                k = i;
////                h = j;
////                }
////            }
////        }
////    cout<<"The values are: "<<arr[k]<<" "<<arr[h]<<endl;
//
//
//    square_root(num);
//
//    }





//void check(/*string*/ int  s){
    
//    stack <char> d{};
//    int t = s.size();
//    for(int i {0} ; i< t ; ++i){
//        char  k = s.at(i);
//        d.push(k);
//        }
//    int u = d.size();
//    for(auto i: s ){
//        if (i == d.top()){
//            d.pop();
//            }
//        }
//    if(d.size() == 0){
//        cout<<"It's a palindrome.\n";
//        }else{cout<<"Not a palindrome.\n";}
//    long long int k = s;
//    long long int n{0};
//    long long int r{0};
//    while (k != 0){
//        r = k%10;
//        n = (n*10)+r;
//        k/=10;
//        }
//    if (n == s){
//        cout<<"It's a palindrome.\n";
//        }else{cout<<"Not a palindrome.\n";}
//    }
//
//
//
//int main(){
//    //string name {};;
//    long long int name{};
//    cin>>name;
//    if (name>0){
//        check(name);
//        }else {cout<<"Invalid input.\n";}
//    
//    }





//void check(long long int a){
//    long long int s = a;
//    long long int n{};
//    int power{0};
//    while (s!=0){
//        s /= 10;
//        ++power;
//        }
//    long long int t = a;
//    while (t!=0){
//        long long int r = t%10;
//        n+=(::pow(r , power));
//        t /= 10;
//        }
//    if (n == a){
//        cout<<"It's a armstrong number.\n";
//        }else{cout<<"No it's not.\n";}
//    }
//int main(){
//    long long int num{};
//    cin>>num;
//    if(num>0){
//        check(num);
//        }else{cout<<"Invalid input.\n";}
//    }






//void replace(string s[]){
//    for(int i{0} ; i< 3 ; ++i){
//        if (i==0){
//            //string k = (s[i]);
//            int t = (s[i]).size();
//            for(int j {0} ; j<t ; ++j){
//                (s[i]).at(j) = ::tolower((s[i]).at(j));
//                if ((s[i]).at(j) == 'a' || (s[i]).at(j) == 'e' || (s[i]).at(j) == 'i' || (s[i]).at(j) == 'o' || (s[i]).at(j) == 'u'){
//                    (s[i]).at(j)= '*';
//                    } 
//                }
//            }
//        else if (i==1){
//            //string k = (s[i]);
//            int t = (s[i]).size();
//            for(int j {0} ; j<t ; ++j){
//                (s[i]).at(j) = ::tolower((s[i]).at(j));
//                if ((s[i]).at(j) != 'a' && (s[i]).at(j) != 'e' && (s[i]).at(j) != 'i' && (s[i]).at(j) != 'o' && (s[i]).at(j) != 'u'){
//                     (s[i]).at(j) = '@';
//                    } else{
//                        (s[i]).at(j);
//                        }
//                }
//            }
//        else if (i==2){
//            //string k = (s[i]);
//            int t = (s[i]).size();
//            for(int j {0} ; j<t ; ++j){
//                (s[i]).at(j) = ::toupper((s[i]).at(j));
//                
//                }
//            }
//        cout<<s[i]<<" ";
//        }
//    
//    }
//
//
//int main(){
//    string arr[3]{};
//    for(int i{0} ; i<3 ; ++i){
//        cin>>arr[i];
//        }
//    replace(arr);
//    }








//
//void find_difference(long long int num){
//    int even{};
//    int odd{};
//    while(num!=0){
//        long long int r = num%10 ;
//        if (r%2 == 0){
//            even+=r;
//            }else{
//                odd+=r;
//                }
//        num/=10;
//        }
//    cout<<"Difference: "<<odd-even<<endl;
//    }
//
//int main(){
//    long long int num{};
//    cin>>num;
//    if (num>0 && num<= pow(10 , 100)){
//        find_difference(num);
//        }else {cout<<"Invalid input.\n";}
//    }


  
  
  
  
  
//int main(){
//    int num{};
//    cin>>num;
//    int store{0};
//    stack <int > s{};
//    stack<int> s1{};
//    int j{0};
//    while (num!=0){
//        int r = num%2;
//        num/=2;
//        s.push(r);
//        ++j;
//        }
//    for(int i{0} ; i<j ; ++i){
//        cout<<s.top()<<" ";
//        s1.push(s.top());
//        s.pop();
//        }
//    cout<<endl;
//    for(int i{j-1} ; i>=0 ; --i){
//        int t = s1.top();
//        int u = pow(2,i);
//        store+=(t*u);
//        s1.pop();
//        }
//    cout<<store<<endl;
//}









//int main(){
//    string day{};
//    vector <string> days{"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
//    cin>>day;
//    int num_days{};
//    cin>>num_days;
//    int count{0};
//    vector<string>::iterator t;
//    t = find(days.begin() , days.end() , day);
//    if (t!=days.end()){
//        int a = t - days.begin();
//        int j{0};
//        int i{a};
//        while(j  != num_days){
//            if (days.at(i) == "sunday"){
//                ++count;
//                }
//            ++i;
//            if (i>6){
//                i = i%6;
//                }
//            ++j;
//            }
//        }else{cout<<"Invalid input\n";}
//    cout<<count<<endl;
//    }









//int main(){
//    int size {};
//    cin>>size;
//    vector <int> arr{};
//    for (int i {0} ; i<size ; ++i){
//        int num{};
//        cin>>num;
//        arr.push_back(num);
//        }
//    sort(arr.begin() , arr.end());
//    for(auto i : arr){
//        cout<<i<<" ";
//        }
//    }









//int main(){
//    int l{};
//    cin>>l;
//    char str1[l][l];
//    for(int i{0} ; i<l ; ++i){
//        for (int j{0} ; j<l ; ++j){
//            char k{};
//            cin>>k;
//            if(::isalpha(k)){
//                str1[i][j] = k;
//                }else{cout<<"invalid input";
//                return 0;
//                }
//            }
//        }
//    vector <int> max{};
//    for(int i{0} ; i<l ; ++i){
//        int count{};
//        for (int j{0} ; j<l ; ++j){
//            if (str1[i][j] == 'a'){
//                ++count;
//                }
//            }
//        max.push_back(count);
//        }
//    sort(max.begin(), max.end());
//    cout<<max.at(0)<<endl;
//}









//int main(){
//    /*vector <char> */ string name {/*'r' , 'g' , 'b' , 'b' , 'g' , 'y' , 'y'*/};
//    getline(cin ,name);
//    for (int i {0} ; i < name.size() ; ++i){
//        /*vector<char>*/string ::iterator t;
//        int count{1};
//        for (int j {i+1} ; j<name.size() ; ++j){
//            if (name.at(i) ==name.at(j)){
//                ++count;
//                t = find(name.begin()+j , name.end() , name.at(j));
//                name.erase(t);
//               }
//            }
//        cout<<name.at(i)<<" : "<<count<<endl;
////        if (count%2 != 0){
////            cout<<name.at(i)<<" : "<<count<<endl;
////            return 0;
////            }
//        }
//    }
















//int main(){
//    int size{};
//    cin>>size;
//    vector <char> name {};
//    for (int i {0} ; i < size ; ++i){
//        char r{};
//        cin>>r;
//        name.push_back(r);
//        }
//    for (int i {0} ; i < name.size() ; ++i){
//        vector<char> ::iterator t;
//        int count{1};
//        for (int j {i+1} ; j<name.size() ; ++j){
//            if (name.at(i) ==name.at(j)){
//                char k = name.at(j);
//                ++count;
//                t = find( name.begin()+j , name.end() , k );
//                name.erase(t);
//               }
//            }
//        cout<<name.at(i)<<": "<<count<<endl;
////        if (count%2 != 0){
////            cout<<name.at(i)<<" : "<<count<<endl;
////            return 0;
////            }
//        }
//    }










//int main(){
//    string num{};
//    getline(cin , num);
//    for (int i {0} ; i < num.size() ; ++i){
//        string ::iterator t;
//        int count{1};
//        for (int j {i+1} ; j<num.size() ; ++j){
//            if (num.at(i) == num.at(j)){
//                char k = num.at(j);
//                ++count;
//                t = find( num.begin()+j , num.end() , k );
//                num.erase(t);
//               }
//            }
////        cout<<num.at(i)<<": "<<count<<endl;
//        if (count%2 != 0){
//            if (count > 2){
//                count /= 2;
//                }
//            cout<<num.at(i)<<": "<<count<<endl;
////            return 0;
//            }
//    }
//}










//int main(){
//    string a{};
//    getline(cin , a);
//    int vowel_count{};
//    int consonant_count{};
//    int space_count{};
//    for(int i{0} ; i <a.size() ; ++i){
//        char c = tolower(a.at(i));
//        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
//            ++vowel_count;
//            }
//        else if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != ' ' ){
//            ++consonant_count;
//            }
//        else if(c == ' '){
//            ++space_count;
//            }
//        
//        }
//    cout<<"vowel count: "<<vowel_count<<endl<<"consonant count: "<<consonant_count<<endl<<"space count: "<<space_count<<endl; 
//    }
    
    
    
    
    
    
    
    
    
    
//int main(){
//    string name_1{};
//    string name_2 {};
//    cin>>name_1>>name_2;
//    for (int i {0} ; i<name_2.size(); ++i ){
//        string::iterator t;
//        for(int j {0} ; j<name_1.size() ; ++j){
//            if (name_2.at(i) == name_1.at(j)){
//                t = find(name_1.begin() , name_1.end() , name_1.at(j));
//                name_1.erase(t);
//                --j;
//                }
//            }
//        }
//    if (name_1.size() == 0){
//        cout<<"All alphas mathced and removed.\n";
//        }
//        else{
//            cout<<name_1<<endl;
//            }
//}







//
//int main(){
//    vector <char> v{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//    int key;
//    int pos;
//    cin>>pos;
//    cin>>key;
//    int i{pos+key};
//    if(key>0 && pos>=0 && pos+key<26){
//        while(i != (pos+(key-1))){
//        cout<<v.at(i)<<" ";
//        ++i;
//        if (i>=26){
//            i %= 26;
//            }
//        }
//        cout<<v.at(i)<<endl;
//        }else {cout<<"Inavalid input.\n";}
//}











//int main(){
//    int size;
//    cin>>size;
//    vector <char> vec;
//    for (int  i {0} ; i<size ; ++i){
//        char c {};
//        cin>>c;
//        vec.push_back(c);
//        }
//    for(int i{0}  ; i<vec.size() ; ++i){
//        vector<char>::iterator t;
//        int count = 0;
//        count = ::count(vec.begin() , vec.end() ,vec.at(i)); 
//        for(int j {i+1} ; j<vec.size() ; ++j){
//            if (vec.at(i) == vec.at(j)){
//                t = find(vec.begin()+(i+1) , vec.end() , vec.at(j));
//                vec.erase(t);
//                --j;
//                }
//            }
//        //if(count%2 != 0){
//            cout<<vec.at(i)<<": "<<count/*%2*/<<endl;
//         //   }
//        }
//    }
    
    
    
    
//int main(){
//    vector<int> array{1,2,3,4,5,6,7,8,9};
//    vector<int> ::iterator t;
//    t =find (array.begin() , array.end() , 5 );
//    int a{};
//    if (t!= array.end()){
//        a = t-array.begin();
//        cout<< a<<endl;
//        }//else{cout<<"Not found\n";}
//    
//    }
    
    
    
    
    
    
    
    
    
    
//int main(){
//    string name{};
//    getline (cin , name);
//    for (int i {0} ; i <name.size() ; ++i){
//        string::iterator t;
//        string::iterator t1;
//        for (int j {i+1} ; j<name.size() ; ++j){
//            if (name.at(i) == name.at(j)){
//                t = find(name.begin()+(i+1) , name.end() , name.at(j));
//                t1 = find(name.begin() , name.end() , name.at(i));
//                name.erase(t);
//                name.erase(t1);
//                --j;
//                if(i>1){
//                    --i;
//                    }
//                }
//            }
//        }
//    cout<<name<<endl;
//    }











int main(){
    string x {};
    string y{};
    cin>>x>>y;
    vector<int>ans{};
    for (int i{0} ; i<y.size() ; ++i){
        int count1{};
        int count2{};
        count1 = count( x.begin() , x.end() , x.at(i));
        count2 = count( y.begin() , y.end() , x.at(i));
        if (count1 == count2){
            ans.push_back(1);
            }else{
                ans.push_back(0);
                }
        }
    int sum{};
    for(auto i : ans){
        if (i == 1){
            ++sum;
            }
        }
    if (sum == ans.size()){
        cout<<"Yes\n";
        }else{cout<<"No\n";}
    }