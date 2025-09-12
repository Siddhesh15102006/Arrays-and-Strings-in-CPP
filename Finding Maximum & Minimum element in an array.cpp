// Siddhesh Gajare
// 25070123505
// A3
#include <iostream>
using namespace std;
int main() 
{
    int n;

    cout << "Enter number of elements :- ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " Elements :- \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum Element is :- " << max << endl;
    cout << "Minimum Element is :- " << min << endl;

    return 0;

Output :-
Enter number of elements :- 5
Enter 5 Elements :- 
100 200 300 400 500
Maximum Element is :- 500
Minimum Element is :- 100


=== Code Execution Successful ===
}
