#include <iostream>
#include <string>

class test
{
    private:
        std::string name;
        int *ptr; // Pointer member

    public:
        test()
        {
            std::cout << "Default constructor called" << std::endl;
            ptr = nullptr; // Initialize pointer to nullptr
        }

        test(const std::string &name, int value)
        {
            std::cout << "Parameterized constructor called" << std::endl;
            this->name = name;
            this->ptr = new int(value); // Dynamically allocate memory
        }

        // Shallow copy constructor
        test(test const &other)
        {
            std::cout << "Copy constructor called" << std::endl;
            this->name = other.name;
            this->ptr = other.ptr; // Shallow copy (just copying the pointer)
        }

        // Shallow copy assignment operator
        test &operator=(test const &other)
        {
            std::cout << "Assignation operator called" << std::endl;
            if (this != &other) // Self-assignment check
            {
                this->name = other.name;
                this->ptr = other.ptr; // Shallow copy (just copying the pointer)
            }
            return *this;
        }

        ~test()
        {
            std::cout << "Destructor called" << std::endl;
            if (ptr != nullptr)
            {
                delete ptr; // Free the allocated memory
                ptr = nullptr; // Avoid double-free
            }
        }

        std::string getName() const
        {
            return this->name;
        }
        void setName(std::string name)
        {
            this->name = name;
        }

        void setPtr(int *ptr)
        {
            this->ptr = ptr;
        }
        int *getPtr() const
        {
            return this->ptr;
        }
};


int main()
{
    // Create a test object with a name and a dynamically allocated int
    test obj1("Object 1", 42);

    // Create a shallow copy of obj1 (this will use the copy constructor)
    test obj2 = obj1;

    std::cout << "obj1 name: " << obj1.getName() << ", obj1 ptr: " << *obj1.getPtr() << std::endl;
    std::cout << "obj2 name: " << obj2.getName() << ", obj2 ptr: " << *obj2.getPtr() << std::endl;

    // Modify the pointer in obj2 to show the impact on obj1 in shallow copy
    *obj2.getPtr() = 99;

    std::cout << "After modifying obj2 ptr value:" << std::endl;
    std::cout << "obj1 name: " << obj1.getName() << ", obj1 ptr: " << *obj1.getPtr() << std::endl;
    std::cout << "obj2 name: " << obj2.getName() << ", obj2 ptr: " << *obj2.getPtr() << std::endl;

    return 0;
}

