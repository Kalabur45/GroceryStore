//Author: Jerm Deeezy (Rhodes)
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        bool q;
        q = true;
        string newItem;
        do
        {
                

                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if(input=='Q' || input=='q')
                {
                        q = false;
                }

                if(input=='A' || input=='a')
                {

                        cout<<"What is the item?\n";
                                if(numItems<5)
                                {
                                        cin>>newItem;
                                        list[numItems] = newItem;
                                        numItems++;
                                }
                                else if(numItems>=5)
                                {
                                        cout<<"You'll need a bigger list!\n";
                                }

                }
           } while(q == true);

        cout << "==ITEMS TO BUY==\n";

        for(int index = 0; index < 5; index++)
        {
                cout<< index + 1 << " " << list[index] << endl;
        }



        return 0;
}


