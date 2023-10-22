var currentSection = "home";
function toggleVisibility(id) {
  var element = document.getElementById(id);
  var currentElement = document.getElementById(currentSection);
  if (currentSection === id) {
    element.style.display = "none";
    document.getElementById("home").style.display = "block";
    currentSection = "home";
  } else {
    currentElement.style.display = "none";
    element.style.display = "block";
    currentSection = id;
  }
}
function showHome() {
  var currentElement = document.getElementById(currentSection);
  currentElement.style.display = "none";
  document.getElementById("home").style.display = "block";
  currentSection = "home";
}
