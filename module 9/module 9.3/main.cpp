#include <iostream>
#include <cstring>
#include<cctype>
using namespace std;

class tolwr{
    char* str;
public:

// No-args constructor
    tolwr()

     {

    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
    tolwr(const char* s)

   {

    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[strlen(s) + 1];
        strcpy(str,s);
    }
}
// Destructor
    ~tolwr() {

    delete[] str;
}
//Unary - Operator's Overloading for Making LowerCase
    tolwr operator-()  {
    char* buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i = 0; i < strlen(buff); ++i) {
        buff[i] = tolower(buff[i]);
    }
    tolwr temp( buff );
    delete[] buff;
    return temp;
}

//display
void display() const {
    cout << str << " : " << get_length() << endl;
}

// length getter
int get_length() const { return strlen(str); }
};

int main(){
    tolwr k1("Dharmik");
    cout << "Original String: ";
    k1.display();

    tolwr k2 = -k1;
    cout << "\n String after Using Overloaded Unary '-' Operator: \n" << endl;
    k2.display();
    return 0;
}
