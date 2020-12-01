//Mycah L. Shaw
//Jeffrey Sommer
//30 November 2020
//CIS 1202
//Templates


#include <iostream>
#include <string>

using namespace std;

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


	
	system("pause");
	return 0;
}
