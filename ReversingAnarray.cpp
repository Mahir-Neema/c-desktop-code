#include<iostream>
using namespace std;

void reverseArray(int arr[], int s, int e){
    if(s>=e){
        return;
    }

    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    reverseArray(arr,s+1,e-1);

}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
 

int main(){

    int arr[] = {1,2,3,4,5,6};

    reverseArray(arr,0,5);
    cout<<"reverse array is "<<endl;
    printArray(arr,6);


    return 0;
}