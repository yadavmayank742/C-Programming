//@Author MAYANK YADAV
//WAP To implement inline function
#include<iostream>
using namespace std;
inline int summation(int);
int main(){
	int n;
	cout<<"Enter number upto which sum is required\t:";
	cin>>n;
	int Sum = summation(n);
	cout<<"Sum up to "<<n<<" is "<<Sum<<"\n";
	return 0;}

int summation(int n){
	return 0.5*n*(n+1);}
	
