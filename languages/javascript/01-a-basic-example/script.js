document.getElementById("donate-btn").addEventListener("click", function() {

     // Remove the button on click.
    this.remove();

    // Change text.
    document.getElementById("donate-h").innerText = "Thanks!";
    document.getElementById("donate-p").innerText = "Your donation means a lot to us. You are now a part of our community!";
  });
