#ifdef DEBUG

// Check a condition x for truth. If it isn't true, output y and exit the program.
#define GH_Assert(x,y) if(!(x)){ std::cout << "Error! " << y << "\n"; std::cout << "Exiting...\n"; exit(EXIT_FAILURE); }
// Print a variable y by tagging it with the string x.
#define GH_Print(x,y) { std::cout << x << ": " << y << "\n"; }

#else

// Have the assertions and print statements thrown away when doing a performance run
#define GH_Assert(x,y) (void)0
#define GH_Print(x,y) (void)0

#endif // DEBUG
