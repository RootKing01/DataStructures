
#ifndef CONTAINER_HPP
#define CONTAINER_HPP

/* ************************************************************************** */
#include <functional>

namespace lasd {

/* ************************************************************************** */

class Container {

private:

  // ...

protected:

  // ...
  ulong containerSize;

  /* ************************************************************************ */
  // Default constructor
  // Container() specifiers;
  Container() = default;

public:

  // Destructor
  // ~Container() specifiers

  ~Container() = default;

  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  Container& operator=(const Container& assignementContainer) & = delete;

  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  Container& operator=(Container&& assignementContainer) & = delete;
  
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(const Container& comparedElement) const = delete; //const al posto di &?
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(const Container& comparedElement) & = delete; //const al posto di &?
  /* ************************************************************************ */

  // Specific member functions

  // type Empty() specifiers; // (concrete function should not throw exceptions)
  virtual inline bool Empty() const noexcept
  {
    return Container::containerSize == 0;
  }
  // type Size() specifiers; // (concrete function should not throw exceptions)
  virtual inline ulong Size() const noexcept
  {
    return Container::containerSize;
  }
};

/* ************************************************************************** */

class ClearableContainer: public Container {
  // Must extend Container

private:

  // ...

protected:

  // ...
  //ClearableContainer() = default; No constructor because it extends Container?
public:

  // Destructor
  // ~ClearableContainer() specifiers
  ~ClearableContainer() = default; 
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  ClearableContainer& operator=(const ClearableContainer& copyElement) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  ClearableContainer& operator=(ClearableContainer&& moveElement) & = delete;
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(const ClearableContainer& comaparisonElement) const = delete; 
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(const ClearableContainer& comparisonElement) const = delete;
  /* ************************************************************************ */

  // Specific member functions

  // type Clear() specifiers;
  virtual inline void Clear()
  {

  }  // = 0; //Not equal 0?

};

/* ************************************************************************** */

class ResizableContainer: public ClearableContainer {
  // Must extend ClearableContainer

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~ResizableContainer() specifiers
  ~ResizableContainer() = default;
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  ResizableContainer& operator=(const ResizableContainer& copyElement) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  ResizableContainer& operator=(ResizableContainer&& moveElement) & = delete;
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(const ResizableContainer& comparisonElement) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(const ResizableContainer& comparisonElement) const = delete;
  /* ************************************************************************ */

  // Specific member functions

  // type Resize(argument) specifiers;
  virtual inline void Resize(ulong dimensionResize) //no virtual because only in overridings?
  {
    ResizableContainer::containerSize = dimensionResize;
  }
  /* ************************************************************************ */

  // Specific member function (inherited from ClearableContainer)

  // type Clear() specifiers; // Override ClearableContainer member
  
  inline void  Clear() //doesn't work with override
  {
    ResizableContainer::containerSize = 0;
  }
};

/* ************************************************************************** */

}

#endif
