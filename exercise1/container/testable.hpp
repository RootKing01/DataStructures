
#ifndef TESTABLE_HPP
#define TESTABLE_HPP

/* ************************************************************************** */

#include "container.hpp"

/* ************************************************************************** */

namespace lasd {

/* ************************************************************************** */

template <typename Data>
class TestableContainer : public Container{
  // Must extend Container

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~TestableContainer() specifiers
  ~TestableContainer() = default; 
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  TestableContainer& operator=(const TestableContainer& copyElement) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  TestableContainer& operator=(TestableContainer&& moveElement) & = delete;
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(TestableContainer& comparisonElement) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(TestableContainer& comparisonElement) const = delete;
  /* ************************************************************************ */

  // Specific member function

  // type Exists(argument) specifiers; // (concrete function should not throw exceptions)
  void inline bool Exists(Data element) const noexcept
  {
    if !(element)
      return false;
    else
      return true;
  }

  //not too shure about this function
};

/* ************************************************************************** */

}

#endif
