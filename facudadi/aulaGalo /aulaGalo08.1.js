

// a aula de hoje foi mais uma questão de repetição de conhecimentos ja revisados antes
// tomei então a liberdade de ficar brincando com codigos em ia

// Solicita um número de 1 a 10
let numero = Number(prompt("Digite uma nota de 1 a 10:"));

// Verifica a condição
if (numero < 5) {
    alert("Reprovado");
} else if (numero === 5 || numero === 6) {
    alert("Em recuperação");
} else if (numero > 6 && numero <= 10) {
    alert("Aprovado");
} else {
    alert("Digite um número válido de 1 a 10");
}


// Solicita um número de 1 a 10
let numero = Number(prompt("Digite uma nota de 1 a 10:"));

switch (numero) {
    case 1:
    case 2:
    case 3:
    case 4:
        alert("Reprovado");
        break;

    case 5:
    case 6:
        alert("Em recuperação");
        break;

    case 7:
    case 8:
    case 9:
    case 10:
        alert("Aprovado");
        break;

    default:
        alert("Digite um número válido de 1 a 10");
}


