#include <iostream>
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    cin >> k;

    while (cin.fail()) { /* this command will be executed until an incorrect value is entered in cin. for example, in the value k we will enter the letter.*/
        cin.clear(); /* this command clears the error and allows us to continue working further*/
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); /* ignores all characters up to a new line*/
        cout << "Enter an integer: "; /* and repeat the input of the value (with the hope that we will finally read and enter the correct one)*/
        cin >> k;
    }

    do {
        cout << "Enter integer  " << i << ": ";
        cin >> number;

        while (cin.fail()) {
            cin.clear(); /* I repeated this command here so that the values pass the same check. Because then the input value does not work correctly*/
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Enter an integer: ";
            cin >> number;
        }

        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k;
    return 0;
}

