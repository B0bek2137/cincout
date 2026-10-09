
#include <iostream>
using namespace std;

int main() 
{
    cout << "witaj ile masz lat?" << endl;
    int wiek;
    cin >> wiek;
    int miesiace = wiek * 12;
    cout << "zyjesz tyle miesiecy: " << miesiace << endl;
    int setka = 100 - wiek;
    cout << "do setki brakuje ci: " << setka << " lat!" << endl;

    return 0;
}
