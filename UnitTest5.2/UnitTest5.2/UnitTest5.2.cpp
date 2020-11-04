#include "pch.h"
#include "CppUnitTest.h"
#include "../../Project5.2.2/Project5.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(0, 1, 0);
			Assert::AreEqual(t, 0.);
		}
	};
}

