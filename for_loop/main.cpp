#include <iostream>
using namespace std;
int  main() {
//    for (int i{1}; i<=100; i+=9)
//        cout<<i<<endl;
//       for( int i{10}; i>0; --i)
//           cout<<i<<endl;
//      for(int i{100}; i<=1000; ++i)
//        if(i%100==0)
//          cout<<i<<endl;
//        
//    for(int i{1}; i<=1000; ++i)
//        cout<<i<<((i%10==0)? "\n":" ");
      int sum{0};
      for(int i{1};i<=15;++i)
          if (i%2 ==0)
//              cout<<i<<endl;
      sum = sum + i;
       cout<<sum<<endl;
}