//Mycah L. Shaw
//Jeffrey Sommer
//30 November 2020
//CIS 1202
//Exceptions


#include <iostream>
#include <string>

using namespace std;

//Function Prototypes
char character(char start, int offset);
template<class T>
T half(T num)
{
	
	T result = num / 2;
	
		return result;
	
}

int half(int num)
{
	double result = num / 2.0;
	
	if (result + 0.5 > result)
	{
		return ceil(result);
	}
	else
		if (result + 0.5 < result)
		{
			return floor(result);
		}
	
}

int main()
{

	double a = 7.0;
	float b = 5.0f;
	int c = 17;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	
	/*char test = character('A', 32);
	cout << "Here are the results: " << test << endl;*/
	system("pause");
	return 0;
}


/*//Function to calculate offset, with exceptions
char character(char start, int offset)
{
	string exception = ""; //To hold exception message.


	if (!isalpha(start)) //Tests if the character is a letter. if not an exception is thrown.
	{
		exception = "Invalid Character Exception";
		throw std::invalid_argument(exception);
	}
	else if (!isalpha(start + offset)) //Tests if the results of the offset equate to a letter. If not, an exception is thrown.
	{
		exception = "Invalid Range Exception";
		
		throw std::invalid_argument(exception);
	}
	else if (isupper(start) == true && islower(start + offset) || islower(start) == true && isupper(start + offset)) //Test if there are any lowercase and upper case transitions. If so, an exception is thrown.
	{
		exception = "No Lowercase and Uppercase Transitions";
		throw std::invalid_argument(exception);
	}
	else //Returns the results of the offset and character position
	{
		return start + offset;
	}
}
*/