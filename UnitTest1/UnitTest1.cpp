#include "pch.h"
#include "CppUnitTest.h"
#include "figure.h"
#include "button.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest_Rectangle)
	{
	public:
		/// 整数型测试
		TEST_METHOD(Rectangle_TestInt)
		{
			Retangle x1("3", "4", 'a');
			Assert::AreEqual(3*4.0, x1.area);
		}
		/// 浮点型测试
		TEST_METHOD(Rectangle_TestDouble)
		{
			Retangle x1("3.5", "4.3", 'a');
			Assert::AreEqual(3.5 * 4.3, x1.area);
		}
		/// 单位换算测试
		TEST_METHOD(Rectangle_TestUnit)
		{
			Retangle x1("2.5", "2", 'b');
			Assert::AreEqual(5.0*2.54*2.54, x1.area);
		}
		
	};
	TEST_CLASS(UnitTest_Triangle)
	{
		TEST_METHOD(Triangle_TestInt)
		{
			Triangle x1("3", "4", 'a');
			Assert::AreEqual(3 * 4.0 / 2, x1.area);
		}
		TEST_METHOD(Triangle_TestDouble)
		{
			Triangle x1("3.5", "4.3", 'a');
			Assert::AreEqual(3.5 * 4.3 / 2, x1.area);
		}
		TEST_METHOD(Triangle_TestUnit)
		{
			Triangle x1("2.5", "2", 'b');
			Assert::AreEqual(2.5 * 2.54 * 2.54, x1.area);
		}
	};
	TEST_CLASS(UnitTest_Circle)
	{
		TEST_METHOD(Circle_TestInt)
		{
			Circle x1("3",  'a');
			Assert::AreEqual(PI*3*3, x1.area);
		}
		TEST_METHOD(Circle_TestDouble)
		{
			Circle x1("3.5",'a');
			Assert::AreEqual(3.5 * 3.5*PI, x1.area);
		}
		TEST_METHOD(Circle_TestUnit)
		{
			Circle x1("2.5",  'b');
			Assert::AreEqual(2.5 * 2.54 * 2.54*2.5*PI, x1.area);
		}
	};
}
