#include<iostream>
struct fine { 
    private : 
    int days ;
    
    double fine ;   
    public : 
    int displayfine(int d) {
        days = d ; 
         int left ;
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
    }

} ; 
int main() { 
   fine l1 ; 
   int day ; 
   std::cout<<"enter how many days the book was late : " ; 
   std::cin>>day ; 
  l1.displayfine(day) ; 


  return 0 ;

}