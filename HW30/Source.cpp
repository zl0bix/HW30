#include<iostream>
#include<fstream>
#include<string>

int main(){

//HW30.1
	std::cout << "\n\n\t\tHW30.1\n\n";
	std::ofstream recF("file.txt",std::ios::app);
	if (recF.is_open()) {
		std::string str1;
		do {
			std::cout << "Enter string -> ";
			std::getline(std::cin, str1);
			recF << str1 << '\n';
		} while (str1 != "end.");
	}
	else
		std::cout << "Open file error!!!";
	recF.close();
	
	std::ifstream readF("file.txt");
	if (readF.is_open()) {
		std::string str2;
		while (std::getline(readF, str2))
			std::cout << str2 << std::endl;
	}
	else
		std::cout << "Open file error!!!" << std::endl;;
	readF.close();
	remove("file.txt");


	system("pause");
	return 0;
}