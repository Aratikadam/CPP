#include<iostream>
using namespace std;
class Line
{

};
class Circle
{
	public: 
	bool isTangent(int x1,int x2,int y1,int y2)
	{
		cout<<"Calling isTangent(int x1,int x2,int y1,int y2)"<<endl;
		return false;
	}	
	bool isTangent(int slope,int intercept)
	{
		cout<<"Calling isTangent(int slope,int intercept)"<<endl;
		return true;
	}	
	bool isTangent(Line ln)
	{
		cout<<"Calling isTangent(Line ln)"<<endl;
		return true;
	}
};
int main()
{
	Circle cr;
	bool tangent=cr.isTangent(4,5,6,7);
	if(tangent)
	{
		cout<<"Line is tangent"<<endl;
	}
	else
	{
		cout<<"Line is not tangent"<<endl;
	}
	
	bool tan=cr.isTangent(20,10);
	if(tan)
	{
		cout<<"Line is tangent"<<endl;
	}
	else
	{
		cout<<"Line is not tangent"<<endl;
	}
	
	Line ln1;
	bool tang=cr.isTangent(ln1);	
	if(tang)
	{
		cout<<"Line is tangent"<<endl;
	}
	else
	{
		cout<<"Line is not tangent"<<endl;
	}		
	return 0;
}
