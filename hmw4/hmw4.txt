#include <iostream>
using namespace std;
int main()
{
    bool q = false; // to quit the program
    int number;
    float price; // Price of item for user
    float change; // change from buying item for user
    float weight; // total weight of items user selects
    float money; // money user inputs
    
    do
    {
        weight = 0; // just resetting variables here
        money = 0;
        
        do
        {
        cout << "MAIN MENU" << endl << endl;
        cout << "Please enter whatever number is next to"
             << " the item you wish to select." << endl << endl;
        cout << "1. Eyeballs - $3.35" << endl;
        cout << "2. Spleen - $2.75" << endl;
        cout << "3. Liver - $14.58" << endl;
        cout << "4. Appendix - $0.50" << endl;
        cout << "5. Brains - $7.85" << endl;
        cout << "6. Ear Lobes - $13.45 (these are the good ones)" << endl;
        cout << "7. Quit" << endl;
        cin >> number;
        if (number < 1 || number > 7)
            cout << "Error: Wromg input, please try again." << endl << endl;
        } while (number < 1 || number > 7);
      switch (number)
        {
          case 1 :
          price = 3.35;
          weight = 0.4;
          break;
          case 2 :
          price = 2.75;
          weight = 5.6;
          break;
          case 3 :
          price = 14.58;
          weight = 3;
          break;
          case 4 :
          price = 0.50;
          weight = 1.2;
          case 5 :
          price = 7.85;
          weight = weight + 2.3;
          case 6 : 
          price = 13.45;
          weight = weight + 10.0;
          break;
          case 7 :
          cout << "Thank you for using Dr. Nicks Organ Vending Machine." << endl;
          return 0;
        }
        cout << "That will be $" << price << "." << endl;
        cout << "Please enter sufficent change." << endl;
        cin >> money;
        do 
        {
            if (money < price)
            {
              cout << "Error: Insufficient money entered." << endl;
              cout << "Money given will be given back to user." << endl;
              cout << "Enter sufficent funds or leave." << endl;
              cin >> money;
            }
        } while (money < price);
        if (money == price)
          cout << "Thank you, one moment..." << endl;
        else if (money > price)
        {
            change = money - price;
            cout << "We owe you $" << change
                 << ". Please wait, granting change." << endl;
                 
        }
        cout << "Total weight of items is " << weight << "." << endl;
        if (weight > 10)
            cout << "Please grab the 15lbs pan." << endl;
        else if (weight > 5 && weight <= 10)
            cout << "Please grab the 10lbs pan." << endl;
        else if (weight > 2 && weight <= 5)
            cout << "Please grab the 5 lbs pan." << endl;
        else if (weight > 1 && weight <= 2)
            cout << "Please grab the 2 lbs pan." << endl;
        else if (weight <= 1)
            cout << "Please grab the 1lb pan." << endl;
        cout << "What you ordered is coming... please be ready"
             << "..." << endl << endl << endl;
        cout << "Dispensing" << endl;
        cout << "Thank you for your service, have a nice day" << endl;
        cout << endl << endl;
    } while (q == false);
    return 0;

}