#include<iostream>
int main() { 
  
    std::string traffic_light ; 
    std::cout<<"Enter traffic light color : " ; 
    std::cin>>traffic_light ; 

    if(traffic_light == "Red" ||  traffic_light == "red") {
       std::cout<<"Stop!" ; 
    }
    else if(traffic_light == "Yellow" ||  traffic_light == "yellow") {
          std::cout<<"Get Ready" ; 
    }
    else if(traffic_light == "Green" ||  traffic_light == "green") { 
        std::cout<<"Go !" ; 
    }
    else { 
        std::cout<<"Invalid Output" ; 
    }

}