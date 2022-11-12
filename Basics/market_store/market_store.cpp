
#include <iostream>
using namespace std;

int main()
{
    double neededMoney;
    double priceErdbeeren; cin >> priceErdbeeren;
    double quantiteBannansKG; cin >> quantiteBannansKG;
    double quantiteOrangeKG; cin >> quantiteOrangeKG;
    double quantiteMaliniKG; cin >> quantiteMaliniKG;
    double quantiteErdbeereKG; cin >> quantiteErdbeereKG;

    double priceMalini = priceErdbeeren * 0.5;
    double priceOrange = priceMalini * 0.6;
    double priceBananas = priceMalini * 0.2;

    neededMoney = priceErdbeeren * quantiteErdbeereKG + priceBananas * quantiteBannansKG +
        priceMalini * quantiteMaliniKG + priceOrange * quantiteOrangeKG;


    cout.setf(ios::fixed);
    cout.precision(2);
    std::cout << neededMoney; // test comment
    std::cout << "op"; // test comment
    
}

