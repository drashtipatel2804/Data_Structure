#include<iostream>
using namespace std;
#define SIZE 5

class Stack {
	
	int TOP, ITEM, A[SIZE];
	
	public:
		
		Stack() {
			TOP = -1;
		}
		
		void push(int ITEM) {
			if(TOP >= (SIZE -1)) {
				cout << "Stack is full" << endl;
			} else  {
				TOP = TOP + 1;
				A[TOP] = ITEM;
			}
		}
		
		int pop() {
			if(TOP < 0) {
				cout << "Stack is empty" << endl;
			} else {
				ITEM = A[TOP];
				TOP = TOP - 1;
			}
			return ITEM;
		} 
		
		void peep() {
			if(TOP < 0) {
				cout << "Stack is empty" << endl;
			} else if(TOP >= SIZE - 1) {
				cout << "Stack is full" << endl;
			} else {
				cout << "Stack at top pointer :" << TOP << endl;
			}
		}
		
		void display() {
			if(TOP < 0) {
				cout << "Stack is empty" << endl;
			} else {
				for(int i=TOP; i>= 0;i--) {
					cout << " | " << A[i] << " | " << endl;
					cout << " - - - -" << endl;
				}	
			}
		}
};

int main() {
	int ch, ITEM;
	
	Stack s;
	
	do {
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peep" << endl;
		cout << "4. Display" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice :";
		cin >> ch;
		
		switch(ch) {
			case 1:
				cout << "Enter value to store in stack :";
				cin >> ITEM; 
				s.push(ITEM);
				break;
			case 2:
				ITEM = s.pop();
				cout << "Remove item from stack : "<< ITEM << endl;
				break;
			case 3:
				s.peep();
				break;
			case 4:
				s.display();
				break;
		};
		
	} while(ch != 5);
	
	return 0;
}
