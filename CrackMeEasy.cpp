#include <iostream>

std::string validKey = "00000-00000-00000-00000";

int main()
{
	std::string input;
	while (true)
	{
		system("cls");
		std::cout << "Write product key: ";
		std::cin >> input;
		if (input == validKey) {
			std::cout << "Valid key!" << std::endl;
			system("pause");
			break;
		}
		else {
			std::cout << "Invalid key!" << std::endl;
			system("pause");
		}
	}
	system("cls");
    std::cout << "Hello World!\n";
	system("pause");
}