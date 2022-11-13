
#include <iostream>
using namespace std;

string input(double x) {
    if (2<=x && x<=2.99) {
        return "Fail"; }
    else if (3 <= x && x <= 3.49) {
        return "Poor";
    }
    else if (3.50 <= x && x <= 4.49) {
        return "Good";
    }
    else if (4.50 <= x && x <= 5.49) {
        return "Very good";
    }
    else if (5.50 <= x && x <= 6.0) {
        return "Excellent";
    }



}

int main()
{
    double grade;
    cin >> grade;
    string res=input(grade);
    std::cout << res;
}

