// console.log("Harry is a hacker")
// console.log("Rohan is a hecker")


// setTimeout(() => {
//     console.log("I am inside settimeout")
// }, 0)
// console.log("The End")

// const fn=()=>{
//     console.log("Nothing")
// }
// const callback = (arg,fn) => {
//     console.log(arg)
// }
// const loadScript = (src, callback) => {
//     let sc = document.createElement("script");
//     sc.src = src;
//     sc.onload = callback("harry",fn)
//     document.head.append(sc)
// }
// loadScript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/prism.min.js", callback)

// function greet(name,callback){
//     console.log("Hello "+name);
//     callback();
// }
// function saybye(){
//     console.log("Goodbye");
// }

// greet("Alex",saybye);

// function fetchdata(callback){
//     setTimeout(()=>{
//         console.log("data fetched");
//         callback();
//     },3000);
// }

// fetchdata(()=>{
//     console.log("Processing data  ...")
// })

// function calculate(a,b,callback){
//     let result=a+b;
//     callback(result);
// }

// calculate(5,3,function(res){
//     console.log("Reslut is : ", res);
// });