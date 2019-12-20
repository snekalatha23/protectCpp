#include <iostream>
using namespace std;

class base
{
 	private:
        int x;

 	protected:
 	    int y;

 	public:
 	    int z;

 	base() //constructor to initialize data members
 	{
 	   x = 1;
 	   y = 2;
 	   z = 3;
 	}
};

class derive: protected base
{
 	//y and z becomes protected members of class derive
 	public:
 	    void showdata()
 	    {
 	       cout << "x is not accessible" << endl;
               cout << "value of y is " << y << endl;
               cout << "value of z is " << z << endl;
 	    }
};
int main()
{
     derive a; //object of derived class
     a.showdata();
     //a.x = 1;   not valid : private member can't be accessed outside of class
     //a.y = 2;   not valid : y is now private member of derived class
     //a.z = 3;   not valid : z is also now a private member of derived class
     return 0;
} 	
