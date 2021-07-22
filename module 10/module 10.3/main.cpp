#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class tolwr{
    char* str;
    //istream extraction operator ' >> ' Overloading as Global Functions
	friend istream & operator>>(istream & in,tolwr &);
	//ostream insertion operator ' << ' Overloading as Global Functions
	friend  ostream &operator<<( ostream &os,tolwr &);
public:

// No-args constructor
    tolwr()
    {}

//Overloaded constructor
    tolwr(const char* s)

     {
        str = new char[ strlen(s) + 1];
        strcpy(str,s);
    }

// Copy constructor
tolwr(const tolwr& source)
    {
    str = new char[ strlen(source.str) + 1];
    strcpy(str,source.str);
}
//Moev Constructor
// tolwr(tolwr&& source) noexcept
//     :str{ source.str } {
//     }
//Copy Assignment Overloading
tolwr &operator=(const tolwr& rhs)
{
    if (this == &rhs) {
        return *this;
    }
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

//Move Assignment Overloading
// tolwr& operator=(tolwr&& rhs) noexcept {
//     if (this == &rhs) { return *this; }
//     delete[] str;
//     str = rhs.str;
//     rhs.str = nullptr;
//     return *this;
// }
// Destructor
    ~tolwr() {

    delete[] str;
}
};
//ostream insertion operator ' << ' Overloading as Global Functions
 ostream& operator<<( ostream &os,tolwr &rhs){
	os << rhs.str;
	return os;
}

//istream extraction operator ' >> ' Overloading as Global Functions
 istream &operator>>( istream &in,tolwr &rhs){
     char* temp= new char[15];
    in>>temp;
    rhs.str=new char[strlen(temp)+1];
    strcpy(rhs.str,temp);
    delete []temp;
	return in;
    }

int main(){
    tolwr k1("Mr.");
	tolwr k2("DP");
	tolwr k3;

	cout << "Enter the last Name: \n";
	cin >> k3;
	cout << "the name is: " << k1 << " "<< k2 << " " << k3 << endl;

	cout << "Enter the new name as first name,middle name,last names separated by a space: \n" << endl;
	cin >> k1 >> k2 >> k3;

	cout << " New name is given by: " <<   k1 << " "<< k2 << " "  << k3 << endl;
    return 0;
}

