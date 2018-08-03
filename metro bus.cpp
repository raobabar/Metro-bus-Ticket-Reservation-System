#include<iostream>
#include<conio.h>
#include<dos.h>>
#include<stdlib.h>
using namespace std;

class metro{
public:
void final(){

int choice=1,n,ch,seat=18,b;
 while (choice!=0)
{
cout<<"                                          "<<endl;
cout<<"                                          "<<endl;
cout<<"\t\tWEL COME TO METRO BUS TICKET RESERVATION"<<endl;
cout<<"\t\t--------------------------------------"<<endl<<endl<<endl;
cout<<"1-for Pak secretariat Islamabd \n2-for Rawalpindi\n3-for muree road\n4-for sadar"<<endl;
cout<<"0-for exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"buses are available"<<endl;
cout<<"1-for Bus-1 \n";
cout<<"2-for Bus-2"<<endl;
cout<<"3-for Bus-3"<<endl;
cout<<"0-for exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Bus-1"<<endl<<endl;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  9:00 am"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if (b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl;
cin>>n;
if(n<=seat&&n>0)
{
 cout<<"seats  booked  !"<<endl<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!";
 seat=seat-n;
 getch();
 exit(0);
}
 else
 {
 cout<<"\nseats are not available  for bus-1!!";
}
break;
case 2:
cout<<"Bus-2"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  10:00 am"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl<<endl;
cin>>n;
if(n<=seat&&n>0)
{
 cout<<" seats booked!"<<"\n"<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
 }
 else
 {
 cout<<"seats are not available for bus-2!!";
 }
    break;
    case 3:
cout<<"Bus-3"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<seat<<endl<<endl;
cout<<"timing:  10:00 am"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seat for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
 cout<<" seats booked!"<<"\n"<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
}
 else
 {
 cout<<"seats are not available for bus-3";
 }
    break;
    default:
    cout<<"exit";
    }
    break;
case 2:
cout<<"buses are available"<<endl;
cout<<"1-for Bus-1"<<endl;
cout<<"2-for Bus-2"<<endl;
cout<<"3-f0r Bus-3"<<endl;
cout<<"0-for exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Bus-1"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  11:00am"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
 cout<<" seats booked!"<<"\n"<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
 }
else
 {
cout<<"seats are not available for bus-1";
   }
break;
case 2:
cout<<"Bus-2!"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  12:00pm"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
cout<<"seats booked!"<<endl<<n;
cout<<endl;
cout<<"ENJOYY UR JOURNEYY!!"<<endl;
seat=seat-n;
getch();
 exit(0);
}
 else
 {
 cout<<"seats are not available for bus-2";
   }
    break;
    case 3:
cout<<"Bus-3!"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  12:00pm"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
cout<<"seats  booked!"<<"\n"<<n;
cout<<endl;
cout<<"ENJOYY UR JOURNEYY!!"<<endl;
seat=seat-n;
getch();
 exit(0);
}
 else
 {
 cout<<"seats are not available for bus-3";
 }
    break;
    default:
    cout<<"exit";
    }
    break;
    case 3:
cout<<"buses are available"<<endl;
cout<<"1-for Bus-1"<<endl;
cout<<"2-for bus-2"<<endl;
cout<<"3-for bus-3"<<endl;
cout<<"0-for exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Bus-1"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  1:00pm"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
 cout<<" seats booked!"<<"\n"<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
 }
else
 {
cout<<"seats are not available for bus-1";
 }
break;
case 2:
cout<<"Bus-2"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<seat<<endl<<endl;
cout<<"timing:  2:00pm"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seat for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
cout<<" seats booked!"<<"\n"<<n;
cout<<endl;
cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
}
 else
 {
 cout<<"seats are not available for bus-2";
 }
  break;
case 3:
cout<<"Bus-3"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  2:00pm"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter your seat for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
cout<<"your seats are booked!"<<"\n"<<n;
cout<<endl;
cout<<"ENJOYY UR JOURNEYY!!"<<endl;
seat=seat-n;
getch();
 exit(0);
}
 else
 {
 cout<<"seats are not available for bus-3";
 }
    break;
    default:
    cout<<"exit";
    }
    break;
    case 4:
cout<<"buses are available"<<endl;
cout<<"1-for Bus-1 \n";
cout<<"2-for Bus-2"<<endl;
cout<<"3-for Bus-3"<<endl;
cout<<"0-for Exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Bus-1"<<endl<<endl;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  9:00 am"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl<<endl;
cin>>n;
if(n<=seat&&n>0)
{
 cout<<"seats  booked  !"<<endl<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
 }
 else
 {
 cout<<"\nseats are not available  for bus-1!!";
 }
break;
case 2:
cout<<"Bus-2"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<endl<<seat<<endl;
cout<<"timing:  10:00 am"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seats for booking"<<endl<<endl;
cin>>n;
if(n<=seat&&n>0)
{
 cout<<" seats booked!"<<"\n"<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
 }
 else
 {
 cout<<"seats are not available for bus-2!!";
 }
    break;
    case 3:
cout<<"Bus-3"<<endl<<endl;
seat=18;
cout<<" seats are available!"<<seat<<endl<<endl;
cout<<"timing:  10:00 am"<<endl;
cout<<"Enter in which class u want to travel,Economy or Business Class???"<<endl;
cout<<"Ticket Price of Business class is 1000 and Economy class is 500!!!"<<endl;
cin>>b;
if(b==1000)
{
cout<<"The person has chosen Business Class"<<endl;
}
else if(b==500)
{
cout<<"The person has chosen Economy class"<<endl;
}
cout<<"enter number of seat for booking"<<endl<<endl;
cin>>n;
if(n<=18&&n>0)
{
 cout<<" seats booked!"<<"\n"<<n;
 cout<<endl;
 cout<<"ENJOYY UR JOURNEYY!!"<<endl;
 seat=seat-n;
 getch();
 exit(0);
 }
 else
 {
 cout<<"seats are not available for bus-3";
 }
    break;
    default:
    cout<<"exit";
    }
    break;
    default:
cout<<"exit";
}  }
getch();
}

};
main()
{
metro m;
m.final();
getch();
 
}
