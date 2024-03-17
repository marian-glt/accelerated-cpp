#include <iostream>
#include <string>

int greetingWithName() {
	std::cout << "Please enter your first name: ";

	std::string name;
	std::cin >> name;

	std::cout << "Hello, " << name << "!" << std::endl;

	return 0;
}

int greetingWithFrame() {
	std::cout << "Please enter your first name: ";

	std::string name;
	std::cin >> name;

	const std::string greeting = "* Hello, " + name + "! *";

	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	const std::string first(second.size(), '*');

	std::cout << std::endl;

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << greeting << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}

int inputTwoNames() {
	std::cout << "What is your name? ";

	std::string name;
	std::cin >> name;

	std::cout << "Hello, " << name
		<< std::endl << "And what is yours? ";

	std::cin >> name;
	std::cout << "Hello, " << name
		<< "; nice to meet you too!" << std::endl;
	return 0;
}

int runWorkingWithStrings() {
	greetingWithName();

	greetingWithFrame();
	
	inputTwoNames();

	return 0;
}