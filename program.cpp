
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

// Q1.

// Write a program that inputs a sequence of n doubles from the 
// keyboard (assume n<=100). The number n should also be input 
// from the keyboard. The program then calculates and prints out 
// the largest number of the sequence -- ie find the maximum value.

int main() 
{ 
	// 1. DECLARE
	int n, i;
	double A[100], max;

	// 2. INITIALIZE, 3. INPUT
	cout << "\ninput n (1-100) ? ";
	cin >> n;

	// note: the problem statement didn't say to check for errors
	// so we don't have to check if n is out of range

	// 4. CONTROL STATEMENTS

	// based on experience the for loop (Lego) is good for arrays
	// and sequences

	// template 
//	for() {

//	}

	// 5. EXPRESSIONS -- filling in result from step #4

	// * small handwritten examples can also help guide you
	// -- solve the problem by hand then write down a list of steps 
	// that you use to solve the example and then program the 
	// control statements for the general case

	// double A[3] = { 1.2, 5.3, 1.7 };

	// note pad -- record the current maximum value
	// recall the max variable -- can compare the elements to that
	max = -1000; // low value will be replaced immediately

	// max = A[0]; // alternative -- start with the first element

	// if 1.2 > max then max = 1.2 -- true -> max = 1.2
	// if 5.3 > max then max = 5.3 -- true -> max = 5.3
	// if 1.7 > max then max = 1.7 -- false -> max = 5.3

	for(i=0;i<n;i++) {
		cout << "\ninput A[i] ? ";
		cin >> A[i]; // 3. INPUT

		// 4. and 5.
		if( A[i] > max ) max = A[i];
	}

	// 6. OUTPUT
	cout << "\nmax = " << max;

	// don't forget #7

	// if the problem statement says test it then do step #7,
	// otherwise it's optional for tests / exams

	// for assignments, labs, project, real world you should
	// always do step #7

	// 7. DEBUG / TEST

	// at least check your simple handwritten example
	// to make sure it gives the expected result
	// -- you know the answer for that so it's a good check

	cout << "\ndone.\n";
	getchar();

	return 0;
}
