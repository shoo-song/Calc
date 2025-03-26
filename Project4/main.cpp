#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 제작
	int Add(int a, int b) {
		return a + b;
	}
};
//테케 추가
TEST(Cal, AddTest) {
	Cal C;
	int result = C.Add(3, 5);
	EXPECT_EQ(result, 8);
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}