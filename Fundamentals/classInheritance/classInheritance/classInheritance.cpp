

#include <iostream>
#include <string>
using namespace std;

class Person {
    int Age=0;
    string Name=" no name";
    double height;
    double weight;
public:
    Person(double height, double weight) : height(height), weight(weight) {};
    ~Person() { cout << "destructor"; };

    void getBody(double a, string n) {
        Age = a;
        Name = n;
    }

    string info() {
        string res;
        res = "Age: " + to_string(Age) + " NAme: " + Name +
            " weight: " + to_string(weight).substr(0,5) + " height: " + to_string(height).substr(0, 5) + "  ";
        return res;

    }
private:
    string sex = "male";



};

void print_function(string toPrint) {
    cout << " person info:  " << toPrint << endl;
}

int main()
{
    Person deni(180.0,80.0);

    cout.precision(2);
    print_function(deni.info());
    int age; cin >> age;
    string name; cin >> name;
    deni.getBody(age, name);
    //cout << " person info after:  " << deni.info() << endl;
    print_function(deni.info());
    return 0;
}

