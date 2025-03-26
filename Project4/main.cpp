#include "gmock/gmock.h"
#include <iostream>

class Cal {
public:
	// 이곳에 제작
	int zegop(int x) {
		return x * x;
	}
};
//테케 추가
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, t3) {
	Cal c;
	int ret = c.zegop(4);
	int expect = 16;

	EXPECT_EQ(expect, ret);
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}