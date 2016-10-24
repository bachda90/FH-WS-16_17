#include <iostream>
void PrintMessage(const char* messege)
{
	std::cout << messege;
	std::cout << std::endl;
}
int main()
{
	PrintMessage("Hello, World");
}