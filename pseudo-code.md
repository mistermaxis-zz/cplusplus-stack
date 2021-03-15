### Stack Data Structure

#### Variables
- capacity: the maximum amount of items the stack can store (in this exercise, the capacity will be 5 items).
- count: the amount of items currently stored in the stack.
- items[]: an array of size *capacity* where the items will be stored.
- item: a variable or value to be pushed to the stack (in this case the type of value will be int).

#### Functions

- is_full: a function to indicate if the *count* is equal to the *capacity*.
- is_empty: a function to indicate if the *count* is equal to zero.
- push(item): a function to push an *item* into the stack.
- pop: a function to remove the *item* at the top of the stack.
- peek(index): a function to show the value stored at index *index* in the stack.
- log: a function to output the contents of the stack, along with other information.