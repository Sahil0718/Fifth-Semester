function celsiusToFahrenheit(celsius) {
    var fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

function convert() {
    var celsiusInput = document.getElementById("celsiusInput").value;

    // Check if the input is valid
    if (celsiusInput !== null && celsiusInput !== "") {
        var celsiusValue = parseFloat(celsiusInput);

        // Check if the input is a valid number
        if (!isNaN(celsiusValue)) {
            // Convert Celsius to Fahrenheit
            var fahrenheitValue = celsiusToFahrenheit(celsiusValue);
            document.getElementById("result").innerText = celsiusValue + " degrees Celsius is equal to " + fahrenheitValue + " degrees Fahrenheit.";
        } else {
            document.getElementById("result").innerText = "Invalid input. Please enter a valid number for Celsius temperature.";
        }
    } else {
        document.getElementById("result").innerText = "No input provided. Please enter a valid number for Celsius temperature.";
    }
}
