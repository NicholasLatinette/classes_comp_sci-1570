//Name: Nicholas Latinette
//Date: 10/2/2019
//Instructor: Doris Brown
//File: hmw5.cpp

#include <iostream>
using namespace std;

//*Above Main and Prototypes*

void greetings();
//Description: The greeting() function outputs a greeting to the screen
//Precondition: None
//Post-Condition: Output greeting to the screen

int present_menu();
//Description: The present_menu() function outputs a menu to the screen,
//gathers input from user, and returns a character reflecting the user's
//choice, but has no parameters.
//Precondition: UNKNOWN for now
//Post-Condition: Outputs menu to the screen, gathers input,
//and returns a character that reflects the users choice

char get_input_from_user(int val1);
//Description: The get_input_from_user() function outputs a question
//to the screen asking for the character that the using will be using.
//Also checks that the character is none of the forbidden inputs (i.e. 5)
//and loops the function until the user enters an approiate intput.
//Precondition: In order for this function to work, it needs an int
//value that has already been previously declared. The int value is
//always option in this function.
//Post-Condition: The function

void error_message();
//Description: The error_message() function outputs
//a general error message to the screen.
//Precondition: While technically, there are no parameters,
//the user must actually get themselves to the error function
//thorugh a bad choice of inputs.
//Post-Condition: Outputs a general error message
//to the screen.

string morse(char val1);
//Description: The morse() function outputs the
//morse code equivalent of a character to the
//screen.
//Precondition: A character is needed to be properly
//entered into the function.
//Postcondition: Returns a string of characters that
//represents the morse equivalent of a character to
//the screen. It Also returns it to the option_handler
//to be outputted to the function.

void ascii(char val1);
//Description: The ascii() function outputs the
//ASCII equivalent of whatever legal character
//the user inputs to the screen.
//Precondtion: In order for this function to work,
//A character must be already identified and passed
//into the Function
//Postcondition: Outputs the ASCII equivalent
//of whatever legal character the user inputs
//to the screen. This function returns nothing.

void change_case(char val1);
//Description: The change_case() function Outputs
//the equivalent letter that the user entered to the screen
//, but in the oppisite case (either upper to
//lower or lower to upper).
//Precondition: In order for this function to work,
//A character must already be identified and passed
//into the function.
//Postcondition: Outputs the equivalent letter
//that the user entered to the screen, but in
//the oppisite case. Nothing is returned.

bool option_handler(int option, char &alpha, bool &option1_chosen); //option was char
//Description: This function handles all options that
//the user has access to. It contains many functions already
//listed. The main point of this function in main however is
//to tell when its int main's time to quit. This function
//returns a value that will stop the function from looping
//but only once the user selects that value. Otherwise
//This function will keep repeating.
//Precondtion: This function requires that an already defined int
//is available. This function also passes by reference two
//values to main, alpha, which is the character the user
//picks, and option1_chosen, which is a trut value to make sure
//that option one (and therfore a character) has been declared.
//Postcondition: This function, once successfully ran,
//will pass by reference character alpha and option1_chosen,
//critical variables for the entire function to run other functions
//correctly. Also, if the user inputs option 5, it Will
//return a value of a boolean expression, which effectively
//tells int main to stop looping and ends the program.


//^option_handler() description and postcondition temp

void goodbye();
//Description: The goodbye() function
//outputs a farewell message to the screen
//Precondition: None
//Post-Condition: Output farewell message to the screen

//*Int Main and End of Prototypes

int main ()
{
    char input = ' ';
    bool option1_chosen = false;
    bool quit = false;
    int option;

    greetings();
    do
    {
      option = present_menu();
      quit = option_handler(option, input, option1_chosen);

    }
    while (quit == false);
    goodbye();
    return 0;
}

//*End of Int Main and Start of Definintions

void change_case(char alpha)
//^ Used to change the case of the character given by user
   {
      int modify;

      if (isupper(alpha))
      {
      modify = alpha;
      modify = modify + 32;
      cout << static_cast<char>(modify) << endl;
      }
      else
      {
      modify = alpha;
      modify = modify - 32;
      cout << static_cast<char>(modify) << endl;
      }
    return;
  }

void greetings()
//Greeting Function.
{
    cout << "Hello, welcome to the"
         << "Translate-A-Number-3000." << endl << endl;
    return;
}


int present_menu()
//Outputs choices to the screen so user sees choices
{
    int option;
    cout << "     TRANSLATE" << endl;
    cout << "     ---------" << endl << endl;
    cout << "1 Enter a character" << endl;
    cout << "2 Morse code equivalent" << endl;
    cout << "3 ASCII value" << endl;
    cout << "4 Change Case" << endl;
    cout << "5 Kwit" << endl << endl;
    cout << "Please enter the number that corresponds"
         <<  " to the option that you want." << endl;
    cin >> option;

    return option;
}

bool option_handler(int option, char &alpha, bool &option1_chosen) // option was char
//Handles whatever option User choses
{
  bool quit = false;
  {
    switch(option)
    {
        case 1:
            option1_chosen = true;
            alpha = get_input_from_user(option);
          break;
        case 2:
          if (option1_chosen == true)
           cout << morse(alpha) << endl;
          else
            error_message();
          break;
        case 3:
          if (option1_chosen == true)
            ascii(alpha);
          else
            error_message();
          break;
        case 4:
          if (option1_chosen == true)
            change_case(alpha);
          else
            error_message();
          break;
        case 5:
          quit = true;
          break;
        default:
          error_message();
          break;
    }
  }
  return quit;
}


void error_message()
//General Error message
{
    cout << "Error: Not a valid input." << endl;
    return;
}


void ascii(char alpha)
//Converts whatever character entered by the user to ASCII equivalent
  {
      cout << static_cast<int>(alpha) << endl;
      //^for uppercase
  }


string morse(char alpha)
{
  // Morse Table available online
  // Morse Code Function
  switch (alpha)
  {
    case 'a':
       return ".-";
    case 'b':
       return "-...";
    case 'c':
       return "-.-.";
    case 'd':
       return "-..";
    case 'e':
       return ".";
    case 'f':
       return "..-.";
    case 'g':
       return "--.";
    case 'h':
       return "....";
    case 'i':
       return "..";
    case 'j':
       return ".---";
    case 'k':
       return "-.-";
    case 'l':
       return ".-..";
    case 'm':
       return "--";
    case 'n':
       return "-.";
    case 'o':
       return "---";
    case 'p':
       return ".--.";
    case 'q':
       return "--.-";
    case 'r':
       return ".-.";
    case 's':
       return "...";
    case 't':
       return "-";
    case 'u':
       return "..-";
    case 'v':
       return "...-";
    case 'w':
       return ".--";
    case 'x':
       return "-..-";
    case 'y':
       return "-.--";
    case 'z':
       return "--..";
  }
}

char get_input_from_user(int val1)
//^Gathers the input from user
{
    char alpha;
    bool wrong = false;
    int option;
    int modify;

    cout << "What character would you like to use?" << endl;
    cin >> alpha;
    modify = alpha;
    cout << modify << endl;


    while (modify < 65)
    {
        cout << "Error: Wrong character" << endl;
        cout << "Please enter an approiate character" << endl;
        cin >> alpha;
        modify = alpha;
    }
    return alpha;
}


void goodbye()
//Goodbye Function.
{
    cout << "Thanks for using the Translate-"
         << "A-Number-3000." << endl;
    return;
}
