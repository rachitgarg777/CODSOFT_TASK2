#include<iostream>
#include<ctime>
using namespace std;
int main()
{   int flag=1;
    while (flag)
    {
    
    srand(time(0));
    int random=rand()%50;
    int guess=0,moves=0;
    cout<<"Welcome!this is a random number guessing game ranging from 0 to 50...."<<endl;
    do{
        moves++;
        cout<<"Enter the number you guess:";
        cin>>guess;

        if (guess==random)
        {
            cout<<"Kudos!! You have guessed the right number in "<<moves<<" moves"<<endl;
        }
        else if(guess<random)
        {
            cout<<"Wrong guess, enter a higher number!"<<endl;
        }
        else
        {
            cout<<"Wrong guess, enter a lower number!"<<endl;
        }
        
    }while (guess!=random);
 
    cout<<"Do u want to play again? press (1-yes/0-no)";
    cin>>flag;

    }   
}