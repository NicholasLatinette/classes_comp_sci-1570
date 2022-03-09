#include "hmw6.h"

int main()
  {
    bool quit = false;
    int choice;
    srand (time(NULL));
    do
    {
      choice = displaymenu();
      quiz(choice);
      if (choice == 4)
        quit = true;
    }
    while (quit == false);




    return 0;
  }
