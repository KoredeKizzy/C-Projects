//Account class for FCMB Rukpokwu branch
#include <iostream>
#include <string>


using namespace std;

class Account
{
    public:
        // constructor initializes owners name
        Account ( string name, int money, int remv )
        {
            setBalance( money);
            setOwnerName( name );
            setDebit ( remv );
        }

       // function to set owners name
       void setOwnerName ( string name )
       {
           OwnerName = name;
       }
    // function to get owners name
       string getOwnerName()
       {
           return OwnerName;
       }

     // function to set balance
        void setBalance( int money )
        {
            Balance = money;
        }
       // function to get balance
        int getBalance()
        {
            return Balance;
        }
          // function to set debit
        void setDebit ( int remv )
        {
            Debit = remv;
        }
        // function to return debit balance
        int getDebit()
        {
            return Debit;
        }
        // regular account information
        void accountMessage()
        {
            cout << "Welcome Dear customer\nWelcome to FCMB Bank" <<endl;
        }

    private:
        int Balance;
        int Debit;
        string OwnerName;
};

    int main()
{
     Account myAccount1;
     myAccount1.displayMessage;



    cout << myAccount1.accountMessage() << "\ncreated for:\n"
    << myAccount1.getOwnerName() << "\nFrom" << myAccount2.getOwnerName() << endl;

     // modifying the class object
    myAccount1.getBalance();

    cout << "\nwith an account balance of:" << myAccount1.getBalance() << endl;

}













