#include<iostream>
int main() {
    double price , sum , trial ,  sumPrices[20] , amount  ; 
    int checkout , i=0 ; 


    double discount ;

    do { 
        std::cout<<"Enter item price (0 to checkout) : " ; 
        std::cin>>trial ; 
    
        if(trial < 0 ) {
            std::cout<<"Invalid price ! Skipped\n" ; 
            continue ; 
        } 
    sumPrices[i] = trial ; 
    sum = sum + sumPrices[i] ; 
    i++ ; 

    }while(trial != 0 ); 

    std::cout<<"Total Bill (before discount) : Rs" <<sum<< '\n' ; 

    if(sum>5000){
        discount = sum *0.1 ; 
        std::cout<<"Discount Applied : "<<discount<< '\n' ;
        amount = sum - discount ; 
        std::cout<<"Final Bill : Rs"<<amount <<'\n' ; 


    }
    else {
    std::cout<<"No discount applied\n" ; 
     std::cout<<"Final Bill : Rs"<<sum <<'\n' ; 


}

}