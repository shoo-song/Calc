#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 제작
	int getGop(int a, int b) { 
		return a * b;
	}

};
//테케 추가
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, gopTest) {
	Cal cal;
	int actual = cal.getGop(3, 5);

	EXPECT_EQ(15, actual);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}