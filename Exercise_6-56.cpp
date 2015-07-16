// My solution for C++ Primer Fifth Edition, Exercise 6.7 from page 250
//

#include <iostream>
#include <vector>

int add(int v1, int v2);
int sub(int v1, int v2);
int mul(int v1, int v2);
int divi(int v1, int v2);

int add(int v1, int v2)
{
	return v1 + v2;
}

int sub(int v1, int v2)
{
	return v1 - v2;
}

int mul(int v1, int v2)
{
	return v1 * v2;
}

int divi(int v1, int v2)
{
	if (!v2) {
		std::cerr << "CANT DIVIDE THROUGH 0 YOU BLOODY IDIOT!\n";
		return 0;
	}

	return v1 / v2;
}

int main(int argc, char* argv[])
{
	typedef decltype(add) *fAdd;

	std::vector<fAdd> v;

	v.push_back(add);
	v.push_back(sub);
	v.push_back(mul);
	v.push_back(divi);

	std::cout << v[0](2, 3) << std::endl;
	std::cout << v[1](2, 3) << std::endl;
	std::cout << v[2](2, 3) << std::endl;
	std::cout << v[3](2, 3) << std::endl;

	return 0;
}
