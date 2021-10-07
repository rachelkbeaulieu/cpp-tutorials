# Classes and Inheritance

## Objects
* C++ is an object-oriented programming language, so everything within it is associated with classes and objects, along with attributes and methods for the object
  * An example of an object in real life could be a pet cat -- the cat is the object, where it has attributes such as color and size, and methods such as eating and sleeping
* In C++, an object is created from a class

### Naming conventions 
* Naming conventions are not requirements for the language to run, but rather the "norm" of what its users are naming the entities in C++

#### General naming conventions
* No use of all upper case abbreviations (e.g., WeightLbs instead of WeightLBS)

#### Class names
* Name the class after what it is (e.g., Cat)
* CamelCase as word separaters (e.g., MonsterTruck)
* No underscores (e.g., NOT hello_world)

#### Method and function names
* Be explicit about what a function or method is doing (e.g., `PrintName()` rather than `Print()`)

#### Class attribute names
* Private attribute names should begin with a lowercase `m` (e.g., private: int mCatAge)
* The `m` comes before other name modifiers like `p` for pointer (e.g., *mpName)

#### Variable names
* Lowercase letters only
* Underscore `_` is used as the word separator (e.g., cat_in_the_hat)

## Standard methods functions
* I didn't find much specifically about standards method functions that are used in C++ and in other programming languages (like toString() in Java)
* Since I didn't find much with doing a lot of digging, I'm going off the assumption that C++ norms are more "if you need it, you'll make it", rather than having a `toString()` function by (essentially) default

## Inheritance
* Inheritance allows a programmer to define a class inb terms of another class, without having to duplicate code (reusing code is rad!)
* The exisiting class is referred to the **base** class, and the new class is the **derived** class
* Inheritance implements an "is a" relationship, such that a dog **is a** mammal
* To inherit in C++, you create a derived class by defining the derived class name along with the base class: `class Potato: public Vegetable { }`
* C++ has access control, where **public** variables can be seen by anyone, **protected** can be seen by derived class(es), and **private** variables can be seen only by the class it is in
* C++ can inherit from more than one class
 * This can be done by adding a comma separator such as: `class Potato: public Recipe, public Vegetable { }`

### Overloading methods
* In C++, if there is a function within the base class and the derived class with the same name, the base class function **will not** be used; only the derived function will, as C++ will look in the derived class for the function, find it, and use that one without looking at the base class function


## Sources
1. https://www.section.io/engineering-education/getting-started-with-classes-and-objects-in-c++/
2. https://www.w3schools.com/cpp/cpp_classes.asp
3. https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
4. https://chaste.cs.ox.ac.uk/trac/raw-attachment/wiki/CodingStandardsStrategy/codingStandards.pdf
