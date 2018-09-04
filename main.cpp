#include <iostream>

unsigned long add(int op1, int op2)
{
	return op1 + op2;
}

unsigned long sub(int op1, int op2)
{
	return op1 - op2;
}

unsigned long mul(int op1, int op2)
{
	return op1 * op2;
}

unsigned long div(int op1, int op2)
{
	return op1 / op2;
}

int main(int argc, char **argv)
{
	/* TODO:
		add your logic here
	*/
    cout << add(1, 5) << '\n';
    cout << sub(42, 1) << '\n';
    cout << mul(2, 3) << '\n';
    cout << div(10, 5) << '\n';
	return 0;
}