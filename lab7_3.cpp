//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;
int main()                              
{
    string status;
    int age,high,money;
    cout << "How old are you?: ";
    cin >> age;
    if (age <= 20)
    {
        cout << "How tall are you?: ";
        cin >> high;
        if (high < 160)
        {
            status = "UNFRIEND";
        }
        else if (high < 175)
        {
            status = "FRIEND";
        }
        else
        {
            cout << "How much do you have asset?: ";
            cin >> money;
            if (money > 69e7)
            {
                status = "MARRIED";
            }
            else
            {
                status = "ONE-NIGHT-STAND";
            }
            
            
        }
        
        
        

    }
    else if (age < 30)
    {
        cout << "How much do you have asset?: ";
        cin >> money;
        if (money > 10e7)
            {
                status = "BEST FRIND";
            }
            else
            {
                status = "UNFRIEND";
            }
    }
    else
    {
        status = "UNFRIEND";
    }
    

    cout << status;                                        
}
   
    