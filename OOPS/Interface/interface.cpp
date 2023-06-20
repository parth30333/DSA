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

// addding interface
#include "bird.h"

using namespace std;


// Interface
void birdDoesSomething(Bird*& bird) {
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
}


int main() {
    Bird* bird = new sparrow();
    birdDoesSomething(bird);

    cout << "///////////////////" << endl;

    Bird* bird2 = new eagle();
    birdDoesSomething(bird2);

    // NOTE-: since instantiation is not allowed in abstract classes/interface, next line will give error
    // Bird* b = new Bird();
    // birdDoesSomething(b);
}