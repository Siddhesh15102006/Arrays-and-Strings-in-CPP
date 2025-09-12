// Siddhesh Gajare
// 25070123505
// A3

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the Size of Array :- ";
    int n;
    cin>>n;
    int numbers[n];
    cout<<"Enter The Values "<<endl;
    for(int i=0;i<n;i++){
       
        cin>>numbers[i];
        
    }
    cout<<"The Reversed Array is :- "<<endl;
    for(int j=n-1;j>=0;j--){
    
        
        cout<<numbers[j]<<endl;
    }
    return 0;
}

Output :-
Enter the Size of Array :- 5
Enter The Values 
100
200
300
400
500
The Reversed Array is :- 
500
400
300
200
100


=== Code Execution Successful ===
