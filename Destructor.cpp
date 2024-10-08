//Gayatri Ratnaparkhi 23070123169

#include <iostream>

using namespace std;

int count=0;

class student{
	
    public:
    	
    student()
    
    {
    	
        count++;
        
        cout<<"No of objects created: "<<count<<endl;
        
    }
    
    ~student()
    
    {
    	
        cout<<"No of objects destroyed: "<<count<<endl;
        
               count--;
               
    }
    
};

int main(){
	
    student s1;
    
    student s2,s3;
    
};

/*

**OUTPUT**

No of objects created: 1

No of objects created: 2

No of objects created: 3

No of objects destroyed: 3

No of objects destroyed: 2

No of objects destroyed: 1

    */
