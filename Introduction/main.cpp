#include <iostream>//Standard input/output library
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Kindly fill in your name! ";
    getline(cin, name);

    cout << name << endl;

    return 0;

}