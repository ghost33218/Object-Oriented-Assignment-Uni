#include<iostream>
int main() {
//variation of for loop
std::cout<<"For loop variation\n" ; 
for(int i=0 ; i<10 ; i++) {
    std::cout<<i<<" " ; 

} 

std::cout<<'\n' ; 
int i=0 ; 
for(;i<10 ; i++) {
    std::cout<<i<<" " ; 
}
std::cout<<'\n' ; 
i=0 ; 
for(; i<10 ; ) {
    std::cout<<i<<" " ;
    i++ ; 
}

//variation for while loop 
std::cout<<"\nwhile loop variation\n" ; 
int j=0 ; 
while(j<10) {
    std::cout<<j<<" " ; 
    j++ ; 
}
std::cout<<"\nDO While variations\n" ; 
//variation in do while loop 
int k  = 0 ; 
do{
  std::cout<<k<<" " ; 
  k++ ; 
}while(k<10) ; 
std::cout<<'\n' ; 
//do while being excuted one time even thou the condition is wrong 
k = -1 ; 
do{
    std::cout<<k<<" " ; 
    k++ ; 
}while(k>0) ; 
return 0; 


}