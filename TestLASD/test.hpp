#include "/home/rootking/Scrivania/test.cpp"

template <typename Data>
class Vector
{

private:

  unsigned int getDimension();
  Data* vector; // Start of allocation
  Data* space; // end of element sequence, start of space allocated for possible expansion
  Data* last; // end of allocated space
  A alloc; // allocator

public:
  
  //Putting dimension in public section but not the metod or attributes 
  //for inizialize it
  int vectorDimension;

  // Default constructor
  using size_type = unsigned int; // type used for vector sizes

  Vector();
  Vector(size_type dimension, const Data& val = Data(), const A& a);

};



template <typename Data>
Vector<Data>::Vector()
{
  int dimension = getDimension();
  Vector<Data> vec = Data[dimension];
}

template <typename Data>
Vector<Data>::Vector(size_type dimension, const Data& val = Data(),  const A& a)
  :alloc(a) // copy the allocator
{
  vector = alloc.allocate(dimension); // get memory for elements
  try {
        uninitialized_fill(vector,vector+dimension,val); // copy elements
        space = last = vector+dimension;
      }
  catch (...) {
        alloc.deallocate(vector,dimension); // free memory
        throw; // rethrow
      }
}
