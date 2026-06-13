#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int length;
    
    cout << "Write the length of the array: " << endl;
    cin >> length;

    int myNums[length];

    for(int i=0; i < length; i++){
        cout << "Write the index " << i <<endl;
        cin >> myNums[i];
    }

    cout << "The input array is: "<<endl;

    for(int i=0; i < length; i++){
        cout << myNums[i] << " ";  //If wanna print array top to down just have endl; afetr the space given in commas <---
    }
    return 0;

}