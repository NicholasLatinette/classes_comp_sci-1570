#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

void initArray(int arr[], int len);
void printArray(int arr[], int len);
void sort_my_array(arr[], arr2[], int len)


template <typename T)
void swap(T &a, T &b)
{
    T temp = a
    a = b;
    b = temp;
    return;
}

template <typename T>
void nicksSort(T arr[], int size)
  {
   int i, j, indexmin;
   for(i = 0; i<size-1; i++)
   {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[indexmin])
            imin = j;
         //placing in correct position
         swap(array[i], array[indexmin]);
   }
   return;
 }

 void bubbleSort(T arr[], int n)
 {
     int i, j;
     for (i = 0; i < n-1; i++)

     // Last i elements are already in place
     for (j = 0; j < n-i-1; j++)
         if (arr[j] > arr[j+1])
             swap(&arr[j], &arr[j+1]);
 }


 #endif HEADER_H
