#include <iostream>
//Given 2 integer arrays, determine of the 2nd array is a rotated version of the 1st array.Ex.Original Array A = { 1,2,3,5,6,7,8 } Rotated Array B = { 5,6,7,8,1,2,3 }
#include <string>


bool isRotated(std::string str1, std::string str2)
{
	std::string concatted = str1 + str1;		//concat the first string
	std::size_t found = concatted.find(str2);	//find the second string in the first string
	if (found != std::string::npos)		//if the position is not npos, the default if the string is not found, then it is found, so return true
		return true;
	else
		return false;					//if a position is npos, then the second string is not a part of the first
}

int main()
{
	char repeat = 'y';
	do {
	std::string arr1;
	std::string arr2;
	std::cout << "enter array 1" << std::endl;
	std::getline(std::cin, arr1);
	std::cout << "enter array 2" << std::endl;
	std::getline(std::cin, arr2);
	if (isRotated(arr1, arr2))
		std::cout << "array 2 is rotated version of array 1" << std::endl;
	else
		std::cout << "array 2 is not rotated version of array 1" << std::endl;
	std::cout << "try again?" << std::endl;
	std::cin >> repeat;
	std::cin.ignore();
	} while (repeat == 'y' || repeat == 'Y');
}

//initially i was gonig to use circular list but this seemed simpler