function HouseKeeper(name,age,exp)
{ this.name = name;
    this.age = age;
    this.exp = exp;
    this.cleanup = function(){
        console.log("clean")
    }
}
let houseKeeper1 = new HouseKeeper("shuman",23,4)
let houseKeeper2 = new HouseKeeper("shuman",23,4)
let houseKeeper3 = new HouseKeeper("shuman",23,4)


console.log(houseKeeper1,houseKeeper2,);
houseKeeper3.cleanup()