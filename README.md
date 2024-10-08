## Aim 
To study Constuctors and Destructors

## Theory
### Definition
#### Constuctors
- A constructor is a special member function of a class that is automatically called when an object of that class is created.
- Its primary purpose is to initialize the object’s properties or allocate resources.
> For example:
```cpp
#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int xCoord, int yCoord) {
        x = xCoord;
        y = yCoord;
    }

    void display() {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(10, 20);
    p1.display();

    return 0;
}

```
### Constructors can be categorized into three main types:

#### 1. Default Constructor
- A constructor that either has no parameters or has all parameters set to default values.
#### 2. Parameterized Constructor
- A parameterized constructor takes one or more parameters. This allows the programmer to initialize an object with specific values at the time of creation.
#### 3. Copy Constructor
- A copy constructor is a special constructor that initializes a new object as a copy of an existing object. It takes a reference to an object of the same class as its parameter.

#### Destructors
- Destructor is a special member function of a class that is automatically called when an object of that class is destroyed.
- The primary purpose of a destructor is to release resources that the object may have acquired during its lifetime, such as memory or file handles.
> For example:
```cpp
#include <iostream>
using namespace std;

class Simple {
public:
    Simple() {
        cout << "Constructor called: Object created." << endl;
    }
    
    ~Simple() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};

int main() {
    cout << "Creating an object of Simple class." << endl;
    Simple obj;

    cout << "Exiting main function." << endl;

    return 0;
}

```

## Algorithms
### Default Constructor

1. **Start**

2. **Class Definition**
   - **Define a class named `construct`.**
   - **Declare public member variables:**
     - **`int a`.**
     - **`int b`.**

3. **Default Constructor**
   - **Implement a default constructor:**
     - **Initialize `a` to `10`.**
     - **Initialize `b` to `20`.**

4. **Display Method**
   - **Define a method `void display()`:**
     - **Print the values of `a` and `b` to the console in the format:**
       - **"a = [value of a]"**
       - **"b = [value of b]"**

5. **Main Function**
   - **Create an instance of the `construct` class named `constructor`.**
   - **Call the `display()` method on `constructor` to output the values of `a` and `b`.**

6. **End**


### Copy Constructor

1. **Start**

2. **Define a class named Wall**
   - **Declare private member variables:**
     - **double `length`**
     - **double `height`**
  
3. **Constructor**
   - **Create a constructor that takes two parameters:**
     - **`double len` (length)**
     - **`double hgt` (height)**
   - **Initialize `length` with `len` and `height` with `hgt`.**
  
4. **Copy Constructor**
   - **Create a copy constructor that takes a reference to another `Wall` object (`const Wall& 
     obj`).**
   - **Initialize `length` with `obj.length` and `height` with `obj.height`.**
  
5. **Method to Calculate Area**
   - **Define a method `double calculateArea() const`:**
     - **Return the product of `length` and `height`.**
    
5. **Main Function**
   - **Create an instance of `Wall` named `wall1` using the constructor with specified length 
     and height.**
   - **Create a second instance of `Wall` named `wall2` using the copy constructor to copy 
     `wall1`.**
   - **Output the area of `wall1` using `calculateArea()`.**
   - **Output the area of `wall2` using `calculateArea()`.**

6. **End**


### Destructor

1. **Start**

2. **Global Variable Declaration**
   - **Declare a global integer variable `count` and initialize it to `0`.**

3. **Class Definition**
   - **Define a class named `Student`.**

4. **Constructor**
   - **Implement the default constructor `Student()`:**
     - **Increment the `count` variable by `1`.**
     - **Print the current number of objects created: "No. of objects created: [current
       count]".**

5. **Destructor**
   - **Implement the destructor `~Student()`:**
     - **Decrement the `count` variable by `1`.**
     - **Print the current number of objects destroyed: "No. of objects destroyed: [current 
       count]".**

6. **Main Function**
   - **Create three instances of the `Student` class: `aa`, `bb`, and `cc`.**
     - **For each instance created, the constructor will increment `count` and display the 
       count.**
   - **Create a block (scope) for a new instance of `Student` named `dd`.**
     - **Inside this block, the constructor will increment `count` and display the updated 
       count.**
   - **Once the block is exited, the destructor for dd will be called, decrementing `count` 
     and displaying the updated count.**

  ## Codes:
**constructor basics**

//Gayatri Ratnaparkhi 23070123169

#include<iostream>

using namespace std;

class date{
	
    int d,m,y;
    
    public:
    	
    date()
    
    {
    	
        cout<<"Constructor Created: "<<endl;
        
        d=4;
        
        m=9;
        
        y=2024;
        
    }
    
};

int main(){
	
    date obj;
    
}

**copy constructor**

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

**destructor**

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

**method constructor**

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
**Parameter Constructor**

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
**Default constructor**

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
## Conclusion
We Learnt The concepts of contructor and destructor and implement programs for it.
