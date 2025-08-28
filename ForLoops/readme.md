# FOR LOOPS IN C 
###### This repo contains a simple example of for loops i c  and some of its appplications







## for loop

#### for loops are used when we want to execute a block of code fixed number of times with a given condition.

## structure  of a for loop

#####  a for loop contains 3 main parts which include : initialization , condition and loop/ update.

```c
for (initialization; condition; update) {
    // statements to execute
}
```

### initialization of a for loop

## int i = 0;

* here i  have initialized a iterator named " i " which only runs once and is responsible for setting a starting value of a loop. For instance i've initialized a iterator "i" as 0.
### conditions in a for loop 

## i < 5;

* now ive given a condition , which runs after the iteration and it changes the loop variable so the loop can keep moving.
* as the condition given is i < 5 , which defines the loop that it should keep moving till it reaches 4.


###  increment / decrement or update in a for loop

## i++;

* this part is the most important  , as it describes the way in which a loop should be running. 

* i++ means that the value of i (starting from 0) increases by 1 in each iteration, until it reaches 4 (since the condition i < 5 must be true).

### code :
```C 
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Value of i: %d\n", i);
    }
    return 0;
}
```

### output :
```C 
Value of i: 0
Value of i: 1
Value of i: 2
Value of i: 3
Value of i: 4
```


