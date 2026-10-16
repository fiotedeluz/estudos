const display = document.getElementById("display")
const buttons = document.querySelectorAll(".btn")

let currentInput = "";
let previusInput = "";
let operator = "";
let result = 0;
let shouldResetDisplay = false;

buttons.forEach(buttons => {
    button.addEventListener("click",()=>{
        const value = button.dataset.value;

        if(!value){
            if (button.id === "clear") clearDisplay();
            if (button.id === "calculate") calculate();
            return;
        }

        if (["+", "-", "*", "/"].includes(value)) {
            setOperator(value);
        }

    })
});

function updateDisplay() {
    display.innerText = currentInput || "0";
}

function appendNumber(number){
    if(currentInput.includes(".") && number === ".") return;
    currentInput += number;
    updateDisplay()
}

function setOperator(op){
    if (currentInput ==="") return;
    operator = op;
    previusInput = currentInput;
    currentInput ="";
}

function clearDisplay() {
    currentInput = "";
    previusInput = "";
    operator = "";
    updateDisplay();
}

function calculate(){
    //alert("calculate");
    if(previusInput === "" || currentInput === "") return;
    const num1 = parseFloat(previusInput);
    const num2 = parseFloat(currentInput);
    //allert(num1 + 1 1 + num2);
    switch(operator){

    case "+": result = num1 + num2; break
    case "-": result = num1 - num2; break
    case "*": result = num1 * num2; break
    case "/": result = num1 / num2; break
    default: return;

    }

    currentInput = result;
    previusInput = "";
    operator = "";
    updateDisplay();
}