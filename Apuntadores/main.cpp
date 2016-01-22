#include <iostream>

using namespace std;

int main()
{
    int *num = new int(10);

    /*for(int i=0;;i++){
        *(num+1) = 40;
        cout<<*(num+1)<<endl;
        cout.flush();
    }*/

    int *arr2 = new int[3];
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;

    cout<<arr2[0]<<endl;
    cout<<arr2[1]<<endl;
    cout<<arr2[2]<<endl;

    return 0;
}
