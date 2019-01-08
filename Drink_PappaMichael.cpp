// Offer user choice of 5 different Drinks (1-Coke, 2-Sprite,3-Water, etc) 
//Have user choose drink by selecting a number 1-5 and output to the screen 
//which beverage they chose. If they choose a number not on the list, have the 
//program output "That's an incorrect selection. Here is your money back."

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int choice;
    
    
    cout << "Choose A Drink \n";
    cout << "\n 1-Coke \n 2-Sprite \n 3-Water \n 4-Dr. Pepper \n 5-Kool-Aid \n" ;
    cin >> choice;
    
    
    if( choice == 1)
    {
    cout<< "You Have Chosen Coke \n";
    }
    
    if( choice == 2)
    {
    cout<< "You Have Chosen Sprite \n";
    }
    
    if( choice == 3)
    {
    cout<< "You Have Chosen Water \n";
    }
    
    if( choice == 4)
    {
    cout<< "You Have Chosen Dr. Pepper \n";
    }
    
    if( choice == 5)
    {
    cout<< "You Have Chosen Kool-Aid \n";
    }
    
    if( choice > 5)
    {
    cout<< "That's an incorrect selection. Here is your money back. \n";
    }
    
    system("pause \n");

}
