//WHAT iS #define?
//#define creates a constant - similar to a variable, but its value can NEVER be
//changed once set. Think of it as a fixed label for a value.

//NAMING CONVENTION: Constants are written in ALL_CAPS so they stand out visually for
//regular variables, making your code easier to read at a glance.

//WHAT IS A PREPROCESSOR DIRECTIVE?
//Lines that start with # (like #define and #include) are preprocessor directives.
//They are processed by the compiler BEFORE your actual program code runs,
//which is why constants defined here are ready to use the moment main() starts.

#define DOGNAME "Potato"
#define DOGAGE 28
#define CATNAME "Tom"

