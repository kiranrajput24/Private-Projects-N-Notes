# Operator
## Truthy
- true
- 1
- "0" string with 0
- 'false' string 
- " " space in string
- {} empty object
- [] empty array
- function() {}  empty function

## Falsy
- false
- 0
- "" empty string
- null 
- undefined
- NaN

## Logical AND OR
execute left to right

#### AND
first falsy value return and stop evaluate
if all truthy values than return last value.
#### OR
first truthy value return and stop evaluate
if all falsy values than return last value.