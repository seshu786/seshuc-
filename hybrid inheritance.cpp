#include <iostream>  
using namespace std;  
class base  
{  
public:  
    a()  
    {  
cout<< "first\n";  
    }  
};  
class derived1: public base  
{  
public:  
    b()  
    {  
cout<< "second\n";  
    }  
};  
class derived2: public base 
{  
public:  
    c()  
    {  
cout<< "third\n";  
    }  
};  
class derived3: public derived2, public derived1  
{  
public:  
    d()  
    {  
cout<< "fourth\n";  
    }  
};  
int main() 
{  
    derived1 obj1;
    derived2 obj2;
    derived3 obj3;
	obj1.a();
	obj1.b();
	obj2.a();
	obj2.c();
	obj3.d();
	obj3.b();
	obj3.c();
    return 0;  
}

