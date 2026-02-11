// console.log('This is promises');

// // let prom1=new Promise((resolve,reject)=>{
// //     setTimeout(()=>{
// //         console.log("yes i am done")

// //         resolve("Harry")

// //     },3000)
// // })

// let prom1=new Promise((resolve,reject)=>{
//     let a=Math.random();
//     if(a<0.5){
//         reject("No random number was not upporting u")
//     }
//     else{
//         setTimeout(()=>{
//         console.log("Yes I m done")
//         resolve("Harry")
//     },3000)
//     }
// })
// prom1.then((a)=>{
//     console.log(a,"i ")
// }).catch((err)=>{
//     console.log(err)
// })

// let prom1=new Promise((resolve,reject)=>{
//     resolve(10);
// })
// prom1.then((value)=>{
//     console.log(value);
//     return value+5;
// })
// .then((value)=>{
//     console.log(value);
//     return value*2;
// })
// .then((value)=>{
//     console.log(value);
// });
