#include <iostream>
using namespace std;
int main()
{
    int dog_age;
    cin >> dog_age; cin.ignore();
    int i = 1; float years = 0;
    while(dog_age){
        if(i <= 2){years += 10.5; i++;}
        else {years += 4;}
        dog_age--;
    } cout << (int)years << endl;

}
