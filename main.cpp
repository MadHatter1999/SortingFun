#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <utility>
#include <fstream>
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
    for (i = 0; i < size-1; i++){
        for (j = 0; j < size-i-1; j++){
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
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
void copyArray(int arrOne[],int arrTwo[],int length){
    int OneLength=(sizeof(arrOne[0])/ sizeof(arrOne));
    int TwoLength=(sizeof(arrTwo[0])/ sizeof(arrTwo));
    if(OneLength==TwoLength){
        for (int i = 0; i < length; ++i) {
            arrTwo[i]=arrOne[i];
        }
    }
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
///
/// \param arr
/// \param size
/// \param time
/// \param sort
void outputToFile(int arr[],int size,int time,string sort){
    ofstream file;
    file.open(sort+".txt",ios_base::app);

    for (int i = 0; i < size; ++i) {
        file<<" "<<arr[i]<<" ";
    }
    file<<"\n"<<" Time: "<<time<<"\n";
    file<<" Size: "<< size<<"\n";
    file<<"\n";
    file.close();

}
///
/// \return
int input(){
    int number;
    cout<<"Please input a positive int: "<<endl;
    cin>>number;
    return number;
}
///
///0=bubble 1=selection 2=insertion 3=shell 4=quick 5=radix
/// \param array
/// \param size
/// \param mode
/// \return
int getTime(int array[],int size,int mode){
    int duration;
    auto start = chrono::high_resolution_clock::now();
    switch(mode){
        case 0:
            bubbleSort(array,size);
            break;
        case 1:
            selectionSort(array,size);
            break;
        case 2:
            insertionSort(array,size);
            break;
        case 3:
            shellSort(array,size);
            break;

    }
    auto finish = chrono::high_resolution_clock::now();
    duration= chrono::duration_cast<chrono::nanoseconds>( finish - start ).count();


    //getting the duration

    return duration;
}
int getTime(int array[],int low,int high,int mode){
    return 0;
}
///
void StartSort(){
    std::srand (time (0));

    const int smallest=1000;
    const int small=2500;
    const int mid=5000;
    const int large=7500;
    const int largest=10000;

    int arrayOne[smallest];
    int arrayTwo[small];
    int arrayThree[mid];
    int arrayFour[large];
    int arrayFive[largest];

    AssignRand(arrayOne,smallest);
    AssignRand(arrayTwo,small);
    AssignRand(arrayThree,mid);
    AssignRand(arrayFour,large);
    AssignRand(arrayFive,largest);


    for (int i = 0; i < 5; ++i) {
        //Declaring the Temp arrays
        int T_arrayOne[smallest];
        int T_arrayTwo[small];
        int T_arrayThree[mid];
        int T_arrayFour[large];
        int T_arrayFive[largest];

        //name of Sort
        string name="";
        //Copying them to the tmp
        copyArray(arrayOne,T_arrayOne,smallest);
        copyArray(arrayTwo,T_arrayTwo,small);
        copyArray(arrayThree,T_arrayThree,mid);
        copyArray(arrayFour,T_arrayFour,large);
        copyArray(arrayFive,T_arrayFive,largest);

        switch(i){
            case 0:
                name="bubble";
                break;
            case 1:
                name="selection";

                break;
            case 2:
                name="insertion";
                break;
            case 3:
                name="shell";
                break;
            case 4:
                name="quick";
                break;
//            case 5:
//                name="radix";
//                break;
            default:
                break;
        }
        outputToFile(T_arrayOne,smallest,getTime(T_arrayOne,smallest,i),name);
        outputToFile(T_arrayTwo,small,getTime(T_arrayTwo,small,i),name);
        outputToFile(T_arrayThree,mid,getTime(T_arrayThree,mid,i),name);
        outputToFile(T_arrayFour,large,getTime(T_arrayFour,large,i),name);
        outputToFile(T_arrayFive,largest,getTime(T_arrayFive,largest,i),name);

    }


    


}
int main() {

StartSort();


}