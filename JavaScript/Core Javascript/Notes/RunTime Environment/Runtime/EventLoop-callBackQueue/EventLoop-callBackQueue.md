## Event loop

js engine has stack and heap

- stack --> execution context
- heap --> memory allocation

we have event loop and callback queue out of js engine.
that's actually JS runtime environment.

#### The Call Stack
##### one thread == one call stack == one thing at a time
anything inside Stack execute quickly without wait..
<hr>

js file itself main function or anonymous function 

#### synchronous
when code is synchronous if we do request then wait  for respond
make code execution slow....

#### Why synchronous problem 
because we run synchronous js code in browser,then until that request not completed,
the browser stuck and not even can perform any operation in browser like not work click btn, scroll etc.

#### solution is asynchronous callback
js give callback function to runtime api that api do that work and 
when js engine stack free then event loop pop CBF from queue and push to stack 
finally CBF execution done by js engine.

- Threading and other stuff hiding by running c++ program
- Web api written in c++

#### Concurrency & the event loop

{v8} js engine do one thing at a time but web browser have apis and js engine access them.
That web browser apis concurrency kick in || put in 


##### asynchronous code goes to web apis
##### when asynchronous code complete assigned task {like setTimeout()} or match satisfied condition {like respond receive or user click} then that code push to callback queue

note : promise and event callback has higher priority then other. they goes to microtask queue that run push to stack first and other goes to callback 


# Event loop

##### Its job is to look at stack and task queue or callback queue continuously. when stack is empty then take first thing from callback queue and push to stack.
example --> http request, event, setTimeout()

setTimeout() --> not guarantee to run code in given time that is minimum time to get executed.
it take more time depends on situation.

# Images 

## Browser
1<img src="../../assets/EventLoop/1.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

## JS Engine

2<img src="../../assets/EventLoop/2.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

3<img src="../../assets/EventLoop/3.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

4<img src="../../assets/EventLoop/4.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

5<img src="../../assets/EventLoop/5.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

6<img src="../../assets/EventLoop/6.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

7<img src="../../assets/EventLoop/7.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

8<img src="../../assets/EventLoop/8.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

9<img src="../../assets/EventLoop/9.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

10<img src="../../assets/EventLoop/10.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

11<img src="../../assets/EventLoop/11.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

12<img src="../../assets/EventLoop/12.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

13<img src="../../assets/EventLoop/13.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

14<img src="../../assets/EventLoop/14.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

15<img src="../../assets/EventLoop/15.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

16<img src="../../assets/EventLoop/16.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

17<img src="../../assets/EventLoop/17.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

18<img src="../../assets/EventLoop/18.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

19<img src="../../assets/EventLoop/19.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

20<img src="../../assets/EventLoop/20.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

21<img src="../../assets/EventLoop/21.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

22<img src="../../assets/EventLoop/22.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

23<img src="../../assets/EventLoop/23.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

24<img src="../../assets/EventLoop/24.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

25<img src="../../assets/EventLoop/25.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

26<img src="../../assets/EventLoop/26.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

27<img src="../../assets/EventLoop/27.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

28<img src="../../assets/EventLoop/28.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

29<img src="../../assets/EventLoop/29.jpg" alt="" style="width:500px; margin:0 100px"/> <br>

30<img src="../../assets/EventLoop/30.jpg" alt="" style="width:500px; margin:0 100px"/> <br>