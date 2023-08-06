#include <iostream>
using namespace std;
main(){
     int scores []{100 , 200 , 30 , 10};
     int *score_ptr{nullptr};
     score_ptr = scores;
     cout<<scores<<endl;
     cout<<score_ptr<<endl;
     cout<<score_ptr[0]<<endl;
     cout<<scores[0]<<endl;
     cout<<score_ptr[1]<<endl;
     cout<<scores[1]<<endl;
     cout<<score_ptr[2]<<endl;
     cout<<scores[2]<<endl;
     cout<<score_ptr[3]<<endl;
     cout<<scores[3]<<endl;
     delete [] score_ptr;
    
     cout<<*score_ptr<<endl;
}