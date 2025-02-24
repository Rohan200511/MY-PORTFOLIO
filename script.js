document.addEventListener("DOMContentLoaded", function () {
    const menu = document.getElementById("menu");
    const openMenu = document.getElementById("open-menu");
    const closeMenu = document.getElementById("close-menu");

    openMenu.addEventListener("click", function () {
        menu.classList.add("show");
    });

    closeMenu.addEventListener("click", function () {
        menu.classList.remove("show");
    });

    // Contact Form Validation
    document.getElementById("contactForm").addEventListener("submit", function (e) {
        e.preventDefault();
        const name = document.getElementById("name").value.trim();
        const email = document.getElementById("email").value.trim();
        const message = document.getElementById("message").value.trim();

        if (name === "" || email === "" || message === "") {
            alert("Please fill in all fields.");
        } else {
            alert("Message sent successfully!");
            this.reset();
        }
    });
});
