

#include <iostream>
using namespace std;

int main()
{  
    // pointers
    int x[5]{ 1,2,3,4,5 };
    
    //int* d = &x;
    int* pointer{&x[0]};
    std::cout << " pointer : " << *pointer << endl;
    // references
    int y[] = {100,2};

    int& ref {y[0]};
    std::cout << " references : " << ref << endl;

    return 0;
}

