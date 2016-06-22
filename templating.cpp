
// temptating is a powerful concept. I will explain the general concept of templating and the implementation in c++. 
// I will also talk a bit about Java generics and how different it is from cpp templating 



// Advanced topics

// Curiosly recurring template patern (CRTP) https://en.wikipedia.org/wiki/Curiously_recurring_template_pattern
// Allows a cool "interface" -- more like you can define a function in the Base class that uses functions NOT defined in the Base class 
// (through the power of templating). You can use these undefined functions in a commonly used utility function for instance. 


// recursive "down the hierarchy" template
// Like curiously recurring template, but what if the template is of a different class? class Derived: Base<Derived, Other>
// can do both CRTP and this "down the hierarchy" passing scheme
