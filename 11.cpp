#include<iostream>
int main() {

 int count , choice ; 
 int candi[] = { 0 , 0 , 0 , 0 , 0 , 0 } ; 
std:: cout<<"1) To vote\n" ;  
std::cout<<"2) To exit\n" ; 

do {
    std::cout<<"enter choice : " ;
    std::cin>>choice ;  

    switch(choice) {
        case 1 : 
        std::cout<<"enter the candidate u wanna vote : "  ;
        std::cin>>count ; 
        if(count>=1 && count<=5 ) {
            candi[count-1]++ ; 
        } 
        else { 
            candi[5]++  ; 
        }
    
    
    
    } 
}while(choice!=2) ; 



    for(int i=0 ; i<=5 ; i++) {
        if(i!=5){
        std::cout<<"candidate "<< i+1 <<" votes : " <<candi[i]<<'\n' ;   }
        else { 
            std::cout<<"spoilt vote  : "<<candi[i]<<'\n' ; 
        }
    }

    return 0 ; 
}






