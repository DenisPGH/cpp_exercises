
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stdlib.h> 

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
    //print_arr(arr, size_arr); // test if reading works

    // find closest number 
    int first_num = 0;
    int second_num = 0;
    int diff = INT16_MAX;
    for (int x = 0; x < size_arr; ++x) {
        for (int y = 0; y < size_arr; ++y) {
            int diff_current = abs(arr[x] - arr[y]);
            if ( diff_current< diff && arr[x] != arr[y]) { first_num = arr[x]; second_num = arr[y]; diff=diff_current; }
        }
        


    }

    //cout<< "num a: " << first_num << " , " << "   num b: " << second_num<< "  diff : " << diff << endl; 
    cout << diff << endl;
    return 0;
}

