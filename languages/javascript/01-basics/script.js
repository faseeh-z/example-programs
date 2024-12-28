// Variables
let userName = "Faseeh"; // In JavaScript, name is a special property of many built-in objects. So we can't use it as a variable name.
const G = 6.67 * (10 ** -11);

// Functions
function greet(theName) {
    console.log("Hello " + theName);
    // Return statement is not mandatory.
}

greet(userName);

document.getElementById("donate-btn").addEventListener("click", function() {

     // Remove the button on click.
    this.remove();

    // Change text.
    document.getElementById("donate-h").innerText = "Thanks!";
    document.getElementById("donate-p").innerText = "Your donation means a lot to us. You are now a part of our community!";
  });
