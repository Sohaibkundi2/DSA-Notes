## A vector is similar to an array, but unlike arrays which have a fixed size, vectors are dynamic — they can grow or shrink in size at runtime.

### static vs dynamic memory allocation

- static memory allocate while compile of code but dynamic memory allocate while execution of program

- static stored in STACK memory while dynamic stored in HEAP memory

- fixed size of static while flexible size of dynamic memory.

- examples are...

```
When a vector runs out of capacity to store a new element, it automatically allocates a larger block of memory — usually doubling its capacity — and copies the old elements to the new memory location.
```

## Problem No 136. Single Number

```
    vector<int> nums = {4,1,2,1,2};

       int ans=0;
       for(int val:nums){
        ans= ans^val;
       }

       return ans;
```
