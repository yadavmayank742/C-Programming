//@Author MAYANK YADAV
//Queue Implementation using array
#include<iostream>
using namespace std;
struct ArrayQueue{
	int front, rear;
	int Capacity;
	int *array;};
	
ArrayQueue* createQueue(int Capacity){
	ArrayQueue* Q = (ArrayQueue*)malloc(sizeof(ArrayQueue));
	Q->Capacity = Capacity;
	Q->array = (int* )malloc(Capacity*sizeof(int));
	return Q;}
	
int isEmptyQueue(ArrayQueue *Q){
	return (Q->front == -1);}

int isFullQueue(ArrayQueue *Q){
	return((Q->rear+1)%Q->Capacity == Q->front);}

/*int QueueSize(ArrayQueue *Q){
	return((Q->Capacity - Q->front + Q->rear +1)%Q->Capacity);}*/

void enQueue(ArrayQueue* Q, int data){
	if(isFullQueue(Q))
		cout<<"Queue Overflow\n";
	else{
		Q->rear = (Q->rear+1)%Q->Capacity;
		Q->array[Q->rear] = data;
		if(Q->front == -1)
			Q->front = Q->rear;
		}
	}

int deQueue(ArrayQueue *Q){
	int data = -1;
	if(isEmptyQueue(Q)){
		cout<<"Empty Queue\n";
		return -1;}
	else{
		data = Q->array[Q->front];
		if(Q->front == Q->rear)
			Q->front = Q->rear = -1;
		else
			Q->front = (Q->front +1)%Q->Capacity;
		}
	return data;}

void deleteQueue(ArrayQueue *Q){
	if(Q){
		if(Q->array)
			delete(Q->array);
		delete(Q);}
	}

void TraverseQueue(ArrayQueue *Q){
	for(int i =0; i<Q->Capacity; i++)
		cout<<Q->array[i]<<endl;}
int menu(){
	cout<<"\n1. Create Queue";
	cout<<"\n2. Add Element to the Queue";
	cout<<"\n3. Delete Element from the Queue";
	cout<<"\n4. Show Queue";
	cout<<"\n5. Exit";
	cout<<"\n\nEnter your choice : ";
	int ch; cin>>ch;
	return ch;}
int main(){
	int size, data;
	ArrayQueue *Q = NULL;
	for(;;)
		switch(menu()){
			case 1:
				cout<<"Enter the size of the Queue\t: "; cin>>size;
				Q = createQueue(size); break;
			case 2:
				if(Q == NULL)
					cout<<"Queue doesn't exixt, Create a Queue\n";
				else{
					cout<<"Enter number to insert\t:"; cin>>data;
					enQueue(Q, data);}
				break;
			case 3:
				if(Q == NULL)
					cout<<"Queue doesn't exixt, Create a Queue\n";
				else
					cout<<"Deleted element is : "<<deQueue(Q);
				break;
			case 4:
				if(Q == NULL)
					cout<<"Queue doesn't exixt, Create a Queue\n";
				else
					TraverseQueue(Q);
				break;
			case 5:
				return 0;
			default: cout<<"Invalid Choice\n";
			}
	return 0;}
