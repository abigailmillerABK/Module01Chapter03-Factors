# include <iostream>

void main() {
	int num;
	int factorsCount = 0;
	std::cout << "Input a positive numerical integer\n";

	std::cin >> num;

	std::cout << "\nList of factors:\n";
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			std::cout << i << "\n";
			factorsCount++;
		}
	}
	std::cout << num; //Last factor

	if (factorsCount > 1) {
		std::cout << "\nAll factors found";
	}
	else{
		std::cout << "\nSpecified value is a prime number";
	}
}