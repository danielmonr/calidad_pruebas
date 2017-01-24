#include "Ordenamiento.cpp"
#include "gtest/gtest.h"

template<class instanceType>
class FixTyped : public testing::Test {
    public:
        FixTyped(){
            instance2test = new instanceType;
        }
        void SetUp(){
            enteros = new int[3];
            enteros[0] = 2;
            enteros[1] = 1;
            enteros[2] = 3;
        }
    protected:
        Ordenamiento<int>* instance2test;
        int* enteros;
};

typedef testing::Types<Ordenamiento<int> > implementations;

TYPED_TEST_CASE(FixTyped, implementations);
TYPED_TEST(FixTyped, testName){
    this->instance2test->ordenamientoBurbuja(this->enteros, 3, Ordenamiento<int>::asc);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST(FixTyped, testName1){
    this->instance2test->ordenamientoinsercion(this->enteros, 3, Ordenamiento<int>::asc);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST(FixTyped, testName2){
    this->instance2test->ordenamientoSeleccion(this->enteros, 3, Ordenamiento<int>::asc);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST(FixTyped, testName3){
    this->instance2test->ordenamientoQuickSort(this->enteros, Ordenamiento<int>::asc, 0, 2);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST(FixTyped, testName4){
    this->instance2test->ordenamientoMergeSort(this->enteros, Ordenamiento<int>::asc, 0,2,3);
    EXPECT_EQ(1, this->enteros[0]);
}
