#include <iostream>

/*
Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
*/

int	main(void) {
	std::string	sentence = "HI THIS IS BRAIN";
	std::string	*ptr_sentence = &sentence;
	std::string	&ref_sentence = sentence;

	std::cout << "This is the adress of string -> " << &sentence << std::endl;
	std::cout << "This is the adress of stringPTR -> " << ptr_sentence << std::endl;
	std::cout << "This is the adress of stringREF -> " << &ref_sentence << std::endl;
	std::cout << std::endl;
	std::cout << "This is the value string -> " << sentence << std::endl;
	std::cout << "This is the value stringPTR -> " << *ptr_sentence << std::endl;
	std::cout << "This is the value stringREF -> " << ref_sentence << std::endl;


	return (0);
}
