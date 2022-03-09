//Name: Nicholas Latinette
//Date: 10/7/2019
//Files: hmw6.cpp hmw6funct.cpp


// Don't forget to seperate out the files for this assignment (eg header file,)
//(int main file, and after main file).
#ifndef HMW6_H
#define HMW6_H

#include <iostream>
#include <cstdlib>
using namespace <std>;

template <typename T>
 the_problem(const T min_val, const T max_val)
  {
    T lhs = rand_num(min_val, max_val);
    T rhs = rand_num(min_val, max_val);

  }

template <typename T>
void isCorrect(const T correct, const T answer, int &numright, int &numwrong)  // for if the thing that the user inputted is actually correct
  {
    T retry;
    do
    {
    bool check = false;
    if (answer == correct)
    {
      cout << "Good job!" << endl;
      check = true;
      numright++;
    }
    else
    {
      cout << "Wrong answer." << endl;
      check = false
      numwrong++;
      cout << "Try one more time: " << endl;
      cin << retry;
      if (retry == correct)
        {
          cout << "Nice save!" << endl;
          check = true;
          numright++;
        }
       else
        {
          cout << "Max tries reached, moving to next question." << endl;
          check = true;
          numwrong++;
        }
    }
  }
  while (check = false);
  return;
  }

//required functions
my_rng();
srand(time(NULL));
srand;
srand;

int rand_num(int, int);
float rand_num(float, float);

int displaymenu;
isCorrect;
displayMessage;
displayFinalResults;

#endif HMW6_H
