#include<iostream>
#include<unistd.h>
using namespace std;

int const Diamond=0;
int const Spade=1;
int const Heart=2;
int const Club=3;

int const Jack=11;
int const Queen=12;
int const King=13;
int const Ace=1;

struct Card 
{
  int num;
  int suit;
};

int main()
{
  Card prize,temp,ch;
  int position;
  Card c1={5,Club};
  cout<<"\nCard 1 Is 5 Of Club5️⃣☘\n";
  usleep(9000000);
  system("clear");
  Card c2={King,Diamond};
  cout<<"\nCard 2 Is King Of Daimond🤴💎\n";
  usleep(9000000);
  system("clear");
  Card c3={Ace,Spade};
  cout<<"\nCard 3 Is Ace Of Spade1️⃣🖤\n";
  usleep(9000000);
  system("clear");
  cout<<"\nI'm Swapping Card 1 With 3\n";
  temp=c1;c1=c3;c3=temp;
  usleep(900000);
  system("clear");
  cout<<"\nI'm Swapping Card 2 With 3\n";
  temp=c2;c2=c3;c3=temp;
  usleep(9000000);
  system("clear");
  cout<<"\nI'm Swapping Card 3 With 1\n";
  temp=c3;c3=c1;c1=temp;
  usleep(9000000);
  system("clear");
  prize=c2;
  cout<<"Enter The Position Of King Of Daimond Card(1,2 or 3)\n";
  cin>>position;
  usleep(900000);
  system("clear");
  switch(position)
  {
    case 1:ch=c1;break;
    case 2:ch=c2;break;
    case 3:ch=c3;break;
  }
  if((ch.num==prize.num)&&(ch.suit==prize.suit))
  {
    cout<<"\t\tYOU WON!😁😍🤑🤩\n\n";
  }
  else{
    cout<<"\t\tYOU LOSE!😫😤🤯😭\n\n";
  }
  return 0;
}
