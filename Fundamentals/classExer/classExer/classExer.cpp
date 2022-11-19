

#include <iostream>
#include <string>
using namespace std;


class TestClass
{
public:
	char tttt;
	TestClass(int age, string name){ realAge=age, realName=name,tttt=name[0]; }
	TestClass(){ realAge=40, realName="Gosho", tttt = 'g'; }
	string publicDef() {
		int doubleAge = realAge * realAge;
		return std::to_string(doubleAge) + " " + to_string(realAge)+ " " + realName;
		
	}
	//~TestClass();

private:
	int realAge;
	string realName;

};

//TestClass::TestClass() {
//	realAge = 4;
//	realName = 56;
//}


//TestClass::~TestClass()
//{
//}


int main()
{
	while (true)
	{
		int n; cin >> n;
		if (n < 30) { cout << "End program!!"; break; }
		string nn; cin >> nn;
		TestClass tc(n, nn);
		cout << tc.publicDef() << " " << tc.tttt << endl;

	}
	

    return 0;
}

