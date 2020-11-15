#include <iostream>

using namespace std;

int main()

{
    for(int i= 1; i<= 5; i++)// The main forLoop
    {
        for(int a= 5-i; a>0;a--)// This is used to give the space and start it from the other side
        {
            cout<<" ";
        }
        for (int j=1; j<= i; j++)// used to give the * properly
        {
            cout<<"*";
        }
        cout <<endl; 
    }
    

    


}