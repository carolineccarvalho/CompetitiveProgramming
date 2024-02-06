# STL
A set of tools (template) available in c++ programming platforms, it's important for you code more quickly, efficiently and in generic way.

# Why quickly?
Because there are already implementation of those data structures that you could need to. For example: ordering some queue.

# Why generic?
Because you don't have a implementation at a particular way.
Example: with a stack, it doesn't matter if you will put string, char or int, it will work anyway;

# Why efficiently?
Because c++ stl have a compile-time polymorphism.

# What is generic program?
Data types not specified way in implementation, but rather in its use.

Example:
template <typename T>
T area (T width, T height){
    T result =   width * height;
}

# What are the components of stl?
Containers: data structures that allow you to store and organize multiple elements of the same or different types. These containers offer various functionalities, such as dynamic memory management, automatic resizing, efficient insertion, deletion, and retrieval of elements. 
Iterators: an iterator is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container. They can be visualised as something similar to a pointer pointing to some location and we can access content at that particular location using them.
Algorithms: they are operations that act on the containers via the iterator concept. 
Functors: they are objects that can be treated as though they are a function or function pointer.

example: 

// A C++ program uses transform() in STL to add 
// 1 to all elements of arr[]
#include <bits/stdc++.h>
using namespace std;
  
int increment(int x) {  return (x+1); }
  
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    // Apply increment to all elements of
    // arr[] and store the modified elements
    // back in arr[]
    transform(arr, arr+n, arr, increment);
  
    for (int i=0; i<n; i++)
        cout << arr[i] <<" ";
  
    return 0;
}
