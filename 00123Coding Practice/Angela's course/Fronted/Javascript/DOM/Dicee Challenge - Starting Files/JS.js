let won_text;
let ran_val1 = Math.floor(Math.random() * 6+1);
let ran_val2 = Math.floor(Math.random() * 6+1);
document.querySelector(".img1").setAttribute("src","./images/dice"+ran_val1 +".png")
document.querySelector(".img2").setAttribute("src","./images/dice"+ran_val2 +".png")
if(ran_val1 === ran_val2)
{
    won_text ="Match draw!"
}
else
{
    won_text = "Player "+ (ran_val1>ran_val2?1:2) +" won";
}
document.querySelector("h2").textContent = won_text

document.querySelector("h1").addEventListener("click",reload)  
// if reload()  that means we call funciton without click
// if  pass function by name means that function referece pass means pass callback fn
function reload() {
    window.location.reload()
}