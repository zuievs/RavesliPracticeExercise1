#include "iostream"
#include<string>
#include<map>

void getSeason()
{
	int in_numberOfMonth(0);
	std::map<int, std::string> mapSeason;
	for (int i = 1; i < 13; i++)
	{
		if (i== 1 || i==2 || i == 12)
		{
			mapSeason[i] = "Winter";
		}
		else if (i > 2 && i < 6)
		{
			mapSeason[i] = "Spring";
		}
		else if (i > 5 && i < 9)
		{
			mapSeason[i] = "Summer";
		}
		else if (i > 8 && i < 12)
		{
			mapSeason[i] = "Authem";
		}
	}

	do
	{
		std::cout << "Enter number of Month: ";
		std::cin >> in_numberOfMonth;
		std::cout << std::endl;
		if (in_numberOfMonth < 1 || in_numberOfMonth > 12)
		{
			std::cout << "Wrong number of Month. Please, Enter number from 1 to 12";
		}
		else
			std::cout << mapSeason[in_numberOfMonth] << std::endl;

		std::string answer;
		std::cout << "Do you want to try one more? Y/N ";
		std::cin >> answer;
		if (answer == "Y" || answer == "y")
		{
			continue;
		}
		else
			break;
	} while (true);

}