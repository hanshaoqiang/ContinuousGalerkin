#ifdef DEBUG
#define GH_Assert(x,y) if(!(x)){ std::cout << "Error! " << y << "\n"; std::cout << "Exiting...\n"; exit(EXIT_FAILURE); }
#define GH_Print(x,y) { std::cout << x << ": " << y << "\n"; }
#else
#define GH_Assert(x,y) (void)0
#define GH_Print(x,y) (void)0
#endif // DEBUG
