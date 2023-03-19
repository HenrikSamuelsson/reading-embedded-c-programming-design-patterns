# Object Pattern

**Synopsis:** Group data into objects with classes and member functions for instantiation and destruction

## Quiz Answers

> Why is it so important to avoid static variables inside functions in C? Especially if the function is an object method?

A C function with a static variable inside will not be re-entrant assuming that the result of the function depends on the static variable. The result of the function will be different when called multiple times even if identical parameters are provided. Static variables will hence introduce side effects to functions and this will break the object oriented design that the object pattern is designed to solve, the idea being that the data flow shall be able to be traced through the call graph.
