class MyInteger
{
	private:		//private instance fields
		int value;
		static double averageOfIntegers;
		static int sumOfIntegers;
		static int numberOfObjects;

	public:
		MyInteger(int val);		//public constructor

	//function declarations
	const int getValue();
	const bool isEven();
	static bool isOdd(int val);
	const bool equals(int val);
	const bool equals(const MyInteger &myInt);
	static double getAverageOfIntegers();
};