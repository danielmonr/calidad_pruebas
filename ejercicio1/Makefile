ALL: test_type test_param

.PHONY= clean

clean:
	\rm -rf test*

test_type: type_tests.cc
	g++ -isystem ../googletest-master/googletest/include/ -pthread type_tests.cc gtest_main.a -o test_type

test_param: TypeParametrized.cc
	g++ -isystem ../googletest-master/googletest/include/ -pthread TypeParametrized.cc gtest_main.a -o test_param
