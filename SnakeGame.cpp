#include<iostream>
using namespace std;
int main(){

string NAME_ONE;
string NAME_TWO;
unsigned int POINTS1;
unsigned int POINTS2;
unsigned int TEMP1;
unsigned int TEMP2;
unsigned int STATUS1;
unsigned int STATUS2;
STATUS1=0;
STATUS2=0;
POINTS1=0;
POINTS2=0;
TEMP1=0;
TEMP2=0;
cout<<"ENTER FIRST NAME OF PLAYER ONE:";
cin>>NAME_ONE;
cout<<"ENTER FIRST NAME OF PLAYER TWO:";
cin>>NAME_TWO;

do{
cout<<"<ENTER ANY DIGIT FROM 1 TO 6>"<<endl;
cout<<NAME_ONE<<":";cin>>TEMP1;

if((TEMP1>6)||(TEMP1<1))
{   cout<<"INVALID DIGIT. PlEASE RETRY"<<endl;
    cout<<"<ENTER ANY DIGIT FROM 1 TO 6>"<<endl;
    cout<<NAME_ONE<<":";cin>>TEMP1;
 }
 POINTS1=POINTS1+TEMP1;
 if(POINTS1==15)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
    POINTS1=POINTS1+7;}
if(POINTS1==30)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
    POINTS1=POINTS1+7;}
if(POINTS1==50)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
 POINTS1=POINTS1+7;}
if(POINTS1==70)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
 POINTS1=POINTS1+7;}

if(POINTS1==20)
{cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS1=POINTS1-7;}
if(POINTS1==40)
{cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS1=POINTS1-7;}
if(POINTS1==60)
{cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS1=POINTS1-7;}
if(POINTS1==90)
{cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS1=POINTS1-7;}
 STATUS1=POINTS1;
 cout<<NAME_ONE<<" STATUS:<"<<STATUS1<<">"<<endl;
 if(POINTS1>=100) break;






cout<<"<ENTER ANY DIGIT FROM 1 TO 6>"<<endl;
cout<<NAME_TWO<<":";cin>>TEMP2;

if((TEMP2>6)||(TEMP2<1))
{   cout<<"INVALID DIGIT. PlEASE RETRY"<<endl;
    cout<<"<ENTER ANY DIGIT FROM 1 TO 6>"<<endl;
    cout<<NAME_TWO<<":";cin>>TEMP2;
 }
 POINTS2=POINTS2+TEMP2;
if(POINTS2==15)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
    POINTS2=POINTS2+7;}
if(POINTS2==30)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
    POINTS2=POINTS2+7;}
if(POINTS2==50)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
    POINTS2=POINTS2+7;}
if(POINTS2==70)
{cout<<"YOU STEPPED UP SEVEN POINTS"<<endl;
    POINTS2=POINTS2+7;}

if(POINTS2==20)
{ cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS2=POINTS2-7;}
if(POINTS2==40)
{ cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS2=POINTS2-7;}
if(POINTS2==60)
{cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS2=POINTS2-7;}
if(POINTS2==90)
{cout<<"YOU GOT SNAKE BITE SEVEN POINTS DOWN"<<endl;
    POINTS2=POINTS2-7;}

 STATUS2=POINTS2;
 cout<<NAME_TWO<<" STATUS:<"<<STATUS2<<">"<<endl;
  if(POINTS2>=100) break;


}while(true);

if(POINTS1>=10)
{ cout<<NAME_ONE<<" WON THE GAME"<<endl;
}
else{
    cout<<NAME_TWO<<" WON THE GAME"<<endl;
}


cout<<"GCT@PRINCE-MUGHAL"<<endl;

return 0;}
