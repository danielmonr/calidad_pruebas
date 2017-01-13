#include "almacen.h"
#include "gtest/gtest.h"

class AlmacenFixture : public ::testing::Test{
	public:
		SetUp(){
		}
		TearDown(){
		}
	private:
		static Almacen a(10);
};

TEST_F(Almacen, constructor){
	ASSERT_EQ(10, a.lista->capacity());
}

TEST_F(Almacen, add){
	a.add(3);
	ASSERT_EQ(1, a.lista->size());
}

TEST_F(Almacen, delet){
	a.delet(0);
	ASSERT_EQ(0, a.lista->size());
}

TEST_F(Almacen, empty){
	ASSERT_EQ(true, a.empty());
}

TEST_F(Almacen, size){
	ASSERT_EQ(0, a.size());
}
