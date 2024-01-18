#include <iostream>
using namespace std;

class clsPerson
{
    private: //only accessable inside this calass
        int Variabl1=5;
        int Function1()
            {
                return 40;    
            }
    protected: //only accessable inside this calass and all classes inhirets this calss
    int Variabl2=100;
    int Function2()
        { 
            return 50;
        } 
    public: 
    //accessable for everyone outside/inside/and classes inherits this class
        string FirstName;
        string LastName;

        string FullName()
        {
            return FirstName + " " + LastName;
        }

};

int main()
{
    clsPerson person1;
    person1.FirstName = "yousef";
    person1.LastName = "elsam";
    cout << person1.FullName() << endl;
}
