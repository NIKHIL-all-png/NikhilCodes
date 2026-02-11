let random=Math.random()
console.log(random)
let a=Number(prompt("Enter first number"))
let c=prompt("Enter operation")
let b=Number(prompt("Enter enter second number"))
let obj={
    "+":"-",
    "*":"+",
    "-":"/",
    "/":"**"
}
if(random>0.1){
    //perform correct operation
    console.log(`The result is ${eval(`${a} ${c} ${b}`)}`)
    alert(`The result is ${eval(`${a} ${c} ${b}`)}`)
}
else{
    //perform wrong operation
    c=obj[c]
    alert(`The result is ${eval(`${a} ${c} ${b}`)}`)
}