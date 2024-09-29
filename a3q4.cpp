//Friend Class
#include<iostream>
using namespace std;
class test
{
	int a, b;
	public:
		void getdata(int x, int y)
		{
			a=x;
			b=y;
		}
		friend class sample;
};
class sample
{
	int m, n;
	public:
		int compare(test h)
		{
			if(h.a>h.b)
			return h.a;
			else
			return h.b;
		}
};
int main()
{
	test t1,t2,t3;
	sample s1,s2,s3;
	t1.getdata(20,12);
	t2.getdata(123,45);
	cout<<s1.compare(t2);
}
