#include <iostream>
using namespace std ;
int main()
{
    int mark;
cout<<"Enter your mark: ";
cin>>mark;
if(mark>=100||mark<=0){cout<<"invalid mark";}
    else if (mark>=80){cout<<"pass \n a+";}
    else if(mark>=60){cout<<"a";}
    else if (mark>=40){cout<<"b";}
    else{cout<<"fail";}


    return 0;
}
