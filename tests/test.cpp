#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(Perimeter, CanCalculatePerimeter) {
	Rectangle result(8,2);
	Rectangle result1(3,4);
	Rectangle result2(9,8);
	
	EXPECT_EQ(20, result.perimeter());
	EXPECT_EQ(14, result1.perimeter());
	EXPECT_EQ(34, result2.perimeter());
	
}


TEST(Area, CanCalculateArea) {
	Rectangle res(8,2);
	Rectangle res1(3,4);
	Rectangle res2(9,8);

	EXPECT_EQ(16, res.area());
	EXPECT_EQ(12, res1.area());
	EXPECT_EQ(72, res2.area());
}

TEST(Constructor, CheckConstructor) {
	Rectangle rect;
	rect.set_width(2);
	rect.set_height(2);
	
	Rectangle rect1;
	rect1.set_width(5);
	rect1.set_height(5);

	Rectangle rect2;
	rect2.set_width(7);
	rect2.set_height(8);

	EXPECT_EQ(4, rect.area());
	EXPECT_EQ(25, rect1.area());
	EXPECT_EQ(56, rect2.area());
}
	
	

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

