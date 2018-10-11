//@Author MAYANK YADAV
//for function template in c++
#include<iostream>
using namespace std;
template <class X> X big(X a, X b){
	if(a>b)
		return a;
	else
		return b;}

int main(){
	cout<<"Enter 2 numbers to compare (int or float):\n";
	int a, b;
	cin>>a>>b;
	cout<<"Bigger is : "<<big(a, b);
	cout<<endl;
	return 0;}
