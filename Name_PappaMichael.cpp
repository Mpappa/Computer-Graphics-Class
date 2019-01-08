//Ask for first and last name seperately and then print name with vowels replaced by "x"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string fname;
    string lname;
    
    cout << "Enter Your First Name: " << endl;
    cin >> fname; 
    
    cout << "Enter Your Last Name: " << endl;
    cin >> lname; 
    
    string s = fname + " " + lname; 
    
    replace( s.begin(), s.end(), 'a', 'x'); 
    replace( s.begin(), s.end(), 'e', 'x');
    replace( s.begin(), s.end(), 'i', 'x');
    replace( s.begin(), s.end(), 'o', 'x');
    replace( s.begin(), s.end(), 'u', 'x');
    
    cout << "Hello " << s << ", Welcome! \n" ;
    
    
    system("pause");
}
