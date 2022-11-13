

#include <iostream>
using namespace std;

double average(int arr[],int len_) {
    double aver_num = 0;
    for (int r = 0; r < len_; r++) {
        aver_num+=arr[r];

    }
    return (aver_num / len_);

}

void printNum(int arr[],int len_) {
    int average_number = average(arr, len_);
    for (int r = 0; r < len_; r++) {
        if (arr[r] >= average_number) {
        cout << arr[r] << " "; }

    }
}


int main()
{
    int len; cin >> len;
    int arr[9];
    for (int i = 0; i < len; i++) {
        cin >> arr[i];

    }


    printNum(arr, len);
}

