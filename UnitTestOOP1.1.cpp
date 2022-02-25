#include "pch.h"
#include "CppUnitTest.h"
#include "..//pr.1.1(2sem)/Product.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestOOP11
{
	TEST_CLASS(UnitTestOOP11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Product n;
			n.Init(66, 90.);
			Assert::IsFalse(n.getSecond() == 0);
		}
	};
}
