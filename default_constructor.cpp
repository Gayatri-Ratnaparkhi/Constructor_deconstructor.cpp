//Gayatri Ratnaparkhi 23070123169

#include<iostream>

using namespace std;

class Construct {
	
    public:
    	
    int a, b;
    
    Construct() {
    	
        a = 10;
        
        b = 20;
        
    }
    
};

int main() {
	
    Construct obj;
    
    cout << "a: " << obj.a << ", b: " << obj.b << endl;
    
    return 0;
    
}
/*

**OUTPUT**

    a: 10, b: 20
    
    */
