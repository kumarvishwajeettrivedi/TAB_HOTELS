#include <iostream>
#include <string.h>

#include<stdlib.h>
using namespace std;
int p = 0;
class hotel
{
    char roomn[5], host[10], start[5], end[5];
    int chair;

public:
    void book();
    void allotment();
    bool isempty();
    void chair_allotment();


} 
room[10];

void pattern(char ch){
    for(int i=0;i<40;i++){
        cout<<ch ;
    }
}
void print(){
    pattern('*');
    cout<<"\n\t \t \tHOTEL BOOKING SYSTEM \t\t\t\n";
    pattern('*');
}



void hotel::book()
{

    cout<<"\nenter room  no: ";
    cin>>room[p].roomn;
    cout<<"\n enter host name : ";
    cin>>room[p].host;
    cout<<"\n enter the start timing :";
    cin>>room[p].start;
    cout<<"\n enter the end time :";
    cin>>room[p].end;
    pattern('-');
    cout<<"\n";
    pattern('-');
       
       
    
    p++;
}

void hotel::allotment(){
    
            pattern('+');
    for(int i=0;i<p;i++){
        cout<<"\nroom no \t \t ||"<<room[i].roomn<<"\nis alloted to\t \t ||"<<room[i].host<<"\n from \t \t ||"<<room[i].start<<"\n to\t \t ||"<<room[i].end<<"\n";
 pattern('$');
    }
        cout<<"\n";
        for(int i=1;i<=p;i++){
         cout<<"no of chair occupied\t \t ||"<<room[i].chair<<"\t \n \n";
        
        pattern('-');
           cout<<"\n";
        }
      
   
}
bool hotel::isempty(){//not working properly

    char n[5];
    cout<<"enter room no \n";
    cin>>n;
    for(int i=0;i<p;i++){
        
    if(strcmp(room[i].roomn,n)==0)
    {
    break;
    }
    else{
        return true;
        
    }
    }
    return false;
        
}


void hotel::chair_allotment(){
    int n;
    int k=80;
    

      
for(int i=0;i<=p;i++){
    

    if(room[i].isempty()==false){
        
    cout<<"enter the no of chairs\n";
    cin>>n;
    
    }
    
    if(n>32){
        cout<<"chair not available\n";
    }
    else{
        k=k-n;
        room[i].chair=n;
        cout<<"chair alloted\n";
    
  }
}
  
   
}



int main(){
    print();
    
        int m;
    while(1){
 cout<<"\n";
 pattern('.');
 cout<<"\n";
    cout<<"\n enter 1 to book room \n enter 2 to check alloted room \n enter 3 to check empty rooms \n enter 4 to show chair_allotment in room \n";

    cout<<"\n";
    pattern('.');
        cin>>m;
    switch(m){
        case 1 :
        room[p].book();
        break;
        
        case 2 :
         room[p].allotment();
         break;
         
         case 3 :
         room[p].isempty();
         break;
         
        case 4 :
         room[p].chair_allotment();
         break;
        
       
         default :
        
         break;
        }
    }
    
}