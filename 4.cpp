#include<iostream>
int main() { 

double hardness , carbon_content , tensile_strength ; 


std::cout<<"enter hardness of the steel : " ; 
std::cin>>hardness ; 


std::cout<<"enter carbon content of the steel : " ; 
std::cin>>carbon_content ; 


std::cout<<"enter tensile strength of the steel : " ; 
std::cin>>tensile_strength ; 

if(hardness>50 && carbon_content<0.7 && tensile_strength>5600) {
    std::cout<<"Grade 10" ; 
} 
else if(hardness>50 && carbon_content<0.7 )
{
    std::cout<<"Grade 9" ; 
}
else if( carbon_content<0.7 &&tensile_strength>5600) {
    std::cout<<"Grade 8" ; 
} 
else if(hardness>50  && tensile_strength>5600) {
    std::cout<<"Grade 7" ; 
} 
else if(hardness>50 || carbon_content<0.7 ||tensile_strength>5600) {
    std::cout<<"Grade 6" ; 
}

else { 
    std::cout<<"Grade 5" ; 
}



return 0 ; 
}