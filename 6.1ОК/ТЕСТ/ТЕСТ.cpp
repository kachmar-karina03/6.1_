#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1ОК/6.1ОК.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ТЕСТ
{
	TEST_CLASS(ТЕСТ)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 0;

			const int n = 23;
			int a[n];

			t = UnitTest(a, n);
			Assert::AreEqual(t, 0);
		}
	};
}
