# Object Pattern

**Synopsis:** Group data into objects with classes and member functions for instantiation and destruction

## Quiz Notes

### Question 1

> Why is it so important to avoid static variables inside functions in C? Especially if the function is an object method?

A C function with a static variable inside will not be re-entrant, assuming that the result of the function depends on the static variable. The result of the function might be different when called multiple times even if identical parameters are provided. Static variables will hence introduce side effects to functions and this will break the object oriented design that the object pattern is designed to solve, the idea being that the data flow shall be able to be traced through the call graph.

### Question 2

> Why do we avoid functions without parameters? What negative property do these functions possess that make them a very bad design flaw in C source code?

It most likely so that functions without parameters still depends on data and manipulates data but to be sure what data you have to investigate and look inside the function body. The data will either be global variables or static variables inside the function, this impairs code readability, maintainability, and testability. Introducing the self pointer as a parameter according to the object pattern improves the design and helps to eliminate the mentioned issues.

### Question 3

> Why do we call our pointer to context 'self' and why should we avoid using other names to refer to 'self'?

The word self is chosen since it works well as a reminder that it is an reference to an object instance of itself. Sticking to always use the same term makes it clear that the object pattern have been employed. Also note that word self will not conflict with any keywords in C nor C++.

### Question 4

> Why is it sometimes necessary to instantiate objects locally in the C file as singletons?

It saves memory due to that singleton objects will be shared between all object instances as one single entity instead of each instance having its own version.

### Question 5

> Why is it sometimes necessary to only expose a pointer to the data structure outside of the implementing C file?

A data structure may hold special types that are only used internally in the C file it is then better to keep this information hidden because otherwise all other modules that use the data structure will have to include these special types. Only exposing a pointer hides the implementation and then there will need to be a set of functions that forms an interface to the parts that shall reachable from other modules.

### Question 6

> Why is it a good practice to always name the header and the C file with the same name as the data object they implement?

The convention to use the same for the H file as the C file creates a directory tree separating elements into to something similar to the concept of namespaces. It also makes it simple to locate and get an overview of what data objects a project includes. Finally it is an easy rule to follow and explain to new team members.

### Question 7

> Why should you never use 'extern' declared variables anywhere in your C code?

Using extern variables opens up for other parts of the code base to modify the variables in ways that do not comply with the agreed upon access conventions. This will cause the code base to slowly but steadily degrade into what in known as spaghetti code which means code that is hard to understand because it has no defined structure.
