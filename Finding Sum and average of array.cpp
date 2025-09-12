// Siddhesh Gajare
// 25070123505
// A3
#include <iostream>
using namespace std;
int main() 
{
int arr[5];
int sum;
float average;
cout<<"The numbers of Array are :- "<<endl;

for(int i=0; i<5; i++){
    cin>>arr[i];
}

for(int n=0; n<5; n++){
    cout<<arr[n]<<" ";
}
cout<<"\nThe Sum of Elements of Array are :- "<<endl;
for(int i=0; i<5; i++){
    sum+=arr[i];
}
cout<<sum;
average=(sum)/5;
cout<<"\nThe Average of Elements of Array are :- "<<endl;
cout<<average;

return 0;
}

Output :-
The numbers of Array are :- 
100
200
300
400
500
100 200 300 400 500 
The Sum of Elements of Array are :- 
1500
The Average of Elements of Array are :- 
300

=== Code Execution Successful ===
