
#include <iostream>
#include <string>

void getIceCream()
{

	std::cout << "An ice cream sandwich is a string formed by two identical ends and a different middle.For example :\n"
		<< "AABBBAA\n3&&3\nyyyyymmmmmmmmyyyy\nhhhhhhhhmhhhhhhh\n"
		<< "Note that the left and right ends of the sandwich are identical in both length and repeated characters.\n"
		<< "The middle is the third(different from the first two) set of characters.\n"
		<< "The following is not an ice cream sandwich :\n"
		<< "Program returns True if the string the user entered is an ice cream sandwich and False otherwise.\n\n";

	std::cin.ignore(32767, '\n');
	std::string inputString, strPart1, strPart2, strPart3;
	const int strIndex(0);
	std::cout << "Enter character set: ";
	std::cin >> inputString;
	std::cout << std::endl;

	for (int i = 0; i < inputString.size(); i++)
	{
		//Prepare data for fist PArt of IceCeam
		if (i == 0 || (strPart1[strIndex] == inputString[i] && strPart2.empty()))
		{
			strPart1 += inputString[i];
		}
		else if (strPart2.empty() || strPart2[strIndex] == inputString[i])
		{
			strPart2 += inputString[i];
		}
		else
			strPart3 += inputString[i];
	}
	if (strPart1 == strPart3)
	{
		std::cout << "True" << std::endl;
	}
	else
		std::cout << "False" << std::endl;
}