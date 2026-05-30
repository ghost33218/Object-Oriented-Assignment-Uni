#include<iostream>
int main() { 
    std::string password ; 
    int upperCase = 0 , lowerCase = 0 , specialChar = 0 , digit = 0 ; 
    int size ; 

    std::cout<<"enter password : " ; 
    std::cin>>password ; 
    size = password.length() ; 
    //std::cout<<size ; 
 for(int i = 0 ; i<size ; i++) { 
    if(password[i]>=65 && password[i]<=90 ) {
        upperCase++ ; 
    } 
    else if(password[i]>=97 && password[i]<=122) {
        lowerCase++ ; 
    }
    else if(password[i]>=48 && password[i]<=57){
       digit++ ; 
}  
else { 
    specialChar++ ;  
}




}

std::cout<<"Upper Letter : "<<upperCase<<'\n' ; 
std::cout<<"Lower Letter : "<<lowerCase<<'\n' ; 
std::cout<<"Special Character : "<<specialChar<<'\n' ; 
std::cout<<"Digits : "<<digit<<'\n' ; 



    if(size>=8 && upperCase>0 && lowerCase>0 && specialChar>0 && digit>0) { 
        std::cout<<"Password Strength : Strong" ; 
    }
  else if(size>=6 && ( (upperCase>0 && lowerCase>0 ) || (upperCase>0 && specialChar>0) ||(upperCase>0 && digit>0) || (lowerCase>0 && specialChar>0) || (lowerCase>0 && digit>0) || (specialChar>0 && digit>0))) { 
    std::cout<<"Password Strength : Moderate" ; 
  } 

  else  { 
    std::cout<<"Password Strength : Weak" ; 
  }
}