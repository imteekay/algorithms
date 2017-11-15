#include <iostream>

using namespace std;

#define MAX_STACK_SIZE 10

class Stack {
private:
	int container[MAX_STACK_SIZE];
	int numberOfElements;

public:
	Stack() {
		numberOfElements = 0;
	}

	void push(int element) {
		if (numberOfElements > MAX_STACK_SIZE) {
			cout << "Error: Stack Overflow";
		} else {
			container[numberOfElements] = element;
			numberOfElements++;
		}
	}

	int pop() {
		if (isEmpty()) {
			cout << "Error: No element to pop";
		} else {
			numberOfElements--;
			return container[numberOfElements];
		}
	}

	int top() {
		return container[numberOfElements-1];
	}

	bool isEmpty() {
		return numberOfElements == 0;
	}
};

int main() {
	Stack stack;

	if (stack.isEmpty()) cout << "Stack is empty" << endl;

	stack.push(1);
	stack.push(2);
	stack.push(3);

	cout << stack.pop() << endl;

	stack.push(10);

	cout << stack.top() << endl;

	if (!stack.isEmpty()) cout << "Stack is not empty" << endl;

	return 0;
}