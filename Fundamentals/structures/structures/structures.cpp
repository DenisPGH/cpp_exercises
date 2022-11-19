

#include <iostream>
using namespace std;
#include "denis.h"

struct Deni
{
    string x;
    int y;

};

void enter_Deni(Deni& d, int s,string dd) {
   d.x = dd;
   d.y = s;

}

int main()
{
    Deni denis;
    void Test(string b); {
        string input; cin >> input;
        int age;
        cin >> age;
        
        enter_Deni(denis, age, input);

    }
    //std::cin >> denis.x;

    std::cout << denis.x << " " << denis.y << denisA;
}

