#include <iostream>
using namespace std;
int main()
{
	float matrix1[3][3] = {{22.9, 33.0, 4.0}, {42.0, 2.0, 1.1}, {4.0, 1.1, 2.0}};
	float matrix2[3][3] = {{1.1, 2.2, 3.0}, {22.0, 44.0, 22.2}, {1.1, 1.2, 1.3}};
	float sum[3][3];
	cout << " First Matrix " << endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << matrix1[i][j]<<"\t";
		}cout << endl;
	 }cout << endl;
	cout << " Second Matrix " << endl;
	 for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << matrix2[i][j]<<"\t";
		}cout << endl;
	 cout << endl;
}
cout << " This is sum " << endl;
for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			sum[i][j] =  matrix1[i][j] + matrix2[i][j];
			cout << sum[i][j] <<"\t";
		}
	 cout << endl;
}
};