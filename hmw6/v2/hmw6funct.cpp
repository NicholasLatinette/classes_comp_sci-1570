#include "hmw6.h"

// rand_num(int, int)
//int num1() //rng from 1 - 10
//{
 // long int v1 = rand () % 10 + 1;
 // return v1;
//}

//int num2() // rng from 1 - 100
 // {
  //  long int v1 = rand() % 100 + 1;
   // return v1;
  //}

//float num3() // rng from 00.00 to 99.00
 // {
  //  cout.setf(ios::fixed);
   // cout.setf(ios::showpoint);
    //cout.precision(2);

   // float a = (rand() % 10000) / 100;
   // return v2;
 // }



void quiz(const int choice)//perhaps not void
    {
      int i=0, numright = 0, numwrong = 0;
      for (i = 0; i == 10; i++)
      {
        switch (choice)
        {
          case 1:
            {
              int min_value = 1;
              int max_value = 10;
              

              the_problem(min_value, max_value, numright, numwrong);

            }
          break;
          case 2:
            {
             

             int min_value = 00;
             int max_value = 99;

             the_problem(min_value, max_value, numright, numwrong);

           }
          break;
          case 3:
          {
             float min_value = 00.00;
             float max_value = 99.99;
             

             the_problem(min_value, max_value, numright, numwrong);
           }
          break;
          default:
          cout << "Hold." << endl;
        }
      }
    return;
    }

int displaymenu()
  {
    int choice;
    cout << "Difficulty Level:" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Moderate" << endl;
    cout << "3. Advanced" << endl;
    cout << "4. Kwit" << endl;
    cin >> choice;

    return choice;
  }


void displayFinalResults(const int numright, const int numwrong)
  {
    cout << "Total number correct: " << numright << "." << endl;
    cout << "Total number incorrect: " << numwrong << "." << endl;

  }

//--------------------------------------------
//template <typename T>
//void the_problem(const T min_val, const T max_value)

  //int sign;
//  int problem;

  //T lhs = rand_num(min_val, max_val);
  //T rhs = rand_num(min_val, max_val);

  //sign = rand() % 100 + 1;
 // if (sign < 51)
   // sign = -;
 // else if (sign < 100)
   // sign = +;
 // else if (sign > 100 | sign < 0)
  //  cout << "Error!" << endl;

//  cout << lhs << " " << sign << " " << rhs << "= ?" << endl;
  //problem = lhs sign rhs;

//}

  int rand_num(int min_value, int max_value) //90% sure correct
    {
      int num;
      num = (min_value * rand() + max_value) % max_value;

      return num;
    }

  float rand_num(float min_value, float max_value) //90% sure correct
    {
      float num;
      num = (rand() % 10000) / 100;

      return num;
    }





// What do I have to do?
//Each play will be 10 qs
//User must be persented a assignment
