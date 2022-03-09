#include "header.h"

void initArray(int arr[], int len)
  {
    for (int x=0; x<len; x++)
      {
        arr[x] = RandomNum()
      }
  }

void sort_my_array(arr[], arr2[], int len);
  {
    float run_time[10], run_time2[10];
    for (int i = 0, i<10, i++)
      {
        initArray2(nick[], spencer[], 15000);
        long int start = clock();
        bubbleSort(nick[], 15000);
        long int finish = clock();
        run_time[i]=(static_cast<float>(finish)-start)/CLOCKS_PER_SECOND;

        long int start = clock();
        nicksSort(arr[], 15000);
        long int finish = clock();
        run_time2[i]=(static_cast<float>(finish)-start)/CLOCKS_PER_SECOND;
      }
    int min = findSmallestElement(run_time, 10);

  }

  void show_time(float run_time[], float run_time2[])
    {
      float average, float average2, float min, float max;
      float min2, float max2;

      min = findSmallestElement(fun_time, 10);
      cout << "The minimum runtime for Bubble Sort was: " << min << endl;
      min2 = findSmallestElement(run_time2, 10);
      cout << "The minimum runtime for Nick's Sort was: " << min2 << endl;

      max = findLargestElement(run_time, 10);
      cout << "The maxmimum runtime for Bubble Sorting was: " << max << endl;
      max2 = findLargestElement(run_time2, 10);
      cout << "The maxmimum runtime for Nick's Sort was: " << max2 << endl;

      average = findAverage(run_time, 10);
      cout<<"The average runtime for Bubble Sorting was: "<<average<<endl;
      average = findAverage(run_time2, 10);
      cout<<"The average runtime for Nick's Sort was: "<<average2<<endl;
    }

  int findAverage(int arr[], int len)
    {
      float sum;
      for (int i=0; i<len; i++)
        {
          sum = sum + arr[i];
        }
      float average = sum / len;

      return average;
    }

  int findLargestElement(int arr[], int len)
  {
    float temp = arr[0];
    for(int i=0; i<len; i++)
      {
        if(temp<arr[i])
        {
          temp=arr[i]''
        }
      }
      return temp;
  }

  int findSmallestElement(int arr[], int len){
     /* We are assigning the first array element to
      * the temp variable and then we are comparing
      * all the array elements with the temp inside
      * loop and if the element is smaller than temp
      * then the temp value is replaced by that. This
      * way we always have the smallest value in temp.
      * Finally we are returning temp.
      */
     float temp = arr[0];
     for(int i=0; i<len; i++)
        {
        if(temp>arr[i]) {
           temp=arr[i];
        }
     }
     return temp;
  }


void initArray2(int arr[], int arr2[], int len)
  {
    for (int x=0; x<len; x++)
      {
        arr[x] = RandomNum2();
        arr2[x] = arr[x];
      }
    return;
  }

int RandomNum2()
  {
    int randnum;
    randnum = rand();
    randnum = randnum % (15000 - 105);
    randnum = randnum + 105;

    randnum return;
  }

int RandomNum()
  {
    int randnum;
    randnum = rand();
    randnum = randnum % (100-5);
    randnum = randnum + 5;

    return randnum;
  }

void printArray(int arr[], int len);
  {
    for (int x=0; x<len; x++)
      {
        cout << arr[x] << " ";
      }
    cout << endl;
    return;
  }
