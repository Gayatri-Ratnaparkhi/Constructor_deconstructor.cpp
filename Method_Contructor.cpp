//Gayatri Ratnaparkhi 23070123169

#include<iostream>

using namespace std;

class date {
	
    int d, m, y;
    
public:
	
    date() {
    	
        cout << "Constructor called." << endl;
        
    }
    
    void inputDate() {
    	
        cout << "Enter date: ";
        
        cin >> d;
        
        cout << "Enter month: ";
        
        cin >> m;
        
        cout << "Enter year: ";
        
        cin >> y;
        
    }
    
    void displayDate() {
    	
        cout << "The date is: " << d << "/" << m << "/" << y << endl;
        
    }
    
};

int main() {
	
    date obj;  
	       
    obj.inputDate();  
    
    obj.displayDate(); 
    
    return 0;
    
}

/*

**OUTPUT**

Constructor called.

Enter date: 23

Enter month: 7

Enter year: 2004

The date is: 23/7/2004

    */

