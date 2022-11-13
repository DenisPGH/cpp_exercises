
#include <iostream>
using namespace std;

int main()
{
    int v[4] = { 1,2,3,4 };
    for (auto t : v) {
        std::cout << t << endl;
    }
    std::cout << v[3] << endl;

    double  x = 2.3;
    auto* y=&x;

    /**y = 10;*/
    
    std::cout << "in memory : " << *y << endl;
    int d = 9;
   
    return 0;

}
    

