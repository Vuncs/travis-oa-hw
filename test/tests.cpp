#include "gtest/gtest.h"

#include "basicops.h"

TEST(AddTest, testAddFunction1)
{
	int a = basicops::add(5, 2);
	EXPECT_EQ(7, a);
}

TEST(AddTest, testAddFunction2)
{
	int a = basicops::add(-7, 8);
	EXPECT_EQ(1, a);
}

TEST(AddTest, testAddFunction3)
{
	int a = basicops::add(-4, -5);
	EXPECT_EQ(-9, a);
}

TEST(SubTest, testSubFunction1)
{
	int a = basicops::sub(5, 2);
	EXPECT_EQ(3, a);
}

TEST(SubTest, testSubFunction2)
{
	int a = basicops::sub(-7, 8);
	EXPECT_EQ(-15, a);
}

TEST(MulTest, testMultiplicationFunction1)
{
	int a = basicops::multi(5, 2);
	EXPECT_EQ(10, a);
}

TEST(MulTest, testMultiplicationFunction2)
{
	int a = basicops::multi(-7, 8);
	EXPECT_EQ(-56, a);
}

TEST(DivTest, testDivisionFunction1)
{
	int a = basicops::div(6, 2);
	EXPECT_EQ(3, a);
}

TEST(DivTest, testDivisionFunction2)
{
	int a = basicops::div(-15, 5);
	EXPECT_EQ(-3, a);
}


TEST(DivTest, testDivisionFunction3)
{
	int a = basicops::div(6, 0);
	EXPECT_EQ(0xFFFFFFFF, a);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

