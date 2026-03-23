
// mais tempo em funções basicas

function soma(a, b) {
  return a + b;
}

let result0 = soma(2, 4);

console.log ("o resultado da soma é ", result0);

// exemplo de arrow function

function multipli(a, b) {
  return a * b;
}

console.log ("o resultado da multiplicação é ", multipli(2, 4));

// função ainda mais simples usando const
const root = n => n * n;
console.log ("a raiz de 4 é ", root(4));


// exemplo de callback function

function processarUsuario(nome, callback){
  console.log ("processando o usuario" + nome);
  callback();

}

// o callback
function finalizar(){
  console.log ("processamento finalizado")
}  

processarUsuario("gleidson", finalizar)

