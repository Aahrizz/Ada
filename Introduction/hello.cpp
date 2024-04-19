#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string input;
    //char delimiter = ',';
    cout << "Input your numbers to perform operations on them:";
    getline(cin, input);

    stringstream ss(input);
    int sum = 0;
    int num;


    while (ss >> num) {
        sum += num;
        if (ss.peek() == ',') {
            ss.ignore(); //skip comma
        }
    };

    cout << "Sum: " << sum << endl;
    return 0;



}