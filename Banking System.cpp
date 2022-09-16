   #include<bits/stdc++.h>  
 using namespace std;
 
 
 class Account  {
     long int acc_no; 
     string name;
     double balance;
     
     
     public:  //  in order to make it accessible everywhere 
     Account(long int no,string n) {
         balance=0;
         acc_no=no;
         name=n; 
     }
     
     
      void credit (double bal) {
          balance+=bal;  // for updating the balance 
      }   
      
      void debit (double bal) {
          if (balance<bal) {
              cout<<"insufficient balance"<<endl; 
          }
      }
      
      
      void display () {
          cout<<"Account Number : "<<acc_no<<endl;
          cout<<"Account Holder Name : "<<name<<endl;
          cout<<"Current Balance : "<<balance<<endl;
      }
      
      
      void transaction () {
          int choice =0;   // choice entered by user in integer form
          int ch=0;   // intitialization with zero 
          double bal=0.0;  // balance can be in decimal also 
          
          
          do {
              cout<<"1. Credit Amount"<<endl;
              cout<<"2. Debit Amount"<<endl;
              cout<<"3. Exit"<<endl;
              cout<<"Enter Choice"<<endl;
              cin>>choice;
              
              
              switch(choice) {  // works acc to user choice 
                  case 1: 
                  cout<<"Enter Amount :  ";
                  cin>>bal;  
                  credit(bal);
                  display();
                  break;
                  
                  case 2: 
                  cout<<"Enter Amount :  ";
                  cin>>bal;
                  debit(bal);
                  display();
                  break;
                  
                  case 3:
                  cout<<"Thank You ! "<<endl;
                  
                   default:
                  cout<<"Invalid Choice" <<endl;
                  
                  exit(0);
                  break;
                 
              }
              
              
              cout<<"Do You want to transact again ....press 1 for yes otherwise press 0"<<endl;
              cin>>ch;
          }
          
          while (ch==1);  
          }
      };
      
     
 int main () 
 
 {
     
     long int acc_no;     
     string name;
     
     cout<<"Enter Account Number : ";
     cin>>acc_no;
     cout<<"Account Holder Name : ";
     cin>>name;
     Account acc(acc_no,name); 
     acc.transaction();
     return 0 ;
     
 }
 

