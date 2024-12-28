// Variables
let userName = "Faseeh" // In JavaScript, name is a special property of many built-in objects. So we can't use it as a variable name.
const G = 6.67 * (10 ** -11);

// Functions
function greet(theName) {
    console.log("Hello " + theName);
    // Return statement is not mandatory.
}

greet(userName);

// Manipulate HTML elements.
document.getElementById("donate-btn").addEventListener("click", function() {
    this.innerText = "Thanks For Your Support!"; // Change the button text.
  });