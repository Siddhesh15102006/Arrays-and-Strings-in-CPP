// Siddhesh Gajare
// 25070123505
//A3

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array :- ";
    int n;
    cin>>n;
    int numbers[n];
    cout<<"Enter the Values :- "<<endl;
    for(int i=0;i<n;i++){
        
        cin>>numbers[i];
        
    }
    cout<<"The Values are :- " <<endl;
    for(int i = 0; i < n; i++) {
        cout<< numbers[i]<< " ";
    }
    return 0;
}

Output :-
Enter the size of array :- 3
Enter the Values :- 
123
456
789
The Values are :- 
123 456 789 

=== Code Execution Successful ===
