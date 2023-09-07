 # Lexical environment
## scope 
- where we can access a variable or function in our program
- scope depend on lexical environment

## Lexical Environment
- ### Lexical environment is the local memory along with lexical environment of it's parent.
- whenever a Execution Context is created a lexical environment is created
- ### lexical == hierarchy == sequence
```
function a()
{
    b =10;

    function c() // c() lexically seating inside a() function and have reference to it's lexical env.
    {

    }
}
```

## Scope chaining 
- child have ref to parent env and parent have it's parent env and so on. It's called scope chaining.


### Simply sum up we have access of outer environment inside inner env

<img src="./lexical.jpg">