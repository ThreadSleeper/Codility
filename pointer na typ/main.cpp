#include <iostream>

using namespace std;

int main()
{

    char A[]={1,2,3,4,5,6,7,8,9};

    //cout << *((short*)A+2);
    cout << (short*)A<<endl;
    cout << (char*)A<<endl;
    cout << A<<endl;
    cout << *A<<endl;
    cout << *(A+2)<<endl;
    cout << *((short*)A)<<endl;
    cout << (short&)A<<endl;

    return 0;
}
