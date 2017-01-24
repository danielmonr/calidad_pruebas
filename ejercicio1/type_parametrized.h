#include "gtest/gtest.h"
#include "Ordenamiento.h"

template<class instanceType>
class TypeParametrized : public testing::Test {
    public:
        TypeParametrized(){
            instance2Test = new instanceType;
        }
    protected:
        Ordenamiento<int>* instance2Test;
};

TYPED_TEST_CASE_P(TypeParametrized);

