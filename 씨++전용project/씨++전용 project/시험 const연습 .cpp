#include<iostream>
using namespace std;
struct s 
{
	s(int c) :c(c) {}
	const int c;
};
struct s s1, s2;
int main()
{
	struct s s1;
}