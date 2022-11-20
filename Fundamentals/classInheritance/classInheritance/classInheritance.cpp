

#include <iostream>
#include <string>
using namespace std;

class Person {
    int Age=0;
    string Name=" no name";
   
public:
    double height;
    double weight;
    Person(double height, double weight) : height{ height }, weight{ weight } {};
    Person() { height = 0, weight = 0.0; };
    ~Person() { cout << "destructor"; };

    void getBody(int a, string n) {
        Age = a;
        Name = n;
    }

    string info() {
        string res;
        res = "Age: " + to_string(Age) + " NAme: " + Name +
            " weight: " + to_string(weight).substr(0,5) + " height: " + to_string(height).substr(0, 5) + "  ";
        return res;

    }
    // implicit
   /* Person(const Person&) = delete;
    Person& operator=(const Person&) = delete;*/
private:
    string sex = "male";

};

void print_function(string toPrint) {
    cout << " person info:  " << toPrint << endl;
}

class Miro {
public:
    int years;
    
    Miro() { years = 10; }
    double db() {
        return years2 * years2;
    }
private:
    int years2 = 20;
   
};



class Denis : public Person {
public:
    Miro miro;
    
   /* Denis(double h, double w) {
        height = h;
        weight = w;
    };*/
    //Denis() {};

};

int main()
{
    Person deni(180.0,80.0);
    print_function(deni.info());
    /*int age; cin >> age;
    string name; cin >> name;
    deni.getBody(age, name);
    print_function(deni.info());*/

    Denis r;
    r.getBody(30, "Denis@");
    print_function(r.info());
    r.height = 300;
    r.weight = 50;
    print_function(r.info());
    print_function(deni.info());

    cout << " reference to miro " + to_string(r.miro.years)<< endl;
    cout << " reference to miro " + to_string(r.miro.db())<< endl;
 

    return 0;
}

