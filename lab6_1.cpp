#include<iostream>
using namespace std;

int main(){
    int number=999;
    int even =0;
    int odd =0;
    while(number!=0)
    {
        cout << "Enter an integer: ";
        cin >> number;
        if(number%2==0&&number!=0)
        {
            even+=1;
        }
        if(number%2==1&&number!=0)
        {
            odd+=1;
        }
    }
    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}
