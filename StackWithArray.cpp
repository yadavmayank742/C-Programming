//@Author MAYANK YADAV
//implementing Stack using array.
#include<iostream>
using namespace std;
class Stack{
	public:
		static int Size, top;
		int A[256];
		int StackSize();
		void Insertion();
		void Deletion();
		void Traversal();
		};
int Stack::top = -1;
int Stack::Size = 0;
int Stack::StackSize(){
			cout<<"Enter Size of the Stack : ";
			cin>>Size;
			return Size;}
			
void Stack::Insertion(){
	if(Size==0 or top == Size-1)
		cout<<"Stack Overflow\n";
	else{
		cout<<"Enter value to sore in stack : ";
		int Value;
		cin>>Value;
		top++;
		A[top] = Value;
		}}
void Stack::Deletion(){
	if(Size == 0 or top == -1)
		cout<<"Stack Underflow\n";
	else{
		cout<<"Deleted "<<A[top];top-=1;}
	}
void Stack::Traversal(){
	if(Size == 0 or top == -1)
		cout<<"Stack Empty, nothing to Show\n";
	else
		for(int i =top; i>=0; i--)
			cout<<"| "<<A[i]<<" |"<<endl;
		}
int menu(){
	cout<<"\n1. Push Into Stack";
	cout<<"\n2. Pop from Stack";
	cout<<"\n3. View Stack";
	cout<<"\n4. Exit";
	cout<<"\n\nPlease Enter your choice : "; int ch;
	cin>>ch;
	return ch;}		
int main(){
	std::system("clear");
	Stack Stack1;
	Stack1.StackSize();
	for(;;){
		switch(menu()){
			case 1:
				Stack1.Insertion(); break;
			case 2:
				Stack1.Deletion(); break;
			case 3:
				Stack1.Traversal(); break;
			case 4:
				return 0;
			default:
				cout<<"\nInvalid option choosen\n";
			}
		}
	return 0;}
