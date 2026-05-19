#include<iostream>
namespace fun1  { 

int x=19 ; 
int y=1 ; 
int add() {
    return x+y ; 
} 
}

namespace  fun2  {
    int x = 70 ;
  int y = 21 ; 
  int add() {
    return x+y ; 
  }
} 
using namespace fun1 ; 
int main() {  
 
std::cout<<fun2::x ; 
std::cout<<'\n'<<x ; 
std::cout<<'\n'<<fun1::add() ;
std::cout<<'\n'<<fun2::add() ;  




}