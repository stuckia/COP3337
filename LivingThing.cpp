#include <iostream>

// NOTE: I could not figure out my errors after 2 hours of debugging
// my apologies but this was the best I could get it

class LivingThing;
class Animal;
class Plant;
class Fish;
class Sardine;
class Bass;
class Mammal;
class Cat;
class Tiger;
class Lion;
class Tree;
class Chestnut;
class Cherry;

// LivingThing class
class LivingThing
{
public:
    LivingThing()
    {
        std::cout << "This is the constructor of the LivingThing class" << std::endl;
    }

    LivingThing(LivingThing* thing)
    {
        std::cout << "This is the constructor of the LivingThing class" << std::endl;
    }

    // virtual function at root
    virtual void toString() const
    {
        std::cout << "Called toString() function of the LivingThing class" << std::endl;
    }
};

// Animal class
class Animal: public LivingThing
{
public:
    Animal()
    {
        std::cout << "This is the constructor of the Animal class" << std::endl;
    }

    using LivingThing::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Animal class" << std::endl;
    }
};

// Plant class
class Plant: public LivingThing
{
public:
    Plant()
    {
        std::cout << "This is the constructor of the Plant class" << std::endl;
    }

    using LivingThing::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Plant class" << std::endl;
    }
};

// Fish class
class Fish: public Animal
{
public:
    Fish()
    {
        std::cout << "This is the constructor of the Fish class" << std::endl;
    }

    using Animal::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Fish class" << std::endl;
    }
};

//Sardine class
class Sardine: public Fish
{
public:
    Sardine()
    {
        std::cout << "This is the constructor of the Sardine class" << std::endl;
    }

    using Fish::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Sardine class" << std::endl;
    }
};

//Bass class
class Bass: public Fish
{
public:
    Bass()
    {
        std::cout << "This is the constructor of the Bass class" << std::endl;
    }

    using Fish::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Bass class" << std::endl;
    }
};

// Mammal class
class Mammal: public Animal
{
public:
    Mammal()
    {
        std::cout << "This is the constructor of the Mammal class" << std::endl;
    }

    using Animal::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Mammal class" << std::endl;
    }
};

// Cat class
class Cat: public Mammal
{
public:
    Cat()
    {
        std::cout << "This is the constructor of the Cat class" << std::endl;
    }

    using Mammal::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Cat class" << std::endl;
    }
};

// Tiger class
class Tiger : public Cat
{
public:
    Tiger()
    {
        std::cout << "This is the constructor of the Tiger class" << std::endl;
    }

    using Cat::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Tiger class" << std::endl;
    }
};

// Lion class
class Lion : public Cat
{
public:
    Lion()
    {
        std::cout << "This is the constructor of the Lion class" << std::endl;
    }

    using Cat::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Lion class" << std::endl;
    }
};

// Tree class
class Tree : public Plant
{
public:
    Tree()
    {
        std::cout << "This is the constructor of the Tree class" << std::endl;
    }

    using Plant::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Tree class" << std::endl;
    }
};

// Chestnut class
class Chestnut : public Tree
{
public:
    Chestnut()
    {
        std::cout << "This is the constructor of the Chestnut class" << std::endl;
    }

    using Tree::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Chestnut class" << std::endl;
    }
};

// Cherry class
class Cherry : public Tree
{
public:
    Cherry()
    {
        std::cout << "This is the constructor of the Cherry class" << std::endl;
    }

    using Tree::toString;
    void toString() const
    {
        std::cout << "Called toString() function of the Cherry class" << std::endl;
    }
};

// display method
void display(const LivingThing& obj)
{
    obj.toString();
}

// main function
int main()
{
    Sardine sardine;
    Bass bass;
    Tiger tiger;
    Lion lion;
    Chestnut chestnut;
    Cherry cherry;
    Tree tree;

    LivingThing* sardine1 = &sardine;
    LivingThing* tiger1 = &tiger;
    LivingThing* tree = &tree;

    tree.toString();
    display(sardine1);
    display(tiger);
    display(tree);

    return 1;
}

