#ifndef _MYSTRING_H_
#define _MYSTRING_H_
using namespace std;
class Mystring{
private:
    char * str;
public:
    Mystring();
    Mystring(const char * s)
    ~Mystring()
    void display() const;
    int get_length() const;
    };

#endif // _MYSTRING_H_
