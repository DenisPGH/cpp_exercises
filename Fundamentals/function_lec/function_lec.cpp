
#include <iostream>
using namespace std;

string input(double x) {
    if (2<=x && x<=2.99) {
        return "Fail"; }
    else if (3 <= x && x <= 3.99) {
        return "Poor";
    }


}

int main()
{
    double grade;
    cin >> grade;
    string res=input(grade);
    std::cout << res;
}

