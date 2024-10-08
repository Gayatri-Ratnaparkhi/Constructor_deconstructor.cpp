//Gayatri Ratnaparkhi 23070123169

#include<iostream>

using namespace std;

class wall{
	
    double l,h;
    
    public:
    
    wall(double len, double hgt){
    	
        l=len;
        
        h=hgt;
        
    }
    
    wall(wall&obj){
    	
        l=obj.l;
        
        h=obj.h;
        
    }
    
    double calculateArea(){
    	
        return l*h;
        
    }
    
};

int main(){
	
    wall Wall1(10.5,8.6);
    
    wall Wall2=Wall1;
    
    cout<<"Area of wall 1: "<<Wall1.calculateArea()<<endl;
    
    cout<<"Area of wall 2: "<<Wall2.calculateArea()<<endl;
}

/*

**OUTPUT**

Area of wall 1: 90.3

Area of wall 2: 90.3

*/
