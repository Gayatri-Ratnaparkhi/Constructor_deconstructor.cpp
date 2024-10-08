//Gayatri Ratnaparkhi 23070123169

#include<iostream>

using namespace std;


class Pconstruct {
	
    int area;
    
    public:
    	
    Pconstruct(int m, int n) {
    	
        area = m * n;
        
    }

    void display() {
    	
        cout << "Area: " << area << endl;
        
    }
    
};

int main() {
	
    int length, width;
    
    cout << "Enter length and width: ";
    
    cin >> length >> width;

    Pconstruct obj(length, width); 
    
    obj.display(); 
    
    return 0;
    
}

/*

**OUTPUT**

Enter length and width: 5

6

Area: 30

   */

