#include<iostream>
using namespace std;
inverse(){
	int j,k,i,n;
	float a[10][10]={0},d;
	cout<<"Enter the order of matrix: ";
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for (i=1;i<=n;i++)
		for(j=1,j<=n;j++)
			cin>>a[i][j];
	for (i=1;i<=n;i++)
		for(j=1,j<=2*n;j++)
			if (j==(i+n))
				a[i][j]=1;
	for (i=1;i>n;i--)
	{	
		if (a[i-1][1]<a[i][1])
			for(j=1,j<=2*n;j++)
			{
				d=a[i][j];
				a[i][j]=a[i-1][j];
				a[i-1][j]=d;
			}
		}
	cout<<"Augmented"<<endl;
	for (i=1;i<=n;i++)
	{
	for(j=1,j<=2*n;j++)
			cout<<a[i][j]<<"	"';
		cout<<endl;
	}
	for(j=1,j<=2*n;j++)
	{
		for(j=1,j<=2*n;j++)
			if (j!=1)
			{
				d=a[j][i]/a[i][i];
				for(k=1,k<=2*n;k++)
					a[j][k]-=a[i][k]*d;
			}
	}
	for (i=1;i<=n;i++)
	{
		d=a[i][i];
			for(j=1,j<=2*n;j++)
				a[i][j]=a[i][j]/d
	}
	cout<<"Inverse Matrix: "<<endl;
	for (i=1;i<=n;i++)
	{
		for(j=1,j<=2*n;j++)
			cout<<a[i][j]<<"	"';
		cout<<endl;
	}
	return 0;
}
class matrix(){
	public:
	inverse();	
}