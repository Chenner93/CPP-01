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
	const char		*ptr_sentence;
	// std::&string;

	std::cout << "This is the string -> " + sentence << std::endl;

	ptr_sentence = sentence.c_str();
	std::cout << "This is the stringPTR -> " << &ptr_sentence << std::endl;
	std::cout << "This is the stringPTR -> " << static_cast<const void*>(ptr_sentence) << std::endl;
	*ptr_sentence++;
	std::cout << "This is the stringPTR -> " << &ptr_sentence << std::endl;
	std::cout << "This is the stringPTR -> " << static_cast<const void*>(ptr_sentence) << std::endl;


	return (0);
}