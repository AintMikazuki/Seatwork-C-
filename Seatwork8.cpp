#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num[6];
    int z = 0, sum = 0;

    cout<<"Number for the Sum "<<endl;

    for(z = 0; z < 6; z++)
    {
        cout<<"Enter a Number "<<z<<": ";
        cin>>num[z];
    }

    for (z = 0; z < 6; z++)
    {
        sum += num[z];
    }

    cout<<endl;
    cout<<"The total sum is: "<<sum<<endl<<endl;

    return EXIT_SUCCESS;
}
//A - 22, CORPUZ, Justin F.
