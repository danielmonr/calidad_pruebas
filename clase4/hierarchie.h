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
