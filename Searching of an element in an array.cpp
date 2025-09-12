// Siddhesh Gajare
// 25070123505
// A3

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of Array :- ";
    int n;
    cin>>n;
    int numbers[n];
    cout<<"Enter the Values :- "<<endl;
    for(int i=0;i<n;i++){
        
        cin>>numbers[i];
    }
    int key;
    
    cout<<"Enter the Number to be Searched :- ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==numbers[i]){
            cout<<"The Postion of the key in the Array is :- "<<i+1;
        }
    }
    return 0;
}

Output :-
Enter the size of Array :- 5
Enter the Values :- 
100
200
300
400
500
Enter the Number to be Searched :- 300
The Postion of the key in the Array is :- 3

=== Code Execution Successful ===
