#include <iostream>
#include <cstring>
#include "Mystring.h"
using namespace std;

Mystring::Mystring()
:str{nullptr}
{
    str =new char[1];
    str ='\0';
}

Mystring::~Mystring()
{
}

