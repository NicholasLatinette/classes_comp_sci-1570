//Name: Nicholas Latinette
//Date: 10/7/2019
//Files: hmw6.cpp hmw6funct.cpp


// Don't forget to seperate out the files for this assignment (eg header file,)
//(int main file, and after main file).
#ifndef HMW6_H
#define HMW6_H

#include <iostream>
#include <cstdlib>
using namespace std;


float rand_num(float min_value, float max_value);

int rand_num(int min_value, int max_value);

int displaymenu();
void quiz(int);

template <typename T>
T displayProblem(const T lhs,const T rhs, int sign)
  {
    T ans;
    if (sign = 1)
      {
        ans = lhs + rhs;
        cout << lhs << " + " << rhs << " = ? " << endl;
      }
    else
      {
        ans = lhs - rhs;
        cout << lhs << " - " << rhs << " = ? " << endl;
      }
    return ans;
  }

  template <typename T>
  void isCorrect(const T correct, const T answer, int &numright, int &numwrong)  // for if the thing that the user inputted is actually correct
    {
      T retry;
      bool check = false;
      do
      {
        if (answer == correct)
          {
            cout << "Good job!" << endl;
            check = true;
             numright++;
          }
        else
          {
            cout << "Wrong answer." << endl;
            check = false;
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

  template <typename T>
  void the_problem(const T min_value, const T max_value,int &numright,int &numwrong)
    {
      T lhs = rand_num(min_value, max_value);
      T rhs = rand_num(min_value, max_value);

      T answer;  // whatever answer user enters
      T correct; // true answer to whatever problem is
      int sign;  // random sign appointed

      sign = rand() % 100 + 1;
      if (sign < 51)
        sign = 1;
      else
        sign = 0;

      correct = displayProblem(lhs, rhs, sign);
      cin >> answer;
      isCorrect(correct, answer, &numright, &numwrong);


      return;
    }

//required functions

//int rand_num(int, int);
//float rand_num(float, float);

//int displaymenu;
//isCorrect;
//displayMessage;
//displayFinalResults;

#endif
