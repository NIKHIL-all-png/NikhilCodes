let btn = document.getElementById("btn")

btn.addEventListener("click", () => {
    document.querySelector(".box").innerHTML = "<b> Yayy yoy were Clicked </b> Enjoy your clicked"
})

btn.addEventListener("contextmenu", () => {
    document.querySelector(".box").innerHTML = "<b> Yayy yoy were Clicked </b> Enjoy your clicked"
})
document.addEventListener("keydown", (e) => {
    console.log(e.key,e.keyCode)
})