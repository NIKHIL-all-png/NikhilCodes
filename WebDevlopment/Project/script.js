// Hamburger menu functionality
const hamburger = document.getElementById("hamburger");
const navList = document.getElementById("nav-list");

hamburger.addEventListener("click", () => {
    navList.classList.toggle("nav-active");
});

// Form submission
document.getElementById("loginForm").addEventListener("submit", function (event) {
    event.preventDefault();
    
    // Get the user input data
    const name = document.getElementById("name").value;
    const rollno = document.getElementById("rollno").value;
    const branch = document.getElementById("branch").value;
    const year = document.getElementById("year").value;

    // Redirect to another page after submission with college info
    window.location.href = `college.html?name=${name}&rollno=${rollno}&branch=${branch}&year=${year}`;
});
