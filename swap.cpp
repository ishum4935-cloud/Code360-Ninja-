
#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size)
{
    for(int i=0; i<size; i+=2)
    {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
    int even[8] = {5,2,5,4,6,7,8,9};
    int odd[5] = {11,33,7,5,9};

    swapAlternate(even, 8);
    printArray(even, 8);
    
    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}
