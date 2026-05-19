#include<iostream>
int main() { 

int days , left  ; 
double fine ; 
std::cout<<"enter number of days : " ; 
std::cin>>days ; 

if(days<=5) {
  fine  = 0.5*days ; 
  std::cout<<"fine : "<<fine ; 

}
else if(days>=6 && days<=10) {
    left = days - 5 ; 
    fine =  5*0.5 + left*1 ; 
    std::cout<<"fine : "<<fine ; 
}
else if(days>10 && days<=30) {
    left = days - 5 - 5 ; 
    fine = left*5 + 5*0.5 + 5*1 ; 
    std::cout<<"fine : "<<fine ; 
}
else { 
    std::cout<<"membership is cancelled ....." ; 
}

return 0; 
}