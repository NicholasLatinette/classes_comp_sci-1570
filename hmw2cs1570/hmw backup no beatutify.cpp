#include <iostream>

using namespace std;

int main()
{
  int D; // Dosage
  int Age; // Age
  int IQ; // IQ
  int freq; // pills per day
  int Gen; // Gender
  float Wt; // Weight of User
  const short DNC = 20; // Constant
  const short TS = 250; // Tablet Strength
  
  cout << "Hello! Please enter the following information: " << endl;
  cout << "Age: " << endl;
  cin >> Age;
  cout << "IQ: " << endl;
  cin >> IQ;
  cout << "Please enter the Number of Pills Used Each Day: " << endl;
  cin >> freq;
  cout << "Thanks, now please enter the Gender, 0 - Female and 1 - Male: " << endl;
  cin >> Gen;
  cout << "Almost done, now just enter the weight (in kg): " << endl;
  cin >> Wt;
  cout << "    " << endl;
  cout << "    " << endl;
  cout << "Dr. Nick, for the inputs: " << endl;
      cout << "    Age: " << Age << endl;
      cout << "    Weight: " << Wt << endl;
      cout << "    IQ: " << IQ << endl;
      cout << "    Gender: " << Gen << "  (1 -> male, 0 -> female)" << endl;
      cout << "    Frequency of Pills is: " << freq << endl;
      cout << "    Tablet Strength is: " << TS << endl;
      cout << "                 " << endl;
	
  D = (static_cast<float>(Age) / IQ) * ((Wt / static_cast<float>(freq)) + 1) * ((static_cast<float>(TS) / 1000) + Gen) + DNC;
  cout << "The recommended Dosage is: " << D << endl;
  
  return 0;
}
