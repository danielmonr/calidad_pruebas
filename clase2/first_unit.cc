#include "almacen.cc"
#include "gtest/gtest.h"

class AlmacenF: public testing::Test{
	public:
		void SetUp(){
		}
		void TearDown(){
		}
		Almacen* a = new Almacen(10);
};

TEST_F(AlmacenF, constructor){
	ASSERT_EQ(10, a->lista->capacity());
}

TEST_F(AlmacenF, add){
	a->add(3);
	ASSERT_EQ(1, a->lista->size());
}

TEST_F(AlmacenF, delet){
    a->add(3);
	a->delet(0);
	ASSERT_EQ(0, a->lista->size());
}

TEST_F(AlmacenF, empty){
	ASSERT_EQ(true, a->empty());
}

TEST_F(AlmacenF, size){
	ASSERT_EQ(0, a->size());
}
