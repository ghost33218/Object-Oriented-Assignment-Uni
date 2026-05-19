#include<iostream> 
struct number { 
  int x = 3 ; 
  int y = 2 ; 
  private : 
  int sum () {
     return x+y ;  
  } 
 //calling of private member functions inside public member function . 
  public : 
  void sum5() { 
    int a = sum() ; 
    a = a+ 5 ;
    std::cout<<a ; 
  }
  

} ; 
int main() { 
    number l ; 
    std::cout<<"we are calling public function and inside the public function we have private function call\n" ; 
     l.sum5()  ; 
   
}