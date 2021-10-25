#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:      
		
		TEST_METHOD(TestMethod1)
		{
			int n = 100;
			int S = n % 10;
			Assert::AreEqual(S, 0);

		}
	};
}
