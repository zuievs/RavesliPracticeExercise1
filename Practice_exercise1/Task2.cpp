//Write a program that determines the minimum number in a sequence of positive numbers that the user has entered.
//If there are negative numbers in the sequence, then you must inform the user about thisand offer to repeat the input again.
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

void getMin(std::vector<int>& in_arr)
{
	int min_number(0);
	for (int i = 0; i < in_arr.size(); i++)
	{
		if (i == 0 || min_number > in_arr[i])
		{
			min_number = in_arr[i];
		}
	}
	std::cout << "Minimal number is: " << min_number;
}

void setMin()
{

	std::cout << "Write a program that determines the minimum number \n"
			  << "in a sequence of positive numbers that the user has entered.\n"
			  << "If there are negative numbers in the sequence,\n"
			  << "then it is necessary to inform the user about this and offer to repeat the input again.\n\n";
	
	std::string answer;
	std::vector<int> arr;
	std::string in_value;

	std::cin.ignore(32767, '\n'); // игнорируем символы перевода строки "\n" во входящем потоке длиной 32767 символов
	std::cout << "Enter few positive numbers separated by Space: ";
	std::getline(std::cin, in_value);

	std::stringstream ss(in_value);
	int num;
	while (ss >> num)
	{
		if (num < 0)
		{
			std::cout << "You're entered wrong number. " << num << " can be change or skip" << std::endl;
			std::cout << "Do you want to change number? Y/N ";
			std::cin >> answer;
			if (answer == "Y" || answer == "y")
			{
				std::cout << "Please, enter number ";
				std::cin >> num;
				arr.push_back(num);
			}
			else
				continue;
		}
		else
			arr.push_back(num);
	}
	

	getMin(arr);

}

