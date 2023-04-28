#include <iostream>

void setMin();
void getSeason();

int main()
{
	std::cout << "Part 1: Practice C++\n";
	std::cout << "\tTask 1: Ice cream sandwich\n";
	std::cout << "\tTask 2: Find minimal number\n";
	std::cout << "\tTask 3: Seasons\n";

	int in_number(0);
	std::cout << "Enter number of Task: ";
	std::cin >> in_number;
	switch (in_number)
	{
	case 1:
		std::cout << "In progress...\n";
		break;
	case 2:
		setMin();
		break;
	case 3:
		getSeason();
	default:
		break;
	}
  
}

