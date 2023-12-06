#include<bits/stdc++.h>
using namespace std;
class base
{
public:
	virtual string getName() = 0;
};
class child : public base
{
public:
	string getName()
	{
	return "Khalid";
	}
};
class fullname : public base
{
public:
	string getName()
	{
	return "Khalid Hossen";
	}
};
int main()
{
	child obj1;
	fullname obj2;
	base* ptr;
	ptr = &obj1;
	cout << "nickname - " <<
			ptr->getName();
	ptr = &obj2;
	cout << "\nFull form - " <<
			ptr->getName();
	return 0;
}
