

#include <iostream>
using namespace std;
#include "denis.h"


struct Deni
{
    string x;
    int y ;

    int yy;

    

};



void enter_Deni(Deni& d, int s,string dd) {
   d.x = dd;
   d.y = s;

}

int main()
{
    Deni denis;
    void Test(string b); {
        string name_person; cin >> name_person;
        int age;
        cin >> age;
        
        enter_Deni(denis, age, name_person);

    }
    //std::cin >> denis.x;

    std::cout << denis.x << " " << denis.y << " " <<  denisA<< endl;


    Deni t;
     cin >> t.x;
    cin >> t.y;

    t.yy = t.y * t.y;
    

    cout << t.x << "   " << t.y << "   " << t.yy;
}

