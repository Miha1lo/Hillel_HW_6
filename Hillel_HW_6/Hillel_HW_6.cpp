#include <iostream>

class Calculator
{
private:
	int result = 0;

public:

	int getResult() const
	{
		return result;
	}

	void resetResult()
	{
		result = 0;
	}

	void calculateValues(const int value1, const int value2, const char operation)
	{
		switch (operation)
		{
		case '+':
			result = value1 + value2;
			break;
		case '-':
			result = value1 - value2;
			break;
		case '*':
			result = value1 * value2;
			break;
		case '/':
			if (value2 != 0)
			{
				result = value1 / value2;
				break;
			}
			else
			{
				std::cout << "You can't divide by zero!!! Please use \"resetResult\" to reset value" << std::endl;
				result = -1;
				break;
			}
		default:
			std::cout << "Invalid operation" << std::endl;
			break;
		}
	}

	void calculateValues(const int value1,const char operation)
	{
		switch (operation)
		{
		case '+':
			result = result + value1;
			break;
		case '-':
			result = result - value1;
			break;
		case '*':
			result = result * value1;
			break;
		case '/':
			if (value1 != 0)
			{
				result = result / value1;
				break;
			}
			else
			{
				std::cout << "You can't divide by zero!!! Please use \"resetResult\" to reset value" << std::endl;
				result = -1;
				break;
			}
		default:
			std::cout << "Invalid operation" << std::endl;
			break;
		}
	}
};


int main()
{
	Calculator myCalculator;

	myCalculator.calculateValues(5, 3, '+' );
	std::cout <<"Result: " << myCalculator.getResult() << "\n";		//Expected result: 8

	myCalculator.calculateValues(5, 3, '-');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 2

	myCalculator.calculateValues(5, 3, '*');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 15

	myCalculator.calculateValues(5, 3, '/');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 1

	myCalculator.calculateValues(5, 0, '/');
	std::cout <<"Result: " << myCalculator.getResult() << "\n\n";	//Expected result: -1 and error massage

	std::cout << "Reset resul\n";
	myCalculator.resetResult();
	std::cout << "\n";

	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 0

	myCalculator.calculateValues(5, 3, '+');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 8

	myCalculator.calculateValues(5, '+');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 13

	myCalculator.calculateValues(3, '-');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 10

	myCalculator.calculateValues(2, '*');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 20

	myCalculator.calculateValues(4, '/');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: 5

	myCalculator.calculateValues(0, '/');
	std::cout <<"Result: " << myCalculator.getResult() << "\n";	//Expected result: -1 and error massage



	 return 0;
}

