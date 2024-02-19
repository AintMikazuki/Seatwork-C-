#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num[5];
    int z = 0;

    cout<<"Input your number for the array"<<endl;


    for (z =0; z < 5; z++)
    {
          cout<<"Enter a number "<<z<<": ";
          cin>>num[z];

    }

    cout<<endl;
    cout<<"The value You Input"<<endl;

    for (z = 0; z < 5; z++)
    {
        cout<<"Your inputs "<<z<<": "<<num[z]<<endl;
    }

    return EXIT_SUCCESS;
}
//A - 22, CORPUZ, Justin F.
