#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int FristNum,SecondNum,LowRend=10,UperRend=20;
    cout<<"Hello freind guess two numbers between 10 to 20 "<<endl;
    cout<<"Frist Number = ";
    cin>>FristNum;
    cout<<"Second Number = ";
    cin>>SecondNum;
    srand(time(0));
    int RendNum1 = rand() % (UperRend - LowRend + 1) + LowRend;
    int RendNum2 = rand() % (UperRend - LowRend + 1) + LowRend;



    if(FristNum==RendNum1)
    {
        cout<<"Frist Number is matching Frist randam number and the number is "<<FristNum<<endl;
        cout<<"The second randem number = "<<RendNum2<<endl;
    }
    else if (SecondNum==RendNum2)
    {
        cout<<"Second Number is matching Second randam number and the number is "<<SecondNum<<endl;
        cout<<"The second randem number = "<<RendNum1<<endl;
    }
    else if (FristNum==RendNum1 && SecondNum==RendNum2)
    {
        cout<<"Frist Number and Second Number are matching Frist randam number and Second randam number and the numbers are "<<endl<<"Frist Number "<<FristNum<<endl<<"Second Number "<<SecondNum<<endl;
    }
    else
    {
        cout<<"Good luck! your numbers do not match "<<endl;
        cout<<"The frist randem number = "<<RendNum1<<endl;
        cout<<"The second randem number = "<<RendNum2<<endl;
    }
    

    return 0;
}