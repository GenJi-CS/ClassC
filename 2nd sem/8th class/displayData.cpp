#include<iostream>
using namespace std;

class date
{
    private:
        int dd,mm,yy;

    public:
        date()
        {
            dd=31;
            mm=12;
            yy=2016;
            cout<<"\nDate Object has been created.........\n";
        }
        void display()
        {
            cout<<"\nThe entered date is: ";
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};

int main()
{
    date date1;
    date1.display();
    return 0;
}