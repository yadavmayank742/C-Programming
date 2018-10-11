//@Author MAYANK YADAV
//WAP to generate Fibb series with Copy Constructor.
#include<iostream>
using namespace std;
class fibbonacci{
	int f0, f1, fib;
	public:
		fibbonacci(){
			f0 = 0;
			f1 = 1;
			fib = f0 + f1;
			}
			
		fibbonacci(fibbonacci &ptr){
			f0 = ptr.f0;
			f1 = ptr.f1;
			fib = ptr.fib;}
		
		void increment(){
			f0 = f1;
			f1 = fib;
			fib = f0+f1;}
	
		void display(){
			cout<<fib<<"\t";}
		};
int main(){
	fibbonacci Num;
	int Terms;
	cout<<"Enter the number of terms you want in Fibonacci Series\t:";
	cin>>Terms;
	for(int i =0; i<Terms; i++){
		Num.display();
		Num.increment();}
	cout<<endl;
	return 0;}
