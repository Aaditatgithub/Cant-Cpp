#include<iostream>
#include<memory>

int main(){

    // Dangling pointer: a pointer that points to a memory location that has been deallocated or freed.
    // Wild pointer: a pointer that points to an invalid memory location.
    // Null pointer: a pointer that points to no memory location at all.

    // Unique pointers cannot be copied:
    // If one of them dies, the memory allocated to that is deallocated, 
    // thus the other pointer ends up pointing to a location that has been freed. 
    // Use it when you want a scoped pointer and that is the only reference you want.
    {
        // Creating a unique_ptr and initializing it with a dynamically allocated integer.
        std::unique_ptr<int> num(new int(21));
        std::cout << *num; // Accessing and printing the value pointed by num.

        // Creating a unique_ptr using std::make_unique.
        // This method is slightly safer since if an exception is thrown, 
        // it won't end up as a dangling pointer.
        std::unique_ptr<int> new_num = std::make_unique<int>(); 
    }
    
    // What if we want to create multiple references to an object using pointers?
    {
        // Creating a shared_ptr and initializing it with a dynamically allocated integer.
        std::shared_ptr<int> sharedPtr = std::make_shared<int>(12); 

        {   // The integer won't be destroyed within this scope.
            // Creating another shared_ptr that shares ownership with sharedPtr.
            std::shared_ptr<int> newShared = sharedPtr;

            // Creating a weak_ptr that references the same memory as sharedPtr,
            // but doesn't increase the reference count.
            std::weak_ptr<int> imWeak {sharedPtr};

            // Accessing and printing the values pointed by sharedPtr and newShared.
            std::cout << *sharedPtr << *newShared;
        } // newShared goes out of scope here, but memory isn't deallocated since sharedPtr still holds a reference.
    }   
}
