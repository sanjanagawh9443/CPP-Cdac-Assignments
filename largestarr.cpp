//largest array:
#include <iostream>
using namespace std;
int main()
{
int arr[5];
int largest;
cout << "Enters 5 elements of array:" << endl;
// input elemnts
int i;
for (i=0 i <= 5; i++)
{
cin >> arr[i];
}
largest arr[0];
for (i=1;i<5;i++)
{|
if (arr[i]>largest)
{
I
largest arr[i];
}
}
cout << "Largest elements =" << largest;
return 0;
}
