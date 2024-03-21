
#include <iostream>
using namespace std;

class GFG {
private:
	int private_variable;
 friend class F;
protected:
	int protected_variable;
    
public:
	GFG()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	
	
};


class F {
public:
	void display(GFG &x )
	{
		cout << "The value of Private Variable = "<< x.private_variable<<endl;
		cout << "The value of Protected Variable = "<<x.protected_variable<<endl;
    }
};


int main()
{
	GFG g;
	F fri;
	fri.display(g);
	return 0;
}
