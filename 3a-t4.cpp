#include<iostream>
using namespace std;
int main() {
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = "; /*allows the user to understand what to enter*/
    cin >> k; /*data entry*/
    if (k == 0) /*condition*/
    {
        cout << "The total sum: 0" << endl; /*previously, if we entered zero, we were asked for one value, now the final amount is immediately displayed to us*/
    }
    else { /*if k is not equal to zero, perform the following:*/
        do {
            cout << "Enter integer nr. " << i << ": ";
            cin >> number;
            sum_k += number;
            i++/*for each step in the loop, it adds a value*/
        } while (i <= k); /*when the number of entered values is equal to k, then the program will enter the next line*/
        cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    }
    return 0;
}
