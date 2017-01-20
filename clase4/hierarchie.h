#include <iostream>

using namespace std;

class Base{
    public:
        virtual int dosomething() = 0;
};

class Child1 : public Base{
    public:
        int dosomething(){
            cout << "soy el 1" << endl;
            return 1;
        }
};

class Child2 : public Base{
    public:
        int dosomething(){
            cout << "soy el 2" << endl;
            return 1;
        }
};

class Child3 : public Base{
    int value;
    public:
    Child3(int value): value(value){}

    int dosomething(){
        cout << "soy el hijo 3 con valor " << value << endl;
        return 1;
    }
};
