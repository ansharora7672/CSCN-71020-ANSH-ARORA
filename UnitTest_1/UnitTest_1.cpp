#include "pch.h"
#include "CppUnitTest.h"
extern "C" int getPerimeter(int *, int *);
extern "C" int getArea(int *, int *);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(getPerimeter_TEST)
		{
			// This unit test will test the getPerimeter function in the main code
			int answer;
			int len = 10;
			int wid = 20;
			answer = getPerimeter(&len,&wid);
			Assert::AreEqual(60, answer);
		}

		TEST_METHOD(getArea_TEST)
		{
			// This unit test will test the getArea function in the main code
			int answer;
			int len = 10;
			int wid = 20;
			answer = getArea(&len, &wid);
			Assert::AreEqual(200, answer);
		}
		
	};
}
