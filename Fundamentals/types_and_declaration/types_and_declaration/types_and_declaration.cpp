

#include <iostream>
#include <string>
#include <typeinfo>
#include <map>
using namespace std;

float x(int y) {
    return float(y);
}
template<typename T>
string type_of(T x) {
    return typeid(x).name();
    //return type_info(x);
    //return typename(x) ;
}
int z = 1; // global declare

int main()
{
    // float res = x(5);
    //bool res = 7;
    int res{ true };
    int res2{ 'a' };
    short int res3{ 700 };

    char res4[] = "reseeve";
    string res5 = "denis";
    int16_t res6{ 234 };

    string res7 = R"(res5)";

    void* ref_res6= &res6;

    string type_get_res_5 = type_of(res5);

    const char* res9[] = { "a","b" };

    auto res10 ={ 1234,0 };
    auto res11= 1234.0 ;



    // printing here

    cout << "res:  " << res << endl;
    cout << "res2:  " << res2 << endl;
    cout << "res3:  " << res3 << endl;
    cout << "res4:  " << res4 << endl;
    cout << "res5:  " << res5.length() << endl;
    cout << "res6:  " << res6 << endl;
    cout << "res7:  " << res7 << endl;
    cout << "reference of  res6:  " << ref_res6 << endl;
    cout << "reference of  res6-type:  " << typeid(ref_res6).name() << endl;
    cout << "reference of  res5-type:  " << type_get_res_5 << endl;
    //cout << "res6:  " << type_info(res5) << endl;

    cout << "res9:  " << res9[0] << endl;

    
    void f(); {
        int z = 1;
        z += 1;
        ::z+= 10;
        cout << "z local:  " << z << endl;
    }
    cout << "z global:  " << z << endl;

    cout << "reference of  res10-type:  " << typeid(res10).name() << endl;
    cout << "reference of  res11-type:  " << typeid(res11).name() << endl;
    string type_get_res = type_of(res11);
    cout << "reference_func return any type-res11:  " << type_get_res << endl;

    cout << "'all types print'" << endl;

    // print all variables with for loop
    map<string, int> string_var;
    string_var.insert(pair<string, int>("res1",000000));
    
    auto a = string_var.find("res1");
    cout << "map :  " << typeid(a).name() << endl;


    for (int i = 0; i <= 12; ++i) {
        auto searched_variable = "res"+ to_string(i);
        cout << searched_variable << endl;
        string type_get_res = type_of(searched_variable);
        cout << "reference_func return any type:  " << type_get_res << endl;

    }
    
    
}

