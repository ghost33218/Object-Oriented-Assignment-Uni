#include<iostream>
int main() {
    
    std::string name ; 
    int units , left  ; 
    double bill ; 
    std::cout<<"enter your name  : "; 
    std::cin>>name ; 

    std::cout<<"enter number of units consumed : " ; 
    std::cin>>units ; 


    if(units<=100) {
      bill = units*0.6 ; 
      

    }
    else if(units<=300) {
        left = units - 100 ; 
    bill = 100 * 0.6 + left*0.8  ; 
     

    }
    else { 
     left = units - 100 - 200 ; 
     bill = 100*0.6 + 200*0.8 + left*0.9 ; 
      


    }
    if(bill<=50) {
         std::cout<<"Name : "<< name<<" charge :  : 50" ; 
    }
  else if(bill>50 && bill<=300) {
        std::cout<<"Name : "<< name<<" charge :  : "<<bill ; 
  }
  else { 
    bill = bill + 0.15*bill ; 
     std::cout<<"Name : "<< name<<" charge :  : "<<bill ;
  }






    return 0 ; 

}