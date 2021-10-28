#include <iostream>

std::string invert_s(std::string str)
{
	for (int i = 0; i < str.length() / 2; i++)
	{
		std::swap(str[i], str[str.length() - i-1]);
	}
	return str;
}

int main()
{
	std::string string;
	std::cin >> string;

	invert_s(string);

	std::cout << invert_s(string);

	return 0;
}
