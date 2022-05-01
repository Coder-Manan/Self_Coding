// RADIX SORT
// bucket sort for each digit and place the elements in obtained sorted order in sorted[]
// place back sorted[] elements into arr[] and repeat cycle for all digits

#include <iostream>

using namespace std;

int main(){
    int arr[] = {120,43,32,54,33,30};
    int buckets[10];
    for (int i = 0; i < 10; i++) {
        buckets[i] = 0;
    }
    int l = sizeof(arr)/sizeof(arr[0]);
    int sorted[l];
    int b10 = 1, index;
    for (int i = 1; i < 4; i++) {
        //do bucket sort and place eles in sorted
        //place back eles into arr
        for (int j = 0; j < l; j++) {
            buckets[(arr[j]/b10)%10]++;
        }
        index = 0;
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < l && buckets[j] > 0; k++) {
                if ((arr[k]/b10)%10 == j){
                    buckets[j]--;
                    sorted[index] = arr[k];
                    index++;
                }
            }
        }
        for (int j = 0; j < l; j++){
            arr[j] = sorted[j];
            cout<<sorted[j]<<endl;
        }
        cout<<"cycle complete\n";
        b10*=10;
    }
}
