#include<iostream>
using namespace std;
void swap(int a,int b)
{
 int c;
 c=a;
 a=b;
 b=c;
 cout<<"After Swapping(In function): a="<<a<<"\tb="<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Before Swapping: a="<<a<<"\tb="<<b<<endl;
    swap(a,b);
    cout<<"After Swapping(In main): a="<<a<<"\tb="<<b<<endl;
}