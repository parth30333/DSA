#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<map>
#include<unordered_map>
#include<string>
#include<numeric>

using namespace std;


// Classess
// class Animals {
//     // Properties or state
//     private:
//     int weight;
    
//     public:
//     int age;
//     string name;


// // default constructor
// Animals() {
//     this->age = 0;
//     this->weight = 0;
//     this->name = "";
// }


// // Parameterised Constructor
// Animals(int weight, int age) {
//     this->age = age;
//     this->weight = weight;

//     cout << "this is a parameterised constructor 1" << endl;
// }
// Animals(int weight, int age, string name) {
//     this->age = age;
//     this->weight = weight;
//     this-> name = name;
//     cout << "this is a parameterised constructor 2" << endl;
// }


// // Copy Contructor
// Animals(Animals &obj) {
//    this-> age = obj.age; 
//    this-> weight = obj.weight; 
//    this-> name = obj.name; 
// }



//     // behaviour or member functions
//     void eat() {
//         cout << "eating" << endl;
//     }

//     void sleep() {
//         cout << "sleeping" << endl;
//     }

//     // getter
//     int getWeight() {
//         return weight;
//     }

//     // setter
//     void setWeight(int w) {
//         weight = w;
//     }

//     // Destructor
//     ~Animals() {
//         cout << "This is a Destructor" << endl;
//     }
// };

// ///////////////////////
// // single level Inheritance
// class Cat:public Animals {
//     public:
//     void print() {
//         cout << this->age << endl;
//     }
// };



// // Multi-level Inheritance
// class Fruit {
//     public:
//     string name;
// };

// class Mango:public Fruit {
//     public:
//     int weight;
// };

// class Alphonso:public Mango {
//     public:
//     int sugarLevel;
// };


// // Multiple Inheritance
// class A {
//     public:
//     int physics;

//     A() {
//         physics = 331;
//     }
// };

// class B {
//     public:
//     int physics;

//     B() {
//         physics = 102;
//     }
// };

// class C:public A, public B {
//     public:
//     int maths;
// };


/////////////////////////
// Polymorphism
// // compile-time -> function overloading
// class Maths {
//     public:
//     int sum(int a, int b) {
//         return a+b;
//     }   
    
//     int sum(int a, int b, int c) {
//         return a+b+c;
//     }

//     int sum(int a, float b)  {
//         return a+b+10;
//     }
// };


// Operator overloading 
// class Para {
//     public:
//     int val;
    
    // void operator+(Para &obj2) {
//         int val1 = this->val;
//         int val2 = obj2.val;

//         cout << val2-val1 << endl;
//     }
// };



// class Distance {
//     private:
//     int val;
//     int feet;
//     int inches;

//     public:
//     Distance(int val, int feet, int inches) {
//         this->val = val;
//         this->feet = feet;
//         this->inches = inches;
        
//     }

//     friend ostream &operator<<( ostream& output, Distance& D) {
//         output << "Feet-: " << D.feet << ", inches-: " << D.inches << ", val-: " << D.val << endl;
//         return output;
//     }

// };



// Run-time polymorphism
// // Function overriding 
// class Animal {
//     public:
//     void speak() {
//         cout << "Speaking" << endl;
//     }
// };

// class Dog:public Animal {
//     public: 
//     void speak() {
//         cout << "Barking" <<  endl;
//     }
// };



// // Run-time polymorphism using Virtual classes
// class Animal {
//     public:
//     virtual void speak() {
//         cout << "Speaking" << endl;
//     }
// };

// class Dog:public Animal {
//     public:
//     void speak() {
//         cout << "Barking" << endl;
//     }
// };



///////////////
// // const with classes
// class abc {
//     int x;
//     int *y;
//     int z;

//     public:
//     // abc(int _x, int _y, int _z = 0) {
//     //     this->x = _x;
//     //     this->y = new int(_y); // because y is a pointer, we can also assign it with &_y {this->y = &_y}
//     //     this->z = _z;
//     // }



//     // Initialization list
//     abc(int _x, int _y, int _z): x(_x), y(new int(_y)), z(_z) {
//         cout << "this is a initialization list" << endl;
//         this->x = this->x*10;
//     }
    
//     // getters
//     int getX() const {
//         return x;
//     }
//     int getY() const {
//         return *y;
//     }
//     int getZ() const {
//         return z;
//     }

//     // setters-: Do not use "const" keyword for setters because in setters we are changing values of data members
//     void setX(int _x) {
//         this->x = _x;
//     }
//     void setY(int _y) {
//         *(this->y) = _y;
//     }
//     void setZ(int _z) {
//         this->z = _z;
//     }
// };



// void print(const abc& a) {
//     cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
// }


// // Shallow copy
// class abc {
//     public:
//     int x;
//     int* y;

//     abc(int _x, int _y): x(_x), y(new int(_y)) {}

//     void print() {
//          cout << "x-: " << x << endl 
//          << "y(ptr)-: " << y << endl
//          << "*y-: " << *y << endl;
//     }
// };


// // Deep Copy
// class abc {
//     public:
//     int x;
//     int* y;

//     abc(int _x, int _y): x(_x), y(new int(_y)) {}

//     // Creating our own copy constructor for "DEEP COPY"
//     abc(abc& obj) {
//         this->x = obj.x;
//         this->y = new int(*obj.y); 
//     }

//     void print() {
//          cout << "x-: " << x << endl 
//          << "y(ptr)-: " << y << endl
//          << "*y-: " << *y << endl;
//     }
// };



// // static data member
// class abc {
//     public:
//     static int x, y;

//     void print() {
//         cout << x << " " << y << endl;
//     }
// };

// // to initialize static data members
// int abc::x;
// int abc::y;




// // static member functions
// class abc {
//     public:
//     static int x, y;

//     static void print() {
//         cout << x << " " << y << endl;
//     }
// };


// int abc::x;
// int abc::y;



/////////////////////
// Interface-: go  to interface folder


///////////////////
// // Friend keyword
// class A {
//     private:
//     int x;

//     public:
//     A(int _x): x(_x){}

//     friend class B;
//     friend void print(A&);
// };


// class B {
//     public:
//     print(A& a) {
//         cout << a.x << endl;  // able to access private member
//     }
// };


// void print(A& a) {
//     cout << a.x << endl;  // able to access private member
// }


/////////////////
// // accessing private contructor
// class Box {
//     int width;
//     Box(int _width): width(_width) {};

//     public: 
//     int getWidth() {
//         return width;
//     }

//     void setWidth(int val) {
//         this->width = val;
//     }

//     friend class BoxFactory;
// };

// class BoxFactory {
//     public:
//     Box getABox(int w) {
//         return Box(w);
//     }
// };



/////////////////////////
// Virtual destructor
class Base {
    public:
    Base() {
        cout << "Base Ctor is called" << endl;
    }

virtual ~Base() {
        cout << "Base Dtor is called" << endl;
    }
};


class Derived: public Base {
    public:
    Derived() {
        cout << "Derived Ctor is called" << endl;
    }

    ~Derived() {
        cout << "Derived Dtor is called" << endl;
    }
};



int main() {
// // Object Creation
// // Static memory creation
// Animals dog;
// dog.age = 5;
// dog.name = "Lebra";

// cout << "age-: " << dog.age << endl;
// cout << "name-: " << dog.name << endl;
// dog.eat();
// dog.sleep();

// dog.setWeight(24);
// cout << dog.getWeight() << endl;



// // dynamic object creation
// Animals* dog = new Animals;

// // (*dog).age = 5;
// // (*dog).name = "German Shepard";

// // alternate dynamic
// dog->age = 5;
// dog->name = "German Shepard";

// dog->eat(); 

// cout << dog->age << endl;



// // Initialising using parameterised constructor
// Animals a(10, 20);

// Animals* b = new Animals(10,20, "Lebra"); 


// // copying an object using copying constructor
// // Copying statically
// Animals c = a;
// Animals a1(c); // we are copying c in a1

// cout << c.age << endl;
// cout << a1.age;


// // Copying dynamic objects
// Animals*d = b;

// delete b;
// return 0;


// // inheritance
// // single level inheritance
// Cat* c1 = new Cat;
// c1->age = 23;

// c1->print();
// delete c1;


// // Multi-level inheritance
// Alphonso a;
// a.name = "Alphonso"; // property of fruit class
// a.weight = 1; // property of mango class
// a.sugarLevel = 3; // property of Alphonso class

// cout << a.name << " " << a.weight << " " << a.sugarLevel << endl;


// // Multiple inheritance
// C c1;

// // NOTE-: there is very famous problem called "Diamond problem" which happens when 2 parent class has property by same name
// // cout << c1.physics  << " " << c1.maths << endl; // will some garbage values because we have not defined the values

// cout << c1.A::physics << " " << c1.B::physics << endl; // when property has name in different classes


////////////////////
// Polymorphism
// // compile-time => function overloading
// Maths m;
// cout << m.sum(1, 2.3f) <<  endl;
// cout << m.sum(1, 2) << endl;
// cout << m.sum(1, 2, 3) << endl;


// // Operator overloading
// Para obj1, obj2;

// obj1.val = 2;
// obj2.val = 5;

// obj1+obj2;


// // Overloading "<<" operator
// Distance d(3,5,7);
// cout << d.val;


// Run-time Polymorphism
// // function overriding
// Dog d1;
// d1.speak();


// // Virtual Functions-: mainly used to achieve runtime polymorphism
// // UpCasting
// Animal* a = new Dog();
// a->speak(); // without virtual function, output = speaking but it should print "Barking" -: to make this happen use virtual function in Parent class



// // DownCasting
// Dog* b = (Dog*) new Animal(); // need explicit type casting
// b->speak();





////////////////////////////////
// // Dynamic Memory allocation
// // create a 2-d array in heap
// int row = 5;
// int col = 3;

// int** arr = new int*[row];

// for(int i=0; i<row; i++) {
//     arr[i] = new int[col];
// }


// for(int i=0; i<row; i++) {
//     for(int j=0; j<col; j++) {
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

// // to de-allocate memory for 2-d array
// for(int i=0; i<row; i++) {
//     delete []arr[i];
// }

// delete []arr;


// Const keyword
// const with pointers
// 1-: when data is immutable but pointer is mutable(not constant)

// int b = 10;
// const int* a = &b;
// cout << *a << endl;

// // *a = 13; // this wiil give errror because we can't change the value inside memory location "a" is pointing to

// // but we can change the value of pointer itself
// int c = 20;
// a = &c;
// cout << *a << endl;

// // dynamically
// // int const* a = new int(10);
// const int* a = new int(10); // both synatax means same
// cout << *a << endl;

// int d = 30;
// a = &d;
// cout << *a << endl;


// // 2-: when data is mutable but pointer is immutable(not constant)
// int *const a = new int(10);
// *a = 20;
// cout << *a << endl;

// int b = 211;
// a = &b; // this will give error because pointer is immutable
// cout << *a << endl; 


// // 3-: when data and pointer both are immutable(not constant)
// const int *const a = new int(10);
// cout << *a << endl;



/////////////////
// // const with classes
// abc a(1,2,4);
// print(a);



// // Shallow copy
// abc a(1,2);
// a.print();

// abc b = a;

// cout << "printting B"<< endl;

// *b.y = 10;
// b.print();

// cout << "printting A after copying B"<< endl;
// a.print();



// //  Deep Copy
// abc a(1,2);
// a.print();

// abc b = a;

// cout << "printting B"<< endl;

// *b.y = 10;
// b.print();

// cout << "printting A after copying B"<< endl;
// a.print();


///////////////////////
// // Static data members
// abc obj1; abc obj2;
// obj1.x = 1;
// obj1.y = 2;
// obj1.print();

// obj2.x = 10;
// obj2.y = 20;
// obj2.print();
// obj1.print(); // both will print same because same data members(x,y) are associated with all the instances 




// // static member functions
// abc obj1; abc obj2;
// obj1.x = 1;
// obj1.y = 2;
// obj1.print();


// obj2.x = 10;
// obj2.y = 20;
// abc::print(); // same as using obj2.print() or obj1.print();


///////////////////////////
// Interface-: go  to interface folder

//////////
// // friend keyword
// A a(10);
// B b;
// b.print(a);

// // normal  function call
// print(a);



////////////
// // accessing private constructor
// BoxFactory bfact;
// Box b = bfact.getABox(5);

// cout << b.getWidth() << endl;


////////////////
// Virtual destructor
Base* b = new Derived();

delete b;
return 0;
}