#include <iostream>
using namespace std;

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

void error_message();

string morse(char val1);

string ascii(char val1);

void change_case();

bool option_handler(char val1, char, bool);
//Description: Takes the input that was returned in the
//present_menu() function and makes decisions from there.
//Will be able to return true or false depending on whether
//the user chose to quit the program. It needs to be passed
//the character (option) that was chosen from the menu,
//needs to communicate back to its calling function the
//value of the alphabetic character the user enters for
//translation (think reference parameter), and it needs
//to know whether or not a character has indeed been
//entered for translation
//Precondtion: A character (I think, double check)
//Post-Condition: Takes returned value from present_menu
//and outputs the approiate function or reads if the
//user wanted to quit the program and does so

//^option_handler() description and postcondition temp

void goodbye();
//Description: The goodbye() function outputs a farewell message to the screen
//Precondition: None
//Post-Condition: Output farewell message to the screen

int main ()
{
    char input = ' ';
    bool option1_chosen = false;

    greetings();
    do
    {
      option = present_menu();
      if (option == 1) {
         option1_chosen = true;
      }
      bool quit = option_handler(option, input, option1_chosen);

    }
    while (quit == false);
    goodbye();
    return 0;
}

void change_case(char alpha) //conditions not written
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
{
    cout << "Hello, welcome to my program" << endl << endl;
    //change later
    return;
}


int present_menu() //char?
{
    int option;
    cout << "     TRANSLATE" << endl;
    cout << "     ---------" << endl << endl;
    cout << "1. Enter a character" << endl;
    cout << "2. Morse code equivalent" << endl;
    cout << "3. ASCII value" << endl;
    cout << "4. Change Case" << endl;
    cout << "5. Kwit" << endl << endl;
    cout << "Please enter your option" << endl; //CHANGE LATER FOR CLARITY
    cin >> option;

    return option;
}

bool option_handler(char val1, char alpha, bool option1_chosen)
{
  bool quit = false;
  {
    switch(option)
    {
        case 1:
          alpha = get_input_from_user(option);
          option1_chosen = true;
          break;
        case 2:
          if (option1_chosen == true)
            morse(alpha);
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
          cout << "Invalid Option" << endl;
          break;
    }
  }
  return quit;
}

void change_case()
{
    char new_letter; //what will be outputted to user



    return;
}

void error_message()
{
    cout << "Error: Not a valid character" << endl;
    return;
}


string ascii(char alpha)
  {
      switch(alpha)
      {

      }
      //^for uppercase
  }


string morse(char alpha)
{
  // Morse Table available online
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
  return 0; // possiblibly not needed
}

char get_input_from_user(int val1)  //needs decription
{
    char alpha;
    bool wrong = false;

    do
    {
      if (option == 1)
      {
        cout << "What character would you like to use?" << endl;
        cin >> alpha;
        ascii(alpha);
        if (static_cast<int>(alpha == 5))
          error_message();
        else
           wrong = true;
      }
    } while (!wrong);
    return alpha;
}



void goodbye()
{
    cout << "Thank you for using my program" << endl;
    // change later
    return;
}
