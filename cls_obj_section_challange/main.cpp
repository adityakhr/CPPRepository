#include <iostream>
using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watched;
public:
    Movie(string s = "None", string a = "None", int b = 0)
    :name{s} , rating {a}  , watched{b}{
        
        }
    void  add(string s , string a , int b){
        name = s;
        rating = a;
        watched = b;
        
        }
    void display_movie(){
    return name;
    }
};


int main(){
    
    Movie my_movie;
    my_movie.add("avengers" , "5-star" , 5 );
    cout<<my_movie.display_movie()<<endl;
    }