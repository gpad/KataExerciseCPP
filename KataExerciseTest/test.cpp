#include "pch.h"

#include "../KataExercise/SimpleObject.h"

TEST(TestSimpleObject, CreateIt) {

	SimpleObject obj(42, nullptr);
	EXPECT_EQ(obj.GetValue(), 42);
}

class MockSimpleInterface : public SimpleInterface {
public:
	MOCK_METHOD0(F1, void());
	MOCK_METHOD1(F2, int(int v));
};

using ::testing::AtLeast;
using ::testing::Return;

TEST(TestSimpleObject, ShouldCallService) {
	MockSimpleInterface service;
	EXPECT_CALL(service, F1()).Times(AtLeast(1));
	EXPECT_CALL(service, F2(77)).Times(AtLeast(1)).WillRepeatedly(Return(666));
	SimpleObject obj(77, &service);

	obj.CallService1();
	auto ret = obj.CallService2();

	EXPECT_EQ(ret, 666);
}