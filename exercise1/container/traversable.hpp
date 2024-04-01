
#ifndef TRAVERSABLE_HPP
#define TRAVERSABLE_HPP

/* ************************************************************************** */

#include <functional>

/* ************************************************************************** */

#include "testable.hpp"

/* ************************************************************************** */

namespace lasd {

/* ************************************************************************** */

template <typename Data>
class TraversableContainer: public TestableContainer {
  // Must extend TestableContainer<Data>

private:

  // ...

protected:

  // ...
  TraverseFun = std::function<void(const Data &)>;
  FoldFunAccumulator = std::function<Accumulator(const Data &, const Accumulator &)>;

public:

  // Destructor
  // ~TraversableContainer() specifiers
  ~TraversableContainer() = default;
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  TraversableContainer& operator=(TraversableContainer& copyElement) & = delete;
  
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  TraversableContainer& operator=(TraversableContainer&& copyElement) & = delete;
  
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types might be possible.
  bool operator==(TraversableContainer& elementComparison) const = delete;

  // type operator!=(argument) specifiers; // Comparison of abstract types might be possible.
  bool operator!=(TraversableContainer& elementComparison) const = delete;

  /* ************************************************************************ */

  // Specific member function

  //using TraverseFun = std::function<void(const Data &)>;

  // type Traverse(arguments) specifiers;
  inline void Traverse(TraverseFun)
  {
    //Da completare?
  }

  //template <typename Accumulator>
  //using FoldFun = std::function<Accumulator(const Data &, const Accumulator &)>;

  // template <typename Accumulator>
  // type Fold(arguments) specifiers;
  template <typename Accumulator>
  inline Accumulator Fold(FoldFunAccumulator<Accumulator>, Accumulator)
  {
    //Da completare
  }

  /* ************************************************************************ */

  // Specific member function (inherited from TestableContainer)

  // type Exists(argument) specifiers; // Override TestableContainer member
  //here we need virtual because of the override on TestableContainer method

  virtual inline bool Exists(Data& element)  //Come argomento vuole un Data di tipo Accumulator?
  {

  }
};

/* ************************************************************************** */

template <typename Data>
class PreOrderTraversableContainer: public TraversableContainer<Data> {
  // Must extend TraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~PreOrderTraversableContainer() specifiers

  ~PreOrderTraversableContainer() = default;

  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  PreOrderTraversableContainer& operator=(PreOrderTraversableContainer& copyElement) & = delete;
  
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  PreOrderTraversableContainer& operator=(PreOrderTraversableContainer&& moveElement) & = delete;
  
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types might be possible.
  bool operator==(PreOrderTraversableContainer& comparisonElement) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types might be possible.
  bool operator!=(PreOrderTraversableContainer& comparisonElement) const = delete;
  /* ************************************************************************ */

  // Specific member function

  // using typename TraversableContainer<Data>::TraverseFun;
  
  // type PreOrderTraverse(arguments) specifiers;
  typename TraversableContainer<Data>::TraverseFun;
  inline void PreOrderTraverse(TraverseFun)
  {

  }

  // template <typename Accumulator>
  // using FoldFun = typename TraversableContainer<Data>::FoldFun<Accumulator>;
  template <typename Accumuator>
  FoldFun = typename TraversableContainer<Data>::FoldFun<Accumulator>;

  // template <typename Accumulator>
  // type PreOrderFold(arguments) specifiers;
  template <typename Accumulator>
  inline Accumulator PreOrderFold(FoldFun<Accumulator>, Accumulator) //il secondo parametro vuole la &? Passaggio per riferimento
  {

  }

  /* ************************************************************************ */

  // Specific member function (inherited from TraversableContainer)

  // type Traverse(arguments) specifiers; // Override TraversableContainer member
  virtual inline Traverse(TraverseFun)
  {

  }

};

/* ************************************************************************** */

template <typename Data>
class PostOrderTraversableContainer: public TraversableContainer<Data> {
  // Must extend TraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~PostOrderTraversableContainer() specifiers
  ~PostOrderTraversableContainer() = default;
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  PreOrderTraversableContainer& operator=(PreOrderTraversableContainer& copyElement) & = delete;
  
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  PreOrderTraversableContainer& operator=(PreOrderTraversableContainer&& copyElement) & = delete;
  
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types might be possible.
  bool operator==(PostOrderTraversableContainer& compElement) const = delete;
  
  // type operator!=(argument) specifiers; // Comparison of abstract types might be possible.
  bool operator==(PostOrderTraversableContainer& compElement) const = delete;
  
  /* ************************************************************************ */

  // Specific member function

  // using typename TraversableContainer<Data>::TraverseFun;

  // type PostOrderTraverse(arguments) specifiers;

  // template <typename Accumulator>
  // using FoldFun = typename TraversableContainer<Data>::FoldFun<Accumulator>;

  // template <typename Accumulator>
  // type PostOrderFold(arguments) specifiers;

  /* ************************************************************************ */

  // Specific member function (inherited from TraversableContainer)

  // type Traverse(arguments) specifiers; // Override TraversableContainer member

};

/* ************************************************************************** */

template <typename Data>
class InOrderTraversableContainer {
  // Must extend TraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~InOrderTraversableContainer() specifiers

  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.

  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.

  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types might be possible.
  // type operator!=(argument) specifiers; // Comparison of abstract types might be possible.

  /* ************************************************************************ */

  // Specific member function

  // using typename TraversableContainer<Data>::TraverseFun;

  // type InOrderTraverse(arguments) specifiers;

  // template <typename Accumulator>
  // using FoldFun = typename TraversableContainer<Data>::FoldFun<Accumulator>;

  // template <typename Accumulator>
  // type InOrderFold(arguments) specifiers;

  /* ************************************************************************ */

  // Specific member function (inherited from TraversableContainer)

  // type Traverse(arguments) specifiers; // Override TraversableContainer member

};

/* ************************************************************************** */

template <typename Data>
class BreadthTraversableContainer {
  // Must extend TraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~BreadthTraversableContainer() specifiers

  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.

  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.

  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types might be possible.
  // type operator!=(argument) specifiers; // Comparison of abstract types might be possible.

  /* ************************************************************************ */

  // Specific member function

  // using typename TraversableContainer<Data>::TraverseFun;

  // type BreadthTraverse(arguments) specifiers;

  // template <typename Accumulator>
  // using FoldFun = typename TraversableContainer<Data>::FoldFun<Accumulator>;

  // template <typename Accumulator>
  // type BreadthFold(arguments) specifiers;

  /* ************************************************************************ */

  // Specific member function (inherited from TraversableContainer)

  // type Traverse(arguments) specifiers; // Override TraversableContainer member

};

/* ************************************************************************** */

}

#include "traversable.cpp"

#endif

