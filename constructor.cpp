#include<iostream>
using namespace std;
class MyDate
{
    int day,month,year;
    public:
        void accept()
        {
            cout<<"accept day,month,year\n";
            cin>>day>>month>>year;
        }
        void display()
        {
            cout<<"date is"<<day<<"/"<<month<<"/"<<year<<endl;
        }
        void setDay(int d)
        {
            cout<<"setter function is called\n";
            day=d;
        }
        void setMonth(int m)
        {
            cout<<"setter function for month is called\n";
            month=m;
        }
        void setYear(int y)
        {
            cout<<"setter function for year is called\n";
            year=y;
        }
        int getMonth()
        {
            return month;
        }
        int getYear()
        {
            return year;
        }
};
int main()
{
    MyDate d1;
    cout<<"size of object d1 is"<<sizeof(d1);
    d1.accept();
    d1.display();
    d1.setDay(27);
    d1.display();
    d1.setMonth(3);
    d1.display();
    int m=d1.getMonth();
    cout<<"current value for month is"<<m<<endl;
    d1.setYear(2027);
    d1.display();
    int y=d1.getYear();
    cout<<"current value for year is"<<y<<endl;
}

