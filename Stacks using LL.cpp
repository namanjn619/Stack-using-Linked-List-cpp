#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	

		Node(int data){
			this->data = data;
			next = NULL;
		}
};

class Stack{
	Node *head;

	
	public:
		int size;
		Stack(){
			head = NULL;
			size =0;
		}
		
		int stackSize(){
			return size;
		}
		
		bool isEmpty(){
			if(size==0){
				return true;
			}
			else{
				return false;
			}
		}
		
		int top(){
			if(isEmpty()){
				return 0;
			}
			return head->data;
		}
		
		void push(int element){
			Node *newnode = new Node (element);
			newnode->next = head;
			head = newnode;
			size++;
		}
		
		int pop(){
			if(isEmpty()){
				return 0;
			}
			int ans = head->data;
			Node *temp = head;
			head = head->next;
			delete temp;
			size--;
			return ans;
		}
};

int main(){
	Stack s1;
	
	s1.push(10);
	s1.push(20);
	
	cout<<s1.isEmpty()<<endl;
	cout<<s1.stackSize()<<endl;
	cout<<s1.top()<<endl;
	
	return 0;
}
