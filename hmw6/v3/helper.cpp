#include "hmw6.h"

 typeproblem()
  {
    int num;
    num = rand() % 100 + 1;
    return num;
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

 void quiz(const int choice)//perhaps not void
    {
      int numright = 0, numwrong = 0, lhs, rhs;
      for (i = 0; i == 10; i++)
      {
        switch (choice)
        {
          case 1:
            {
              int answer, sign, input;
              int min_value = 1;
              int max_value = 10;
              sign = typeproblem();


              answer = the_problem(min_value, max_value, lhs, rhs, sign);
              input = printProblem(lhs, rhs, sign);
              void isCorrect(answer, input, numright, numwrong);
              void displayFinalResults(numright, numwrong);


            }
          break;
          case 2:
            {
              int answer, sign, input;
              int min_value = 00;
              int max_value = 99;
              sign = typeproblem();

             answer = the_problem(min_value, max_value, lhs, rhs, sign);
             input = printProblem(lhs, rhs, sign);
             void isCorrect(answer, input, numright, numwrong);

           }
          break;
          case 3:
          {
             int sign;
             float answer, input;
             float min_value = 0;
             float max_value = 9999;

             sign = typeproblem();
             answer = the_problem(min_value, max_value, lhs, rhs, sign);
             input = printProblem(lhs, rhs, sign);
             void isCorrect(answer, input, numright, numwrong);
           }
          break;
          default:
          cout << "Hold." << endl;
        }
      }
    return;
    }

 void isCorrect(int answer, int input, int &numright, int &numwrong)
  {
    if (input == answer)
      {
        cout << "Good Job!"
        numright++
      }
      else
       {
         cout << "Try again" << endl;
         numwrong++;
         cin >> input;
         if (input == answer)
           {
             cout << "Nice save!" << endl;
             numright++;
           }
         else
           {
             cout << "Maximum tries reached, moving to next question." << endl;
             numwrong++;
           }
       }
       return;
    }

 void isCorrect(float answer, float input, int &numright, int &numwrong)
   {
     if (input == answer)
       {
         cout << "Good Job!"
         numright++
       }
       else
        {
          cout << "Try again" << endl;
          numwrong++;
          cin >> input;
          if (input == answer)
            {
              cout << "Nice save!" << endl;
              numright++;
            }
          else
            {
              cout << "Maximum tries reached, moving to next question." << endl;
              numwrong++;
            }
        }
        return;
    }

 int rand_num(int min_val, int max_val) //90% sure correct
  {
    int num;
    num = (min_val * rand() + max_val) % max_val;

    return num;
  }

  float rand_num(float min_val, max_val) //90% sure correct
    {
      float num;
      num = ((min_val * rand() + max_val) % max_val) / 100;

      return num;
    }
