
#include <iostream>
using namespace std;


double sqrt(double x) {
    return x* x;
}

int main()
{
    while (true)
    {
        double x; std::cin >> x;
        if (x == 0) {
            break;
        }
        double res; res = sqrt(x);
        std:cout << res << endl;

    }
    
}

