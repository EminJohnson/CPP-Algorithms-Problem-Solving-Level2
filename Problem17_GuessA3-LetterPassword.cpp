#include <iostream>
#include <string>

using namespace std;

string ReadPass()
{
    string Pass = "";
    cout << "Enter Your Pass A3 - Letter Password (all capital): \n";
    getline(cin, Pass);
    return Pass;
}

bool GuessPassword(string Pass)
{
    string World = "";
    int Counter = 0;
    for (char i = 65; i <= 90; i++)
    {
        for (char j = 65; j <= 90; j++)
        {
            for (char k = 65; k <= 90; k++)
            {

                    Counter ++;
                    World += i;
                    World += j;
                    World += k;

                    if (Pass == World)
                    {
                         cout << "Password is " << World 
                              << " Found after " << Counter << " Trial (s) \n";
                        return true;
                        
                    }
                    else
                    {
                        cout << "Trial [" << Counter << "] : " << World << endl;
                        World = "";
                    }   
            }
        }
    }
    return false;
}

int main()
{
    while (!GuessPassword(ReadPass())) 
    {
        cout << "\nWrong Input or Password not found. Please try again.\n";
        cout << "___________________________________________________\n";
    }

    cout << "\nSystem Unlocked Successfully!";
    
    return 0;
        
}
