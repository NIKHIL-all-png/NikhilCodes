// //Promise.reslove
// let p=Promise.resolve("done");
// p.then((value)=>{
//     console.log(value);
// })


//Promise.reject
// let p=Promise.reject("Error");
// p.catch((error)=>{
//     console.log(error);
// })


//Promise.all
// let p1=Promise.resolve(10);
// let p2=Promise.resolve(20);
// let p3=Promise.resolve(30);

// Promise.all([p1,p2,p3]).then((values)=>{
//     console.log(values)
// })

//promise.allSettled

// let p1=Promise.resolve("ok");
// let p2=Promise.reject("failed");

// Promise.allSettled([p1,p2]).then((results)=>{
//     console.log(results)
// })

//Promise.race

let p1=new Promise(r=> setTimeout(()=> r("fast"),1000));
let p2=new Promise(r=> setTimeout(()=> r("slow"),3000));
Promise.race([p1,p2]).then((result)=>{
    console.log(result)
})