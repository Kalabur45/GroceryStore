//Author: Jerm Deeezy (Rhodes)
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string> list; //array of 5 strings
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
                        cin>>newItem;      


                        list.push_back(newItem);
                        numItems++;  
                }
        } while(q == true);

        

        
        if(numItems == 0)
        {
                cout<< "No items to buy!\n";
        }
        else
        {
                cout << "==ITEMS TO BUY==\n";
                for(int index = 0; index < list.size(); index++)
                {
                cout<< index + 1 << " " << list[index] << endl;
                }
        }




        return 0;
}


