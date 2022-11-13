
#include <iostream>
using namespace std;

bool areEqual(int arr1[], int length1, int arr2[], int lenght2) {
    if (length1 != lenght2) {
        return false;
    }
    
    for (int a=0; a < length1; a++) {
        if (arr1[a] != arr2[a]){
            return false;
        }

    }
    return true;

    //if (arr1 == arr2) { return true; }

    //else { return true; }
}

int main()
{
    int len1; std::cin >> len1;
    int arr1[1];

    for (int z = 0; z < len1; z++) {
        std::cin >> arr1[z];
    }
    
    int len2;  std::cin >> len2;
    int arr2[1]; 
    for (int i = 0; i < len2; i++) {
        std::cin >> arr2[i];
    }
   
    bool res = areEqual(arr1, len1, arr2, len2);
    string endPrint;

    if (res==true) { endPrint = "equal"; }
    else { endPrint = "Not equal"; }

    std::cout << endPrint;
    return 0;
}

