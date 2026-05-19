#include<iostream>
int main() {
  double basic , da , ta , hra , result  ; 

  std::cout<<"enter basic : " ; 
  std::cin>>basic ; 
  da = 0.46*basic ; 
  ta = 0.08*basic ; 
  hra = 0.09*basic ; 

 result = basic + da + ta + hra ; 

 std::cout<<"Gross Salary : " << result ; 
 return 0 ;  
}