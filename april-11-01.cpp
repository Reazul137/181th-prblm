#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float p, r, t, cp, ci;

    cout << "\n\n Calculate the compound interest : \n";
    cout << "---------------------------------------\n";

    cout << " Input the principle : ";
    cin >> p;

    cout << " Input the rate of interest : ";
    cin >> r;

    cout << " Input the time : ";
    cin >> t;

    ci = p * pow ((1+r/100),t)-p;
    cp= p*pow((1+r/100),t);

    cout<<" The interest after compounded for the amount " <<p<<" for "<<t<<" years @"<<r<<" % is: "<<ci<<endl;
    cout << " The total amount after compounded for the amount "<<p<< " for "<<t<<" years @ "<<r<<" % is: "<<cp << endl;
    cout << endl;


    return 0;
}
