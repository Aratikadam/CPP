#include<iostream>
using namespace std;
const int Max_rows=100;
const int Max_cols=100;

class Matrix
{
	private:
	int rows,cols;
	int data[Max_rows][Max_cols];
	public:
		
	Matrix(int r,int c):rows(r),cols(c)
	{}
	
	friend istream& operator>>(istream& in,Matrix& mat)
	{
		for(int i=0;i<mat.rows;i++)
		{
			for(int j=0;j<mat.cols;j++)
			{
				in>>mat.data[i][j];			
			}
		}
		return in;
	}
	
	friend ostream& operator<<(ostream& out,const Matrix& mat)
	{
		for(int i=0;i<mat.rows;i++)
		{
			for(int j=0;j<mat.cols;j++)
			{
				out<<mat.data[i][j]<<" ";			
			}
			out<<endl;
		}
		return out;
	}
	
	Matrix operator+(const Matrix& m)
	{
		Matrix result(rows,cols);
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				result.data[i][j]=data[i][j]+m.data[i][j];
			}
		}
		return result;
	}
	
	Matrix operator-(const Matrix& m)
	{
		Matrix result(rows,cols);
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				result.data[i][j]=data[i][j]-m.data[i][j];
			}
		}
		return result;
	}
	
	Matrix operator*(const Matrix& m)
	{
		Matrix result(rows,cols);
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<m.cols;j++)
			{
				result.data[i][j]=0;
				for(int k=0;k<cols;k++)
				{
					result.data[i][j]+=data[i][k]*m.data[k][j];
				}
			}
		}
		return result;	
	}
	
};

int main()
{
	int rows1,cols1,rows2,cols2;
	cout<<"Enter the number of rows and columns for Matrix 1: ";
	cin>>rows1>>cols1;
	Matrix mat1(rows1,cols1);
	cout<<"Enter the elements for Matrix 1: \n";
	cin>>mat1;
	
	cout<<"Enter the number of rows and columns for Matrix 2: ";
	cin>>rows2>>cols2;
	Matrix mat2(rows2,cols2);
	cout<<"Enter the elements for Matrix 2: \n";
	cin>>mat2;
	
	cout<<"Matrix 1: \n"<<mat1;
	cout<<"Matrix 2: \n"<<mat2;
	
	Matrix add=mat1+mat2;
	Matrix sub=mat1-mat2;
	Matrix multi=mat1*mat2;
	
	cout<<"Matrix Addition:\n"<<add;
	cout<<"Matrix Subtraction:\n"<<sub;
	cout<<"Matrix Multiplication:\n"<<multi;
	
	return 0;
}
