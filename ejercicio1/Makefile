ALL: test
.PHONY= clean

clean:
	\rm -rf test

test:
	g++ -isystem ../googletest-master/googletest/include/ -pthread tests.cc gtest_main.a -o test
