setTimeout(() => {
    console.log("Timer");
},5000)

function x(param){
    console.log("x fn");
    param()
}

x(function(){
    console.log("y fn");
})