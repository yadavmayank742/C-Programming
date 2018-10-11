//@Author MAYANK YADAV
//WAP TO IMPLEMENT this pointer.
#include<iostream>
using namespace std;
class Box{
	int l, b, h;
	public:
		void SetDimensions(int l, int b, int h){
			this->l=l;
			this->b=b;
			this->h=h;}
		void ShowDimensions(){
			cout<<"The given Dimensions are\n";
			cout<<"\nLength : "<<l;
			cout<<"\nBreath : "<<b;
			cout<<"\nHeight : "<<h;
			}
		};
		
int main(){
	Box Box1;
	int l, b, h;
	cout<<"Enter length\t:"; cin>>l;
	cout<<"Enter Breath\t:"; cin>>b;
	cout<<"Enter Height\t:"; cin>>h;
	Box1.SetDimensions(l, b, h);
	Box1.ShowDimensions();
	cout<<endl;
	return 0;}
