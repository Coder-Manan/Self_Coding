#include <iostream>
using namespace std;

int main(){
    int arr[] = {0, 6, 3, 4, 6, 2, 4, 2, 4, 5, 8, 7};
    int l = sizeof(arr)/sizeof(arr[0]);
    int buckets[10];
    for (int i = 0; i < 10; i++){
        buckets[i] = 0;
    }
    for (int i = 0; i < l; i++){
        buckets[arr[i]]++;
    }
    int index = 0;
    for (int i = 0; i < 9; i++)
    {
        if (buckets[i]!=0){
            for (int j = 0; j < buckets[i]; j++){
                arr[index] = i;
                index++;
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout<<arr[i]<<", ";
    }
    
}