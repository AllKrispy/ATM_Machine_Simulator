#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int PIN,Pass=12345,count=0,option;
    double balance=0.0,withdraw=0.0,deposit=0.0;
    bool istrue=true;
    system("Color F1");
    do
    {
        cout << "---------Welcome to your Bank ATM---------\n";
        cout << "    Please enter your PIN: ";
        cin >> PIN;
        system("cls");
        if(PIN==Pass)
        {
            do
            {
            cout<< "---------Welcome to your Bank ATM---------\n"
                << "1.Balance\n"
                << "2.Withdraw\n"
                << "3.Deposit\n"
                << "4.Exit\n";
            cout<< "Choose an option: ";
            cin >> option;
            switch(option)
            {
            case 1:
                cout <<"Current balance: $" << balance << endl;
                system("pause");
                system("cls");

                break;
            case 2:
                if(balance<=0)
                {
                    cout<<"We are sorry, but you do not have any funds in your account.\nPlease deposit some funds to countinue.";
                }
                else
                {
                cout <<"Amount to be withdrawn: $";
                cin >> withdraw;
                cout <<"You will get your money once you take out your ATM card.\n";
                balance=balance-withdraw;
                }
                system("pause");
                system("cls");
                break;
            case 3:
                cout <<"Amount to be Deposited: $";
                cin >>deposit;
                balance=balance+deposit;
                system("pause");
                system("cls");
                break;
            case 4:
                if(balance<0)
                {
                    printf("\n          HEY!YOU CANNOT LEAVE!\n         YOU HAVE SO MUCH LOAN ON YOURSELF!\n       YOU HAVE TO HAVE A BALANCE OF 0 OR MORE TO LEAVE!\n");
                    system("pause");
                    system("cls");
                    istrue=true;
                }
                else
                {
                cout <<"Thank you for banking with us.\nHave a nice day :)";
                istrue=false;
                }
                break;
            default:
                cout <<"Please enter a value of 1,2,3 or 4.\n";
                system("pause");
                system("cls");
            }
            }while(istrue!=false);
        }
        else
        {
            count++;
            if(count==5)
            {
                istrue=false;
            }
            else
            {
                cout<<"INCORRECT PASSWORD\n";
            }
        }
    }while(istrue!=false);
    return 0;
}
