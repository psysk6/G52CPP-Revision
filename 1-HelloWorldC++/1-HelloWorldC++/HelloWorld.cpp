#include <cstdio> /* C++ version of stdio*/


#include "Header.h" /*example of using a local header file*/
#include <iostream>

#define NUMBER 10

//if a > b then value is a else b
#define MAX(a,b) (((a)>(b)) ? (a) : (b))
const int ConstNumber = 10;

//main: note parameters are optional
int main(int argc, char* argv[]) {

	//can use printf
	printf("Hello World! with printf\n");

	std::cout << "Hello World! with cout";



	printf("the constant created using #define is %d\n",NUMBER);


	std::cout << "the constant created using #define is" << NUMBER <<"\n";
	//note returning a value is optional
	printf("the constant created using the inbuilt constant is %d\n",ConstNumber);
	
	int v1 = MAX(10, 20);
	printf("max = %d\n", v1);

	return 0;
}


