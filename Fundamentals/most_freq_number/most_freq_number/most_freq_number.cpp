
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int* store_arr(int arr[], int len) {
    for (int i = 0; i != len; ++i) {
        int x; cin >> x;
        cout << x << endl;
        arr[i] = x;
    }
    return arr;

}

void print_arr(int arr[],int size) {
    for (int i = 0; i<size; ++i) {
        cout<< " number of index: "<<i <<" is "<< arr[i] << endl;
    }
}

int* read_number(int arr[],int size){
    string numbers; cin >> numbers;
    //cout << "len str= " << numbers.length() << endl;
    for (auto& x:numbers) {
        cout << x << endl; 
    }
    return arr;

}

int main()
{
    int size_arr; cin >> size_arr;
    int* arr = new int[size_arr];
    for (int i = 0; i < size_arr; ++i) {
        cin >> arr[i];
        //cout << " num = " << arr[i];
    }
   
    //cout << "size of array = " << size_arr<< endl;
    //int* res=store_arr(arr, size_arr);
    //string numbers; cin >> numbers;
    //cout << "len str= " << numbers.length() << endl;
    

    //cout << "array ist = " << *res << endl;
    print_arr(arr,size_arr);

    
    
    return 0;
}

