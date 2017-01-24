#include "gtest/gtest.h"
#include "Ordenamiento.h"

template<class instanceType>
class TypeParametrized : public testing::Test {
    public:
        TypeParametrized(){
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

TYPED_TEST_CASE_P(TypeParametrized);

TYPED_TEST_P(TypeParametrized, testName){
    this->instance2test->ordenamientoBurbuja(this->enteros, 3, Ordenamiento<int>::asc);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST_P(TypeParametrized, testName1){
    this->instance2test->ordenamientoinsercion(this->enteros, 3, Ordenamiento<int>::asc);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST_P(TypeParametrized, testName2){
    this->instance2test->ordenamientoSeleccion(this->enteros, 3, Ordenamiento<int>::asc);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST_P(TypeParametrized, testName3){
    this->instance2test->ordenamientoQuickSort(this->enteros, Ordenamiento<int>::asc, 0, 2);
    EXPECT_EQ(1, this->enteros[0]);
}
TYPED_TEST_P(TypeParametrized, testName4){
    this->instance2test->ordenamientoMergeSort(this->enteros, Ordenamiento<int>::asc, 0,2,3);
    EXPECT_EQ(1, this->enteros[0]);
}

REGISTER_TYPED_TEST_CASE_P(TypeParametrized, testName,testName1,testName2,testName3,testName4);
