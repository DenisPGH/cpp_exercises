
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

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
    // read and store into array
    int size_arr; cin >> size_arr;
    int* arr = new int[size_arr];
    for (int i = 0; i < size_arr; ++i) {
        cin >> arr[i];
        //cout << " num = " << arr[i];
    }
    // create new unordered map
    unordered_map<int, int> number_count;

    // store numbers and values
    for (int i = 0; i < size_arr; ++i) {
        number_count[arr[i]] += 1;
        
    }

    // find most one
    vector<int> most_numbers;
    int most_num_value = 0;
    int most_num_key = 0;
    for (auto& y : number_count) {
        if (y.second >= most_num_value) {
            most_num_value = y.second; 
            most_num_key = y.first;
            most_numbers.push_back(y.first);
            
        }


        //cout << "key: " << y.first << " value: " << y.second << endl;
    }
    


    /*cout << "The number " << most_num_key << " is the most frequent (occurs " << most_num_value << " times)"<< endl;*/
    
    // sort the result and print
    /*for (int& x : most_numbers) {
        if (x < most_num_value) { most_numbers.erase(x); }
    }*/
    sort(most_numbers.begin(), most_numbers.end());

    
    for (auto& k : most_numbers) {
        //cout << " all most: " << k<< endl;
        if (number_count[k] == most_num_value) {
            cout << k << " ";
        }
 
    }
    



   
    //cout << "size of array = " << size_arr<< endl;
    //int* res=store_arr(arr, size_arr);
    //string numbers; cin >> numbers;
    //cout << "len str= " << numbers.length() << endl;
    

    //cout << "array ist = " << *res << endl;
    //print_arr(arr,size_arr);

    
    
    return 0;
}

