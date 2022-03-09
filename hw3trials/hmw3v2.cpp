//Name: Nicholas Latinette
//Date: 9/11/2019
//File: hmw3.cpp
//Section: B / 102
//Purpose: Create a recepitionist program to replace the recpetionist
//robot for dr. rivera

 
#include <iostream>
  
using namespace std;

 
int
main () 
{
  
string name;			//This will be used to let the patient enter their name
  float money;			//Money user broguht to office, they will input
  short age;			//Age that user will input
  short mal;			//Used to keep track if the user filed a malpractice suit
  short surg;			//Amount of surguries wanted intially
  float surg2;			//Amount of surguries that user could still buy
  float surg3;			//Amount of surguries that user can actually afford
  float total;			//Total potiential cost of wanted surguries 
  char y;			//Possible response from user used to restart program
  char n;			//Possible respons from user used to end program 
  const float price = 129.95;	//used for price of surgury in expression
  char quit;			//Character that controls when the program ends, controlld by char y and char n
  
 
 
cout.setf (ios::fixed);
  
cout.setf (ios::showpoint);
  
cout.precision (2);
  
 
 
  do				//this loop is made so that whenever the program is started, it will continue until someone tells it that there are no more patients left.
    {
      
cout << "Hello! Please enter your name: " << endl;
      
cin >> name;
      
cout << "Hello " << name <<
	", welcome to Dr. Riviera's office. How much money have you brought to the office today?"
	<< endl;
      
cin >> money;
      
if (money == 0)
	
	{
	  
cout <<
	    "Leave the premises immediately... and have a good day. NEXT." <<
	    endl;
	
}
      
      else if (money < price)
	
	{
	  
cout << "Please come back whenever you have at least $" << price <<
	    endl;
	
}
      
      else if (money >= price)
	
	{
	  
cout << "Please enter your age: " << endl;
	  
cin >> age;
	  
if (age < 21)
	    
	    {
	      
cout << "Please leave. You're too young!" << endl;
	    
}
	  
	  else if (age <= 65)
	    
	    {
	      
cout <<
		"Have you ever filed a malpractice suit? (1 for yes, 0 for no)"
		<< endl;
	      
cin >> mal;
	      
if (mal == 1)
		
cout << "I'm sorry, we're closed now!" << endl;
	      
	      else if (mal != 1)
		
		{
		  
cout << "Each surgery will cost $" << price <<
		    ". How many surguries would you like to have " << name <<
		    "?" << endl;
		  
cin >> surg;
		  
total = static_cast < float >(surg) * price;
		  
if (money >= total)	//This is used to calculate the total cost of the amount of surguries a patient wants.
		    {
		      
cout << "That will cost $" << total << "." << endl;
		      
surg2 = (money - total) / price;	//Used to calculate how many surguries/surgury a patient could buy
		      cout << "You could still get " << static_cast <
			short >(surg2) <<
			" more surguries today. Still, come on in!" << endl;
		    
}
		  
		  else if (total < price)
		    
		    {
		      
cout << "Come on in!" << endl;
		    
}
		  
		  else if (money < total)
		    
		    {
		      
surg3 = money / price;	//Used to tell patient how many surguries they can actually buy
		      cout << "Sorry " << name << ", you can only afford " <<
			static_cast <
			short >(surg3) << ". Come on in!" << endl;
		    
}
		
 
}
	    
}
	  else if (age < 100)	//Any patients above the age of 65 will not have to be asked about a malpractice suit, and so they have their own coding block below.
	    {
	      
		// Notes for the programs and coding above. Mainly for the equations used.
		cout << "Each surgery will cost $" << price <<
		". How many surguries would you like to have " << name << "?"
		<< endl;
	      
cin >> surg;
	      
total = static_cast < float >(surg) * price;
	      
if (money >= total)
		
		{
		  
cout << "That will cost " << total << "." << endl;
		  
surg2 = (money - total) / price;
		  
cout << name << " ,you could still get " << static_cast <
		    short >(surg2) << " more surguries today. Come on in!" <<
		    endl;
		
}
	      
	      else if (money < price)
		
		{
		  
cout << "Come on in " << name << "!" << endl;
		
}
	      
	      else if (money < total)
		
		{
		  
surg3 = money / price;
		  
cout << "Sorry " << name << ", you can only afford " <<
		    static_cast <
		    short >(surg3) << ". Still, come on in!" << endl;
		
}
	    
 
}
	
}
      
cout << "Is anyone still there? ('y' for yes, 'n' for no)" << endl;	//This is used to repeat the program until their are no patients left.
      cin >> quit;
      
if (quit == 'y')
	
	{
	  
quit = 1;
	
}
      
      else if (quit == 'n')
	
	{
	  
quit = 0;
	
}
    
}
  
while (quit);
  
 
cout <<
    "Thank you for using the Dr. Nick's recepitionist bot. Please have a great day!"
    << endl;
  
 
return 0;

}

