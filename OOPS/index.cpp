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
class Animals {
    // Properties or state
    private:
    int weight;
    
    public:
    int age;
    string name;


// Overriding default constructor
Animals() {
    this->age = 0;
    this->weight = 0;
    this->name = "";
}


// Parameterised Constructor
Animals(int weight, int age) {
    this->age = age;
    this->weight = weight;

    cout << "this is a parameterised constructor 1" << endl;
}
Animals(int weight, int age, string name) {
    this->age = age;
    this->weight = weight;
    this-> name = name;
    cout << "this is a parameterised constructor 2" << endl;
}


// Copy Contructor
Animals(Animals &obj) {
   this-> age = obj.age; 
   this-> weight = obj.weight; 
   this-> name = obj.name; 
}



    // behaviour or member functions
    void eat() {
        cout << "eating" << endl;
    }

    void sleep() {
        cout << "sleeping" << endl;
    }

    // getter
    int getWeight() {
        return weight;
    }

    // setter
    void setWeight(int w) {
        weight = w;
    }

    // Destructor
    ~Animals() {
        cout << "This is a Destructor" << endl;
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



// dynamic memory creation
Animals* dog = new Animals;

// (*dog).age = 5;
// (*dog).name = "German Shepard";

// alternate dynamic
dog->age = 5;
dog->name = "German Shepard";

dog->eat(); 

cout << dog->age << endl;



// Initialising using parameterised constructor
Animals a(10, 20);

Animals* b = new Animals(10,20, "Lebra"); 


// copying an object using copying constructor
Animals c = a;
Animals a1(c); // we are copying c in a1

cout << c.age << endl;
cout << a1.age;

delete b;


return 0;
}