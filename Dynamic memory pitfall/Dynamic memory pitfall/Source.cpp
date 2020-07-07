#include <iostream>

using namespace std;

int main() {

	cout << "Examples of Dynamic Memory pitfall\n" << endl;
	/*
	int* ptr = new int;

	delete ptr; // once deleted, u dont need to delete it again .. it will cause errors

	ptr = nullptr; // if needed to null the ptr, this way is the best way to do it
	*/

	/*
	int x = 5;

	int* ptr = new int[10];

	//ptr = &x;//this is bad! it will cause memory leak

	cout << "address of the ptr: " << ptr << endl;

	ptr++; // point to the initial address, goes to the next one

	cout << "address of the ptr: " << ptr << endl;

	// delete[]ptr;// not good because the main address has changed .. try creating a new variable
	*/

	//The solution for the previous example
	/*int x = 5;

	int* ptr = new int[10];
	int* ptr2 = ptr;

	cout << "address of the ptr: " << ptr2 << endl;

	ptr2++; // point to the initial address, goes to the next one

	cout << "address of the ptr: " << ptr2 << endl;

	delete[]ptr;
	*/

	/*int* ptr = new int[10];
	ptr[11] = 4; //bad to do since the range is at 10
	*/

	int* ptr = new int;

	delete[]ptr;//bad to do

	return 0;
}