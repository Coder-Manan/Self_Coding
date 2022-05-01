#include <iostream>

using namespace std;
int arr[] = {120,43,32,54,33,30};
void sort(int start, int end){
    if (start < end){
        int mid = (start + end) / 2;
        sort(start, mid);
        sort(mid + 1, end);
        merge(start, mid, end);
    }
}
void merge(int start, int mid, int end){

}
int main(){
    sort(0, 5);
}