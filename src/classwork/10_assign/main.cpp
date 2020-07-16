//main
#include"employee.h"
#include"engineer.h"
#include"sales_employee.h"

int main()
{
  int choice; 
  double base, bonus, hours, rate, commission; 
 

  do{

    cout<<"\nMake a selection\n(or enter 0 to exit program)\n";
  cout<<"Enter 1 for Engineer, or 2 for Sales Employee\n"; 
  cin>>choice; 
    if(choice == 1){
      cout<<"Enter base pay: "<<"\n";
      cin>>base; 
      cout<<"Enter bonus pay :"<<"\n";
      cin>>bonus; 
      Employee *engineer = new Engineer(base,bonus);
      cout<<"Engineer gross pay: $"<<engineer->get_pay()<<"\n";
      delete engineer; 
      engineer = nullptr; 

    } else if(choice ==2){
      cout<<"Enter hours: "<<"\n";
      cin>>hours; 
      cout<<"Enter hourly rate: "<<"\n";
      cin>>rate; 
      cout<<"Enter commission in dollar amount: "<<"\n";
      cin>>commission; 
      Employee *salesEmp = new SalesEmployee(hours, rate, commission); 
      cout<<"Sales employee gross pay: $"<<salesEmp->get_pay()<<"\n"; 
      delete salesEmp; 
      salesEmp = nullptr; 

    }else if(choice == 0){
      cout<<"Thanks for using this service.\n\n";
      
    }else {
      cout<<"Invalid Input."<<"\n";
    }

  }while(choice != 0);

  

 


  return 0;
}