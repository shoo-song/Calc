#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 제작
	int minus(int firtValue, int secondValue) {
		return firstValue - secondValue;
	}
};
//테케 추가
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

//테케 추가
TEST(Cal_Minus, minusTc1) {
	Cal cal;
	EXPECT_EQ(2, cal.minus(4,2));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}