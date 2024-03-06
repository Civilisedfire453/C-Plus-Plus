# What is Structure ?

A structure is a collection of
predefined data types ( int, float,
double etc. ) that are grouped together.
The structure is a user-defined data
type in C/C++ that allows you toq
combine data items of different kinds.

# How to define a structure in C++?

To define a structure in C++, you
use the struct keyword followed by the
structure name and a pair of curly
braces. Inside the curly braces, you
can declare one or more members of the
structure. The members of the structure
can be of any data type, including
primitive types, arrays, and other
structures.

```cpp
struct Person {
  std::string name;
  int age;
  double height;
};
```

In this example, we define a structure
named Person that has three members:
name, age, and height. The name member
is of type std::string, the age member
is of type int, and the height member
is of type double.

# How to declare a structure variable in C++?

To declare a structure variable in C++,
you use the struct keyword followed by
the structure name and a variable name.
You can then use the variable to access
the members of the structure.

```cpp
struct Person {
  std::string name;
  int age;
  double height;
};

int main() {
  Person person1;
  person1.name = "John";
  person1.age = 30;
  person1.height = 5.8;

  std::cout << "Name: " << person1.name << std::endl;
  std::cout << "Age: " << person1.age << std::endl;
  std::cout << "Height: " << person1.height << std::endl;

  return 0;
}
```

In this example, we declare a structure
variable named person1 of type Person.
We then assign values to the members of
the structure using the dot operator
(person1.name, person1.age, and
person1.height) and print the values
to the console.

# Nested Structure

A structure can also contain another
structure as a member. This is known as
a nested structure. You can access the

