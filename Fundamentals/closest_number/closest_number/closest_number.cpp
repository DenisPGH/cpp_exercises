
#include <iostream>
#include <stdlib.h> 
#include <limits>

using namespace std;

int* store_arr(int arr[], int len) {
    for (int i = 0; i != len; ++i) {
        int x; cin >> x;
        cout << x << endl;
        arr[i] = x;
    }
    return arr;

}

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << " number of index: " << i << " is " << arr[i] << endl;
    }
}



int main()
{
    // read and store into array
    int size_arr; cin >> size_arr;
    int* arr = new int[size_arr];
    for (int i = 0; i < size_arr; ++i) {
        cin >> arr[i];
        //cout << " num = " << arr[i];
    }
   
    int diff = numeric_limits<int>::max();
    bool is = 0;
    for (int x = 0; x < size_arr; ++x) {
        for (int y = 0; y < size_arr; ++y) {
            int diff_current = abs(arr[x] - arr[y]);
            if (size_arr==1) { cout << 0; is = 1; break; }
            else if ( diff_current< diff && x != y) { diff=diff_current; }
        }
        


    }

   if (is ==0){ cout << diff << endl; }
   
    return 0;
}

