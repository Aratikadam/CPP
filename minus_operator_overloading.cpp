#include<iostream>
using namespace std;
class Complex
{
	private:
	int real,imag;
	public:
	Complex(int r=0,int i=0)
	{
		real=r;
		imag=i;	
	}
	Complex operator-(Complex const& obj)
	{
		Complex res;
		res.real=real-obj.real;
		res.imag=imag-obj.imag;
		return res;
	}
	void input()
	{
		cout<<"Enter real part: ";
		cin>>real;
		cout<<"Enter imaginary part: ";
		cin>>imag;
	}
	void print()
	{
		cout<<real<<" - i"<<imag<<endl;
	}
		
};
int main()
{
	Complex c1,c2,c3;
	cout<<"Enter the first complex number: "<<endl;
	c1.input();
	cout<<"Enter the second complex number: "<<endl;
	c2.input();
	c3=c1-c2;
	cout<<"Sum: ";
	c3.print();
	return 0;
}
