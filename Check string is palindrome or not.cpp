// Siddhesh Gajare
// 25070123505
// A3

#include <iostream>
using namespace std;

int main() 
{
    string str1;
  
    cout << "Enter the String :- ";
    cin >> str1;

    int len = str1.length();
    int i;

    for (i = 0; i < len / 2; i++) {
        if (str1[i] != str1[len - i - 1]) {
            break;  
        }
    }

    if (i == len / 2) {
        cout << str1 << " The String is a Palindrome." << endl;
    } else {
        cout << str1 << " The String is not a Palindrome." << endl;
    }

    return 0;
}

Output :- 
Enter the String :- RACEBUS
RACEBUS The String is not a Palindrome.


=== Code Execution Successful ===

Enter the String :- LEVEL
LEVEL The String is a Palindrome.


=== Code Execution Successful ===
