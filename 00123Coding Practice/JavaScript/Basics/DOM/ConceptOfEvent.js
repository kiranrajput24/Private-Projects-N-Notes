//  Demo it work .....   higher order function 
function anotherEventListener(evt,callback)
{
    // dedect event
    var e = {
        name:evt,
        duration: 2,
        key:"k"
    }
    if(evt === "k")
    {
        callback(e);
    }
}

anotherEventListener("k",(e)=>{
    console.log(e)
})