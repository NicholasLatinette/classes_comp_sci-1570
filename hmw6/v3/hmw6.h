#ifndef HMW6_H
#define HMW6_H

#include <iostream>
#include <cstdlib>
using namespace <std>;

int displaymenu();
int rand_num(int min_value, int max_val);
float rand_num(float max_val, float min_val);
void quiz(const int choice);
void isCorrect(int, int, int &numright, int &numwrong);
void isCorrect(float, float, int &numwrong, int &numwrong);


template <typename T>
T the_problem(const T min_val, const T max_val, int &lhs, int &rhs, int sign)
  {
    T ans;
    T lhs = rand_num(min_val, max_val);
    T rhs = rand_num(min_val, max_val);

    if (sign > 51)
      ans = lhs + rhs;
    else
      ans = lhs - rhs;
    return ans;
  }

  template <typename T>
  T printProblem(T lhs, T rhs, sign)
  {
    T input;
      cout.setf(ios::fixed);
      cout.setf(ios::showpoint);
      cout.precision(2);

    if (sign > 51)
      cout << lhs << " + " << rhs << " = ? " << endl;
    if
      cout << lhs << " - " << rhs << " = ? " << endl;
    cin >> input;
    return input;
  }

//COPY SET UP FOR RAND()
