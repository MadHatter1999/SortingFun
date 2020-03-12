#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
    /// This Gives A randsom
    /// \return
    int GetRandomNumber(){
        int tmp=rand() % 32768;
        return tmp ;
    }

    /// Randomly  assigns numbers
    /// \param array
    /// \param size
    void AssignRand(int array[],int size){
        for (int i = 0; i < size; ++i) {
            int test=GetRandomNumber();
            array[i]=test;
        }
    }

    /// Swap Two Pointers
    /// \param x
    /// \param y
    void swap(int *x,int *y){
        int temp=*x;
        *x=*y;
        *y=temp;
    }

    ///Bubble sort
    /// \param arr
    /// \param size
    void bubbleSort(int arr[], int size){
        int i, j;
        for (i = 0; i < size-1; i++)
            for (j = 0; j < size-i-1; j++)
                if (arr[j] > arr[j+1])
                    swap(&arr[j], &arr[j+1]);
    }
    ///selection Sort
    /// \param arr
    /// \param size
    void selectionSort(int arr[], int size){
        int i, j, min_idx;
        for (i = 0; i < size-1; i++){
            min_idx = i;
            for (j = i+1; j < size; j++){
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            }
            swap(&arr[min_idx], &arr[i]);
        }
    }
    /// Insertion sort
    /// \param arr
    /// \param size
    void insertionSort(int arr[], int size){
        int i,key,j;
        for (i = 1; i < size; i++){
            key = arr[i];
            j = i - 1;
            while (j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }
    }

    /// Shell Sort
    /// \param arr
    /// \param size
    /// \return
    int shellSort(int arr[], int size){
        for (int gap = size/2; gap > 0; gap /= 2){
            for (int i = gap; i < size; i += 1){
                int temp = arr[i];
                int j;
                for (j=i;j>=gap&&arr[j-gap]>temp;j -= gap)
                    arr[j]=arr[j-gap];
                arr[j]=temp;
            }
        }
        return 0;
    }


/// Displays Array
/// \param arr  Array you wanna see printed to terminal
/// \param size Size of Previously mentioned array
void displayArray(int arr[],int size){
    for (int i=0;i<size;++i) {
        if(i==size-1){
            std::cout<<arr[i]<<std::endl;
        }
        else{
            std::cout<<arr[i]<<" ";
        }

    }
}
/// Copys Array One to Array Two
/// \param arrOne
/// \param arrTwo
void copyArray(int arrOne[],int arrTwo[]){
    int OneLength=(sizeof(arrOne[0])/ sizeof(arrOne));
    int TwoLength=(sizeof(arrTwo[0])/ sizeof(arrTwo));
}

/// Partitioning used for pivot
/// \param arr
/// \param low
/// \param high
/// \return
int partition(int arr[],int low,int high){
    int pivot = arr[high]; // pivot
    int i=(low-1);
    for (int j=low; j<=high-1;j++){
        if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

/// Quick sort
/// \param arr
/// \param low
/// \param high
void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main() {
    const int size=10;
    std::srand (time (0));
    int array[size];
    AssignRand(array,size);
    int *arrayTwo=array;
    quickSort(arrayTwo,0,size-1);
    displayArray(array,size);
}
/*
 *
 */