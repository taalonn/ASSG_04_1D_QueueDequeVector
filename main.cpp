/***************************************************************************
* AUTHOR			: TALON BAKER
* ASSIGNMENT # 4	: QUEUE DEQUE & VECTOR
* CLASS				: CS1D
* SECTION			: TTH - 5:30PM
* DUE DATE			: 2/17/15
**************************************************************************/

#include "header.h"

int main()
{
    string string1 = "A man, a plan, a canal, Panama";
    string string2 = "Was it a car or a cat I saw?";
    string string3 = "Sit on a potato pan, Otis";
    string string4 = "Isn’t this class cool?";

	MyDeque<string> dequeTest;

	cout << "Part 1) Pushing the strings\n\n";

	dequeTest.enqueue(string1);
	dequeTest.enqueue(string2);
	dequeTest.enqueue(string3);
	dequeTest.enqueue(string4);

	cout << "Contents: ";

	dequeTest.print();
	cout << endl << endl;

	cout << "empty: ";

	if(dequeTest.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	cout << "Size: " << dequeTest.size() << endl;
	cout << "Front: " << dequeTest.front() << endl;

	cout << "Popping: " << dequeTest.front() << endl;
	dequeTest.dequeue();

	cout << "Contents: ";
	dequeTest.print();
	cout << endl << endl;

	cout << "Popping: " << dequeTest.front() << endl;
	dequeTest.dequeue();


	cout << "Contents: ";
	dequeTest.print();
	cout << endl << endl;

	cout << "Popping: " << dequeTest.front() << endl;
	dequeTest.dequeue();


	cout << "Contents: ";
	dequeTest.print();
	cout << endl << endl;


	cout << "Popping: " << dequeTest.front() << endl;
	dequeTest.dequeue();


	cout << "Contents: ";
	dequeTest.print();
	cout << endl << endl;

	cout << "empty: ";

	if(dequeTest.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	cout << "Size: " << dequeTest.size() << endl;
	cout << "Front: " << dequeTest.front() << endl;

	return 0;
}
