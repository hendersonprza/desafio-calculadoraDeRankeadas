let heroi = String
let vitorias = Number
let derrotas = Number
var saldoVitorias = Number
var classes = ["Ferro", "Bronze", "Prata", "Ouro", "Diamante", "Lendário", "Imortal"];
function CalcularRank(x, y) {
    let calculado = x - y
    return calculado;
}

heroi = prompt("Herói, por favor, insira seu nome:\n");
vitorias = prompt("Herói " + heroi + ", por favor, insira seu total de vitorias:\n");
derrotas = prompt("Herói " + heroi + ", por favor, insira seu total de derrotas:\n");
saldoVitorias = CalcularRank(vitorias, derrotas)
    if(saldoVitorias < 10){
        console.log(`O Herói ${heroi} tem de saldo ${saldoVitorias}. Está no nível ${classes[0]}`);
    } else if (saldoVitorias > 10 && saldoVitorias <= 20){
        console.log(`O Herói ${heroi} tem de saldo ${saldoVitorias}. Está no nível ${classes[1]}`);
    } else if (saldoVitorias > 20 && saldoVitorias <= 50){
        console.log(`O Herói ${heroi} tem de saldo ${saldoVitorias}. Está no nível ${classes[2]}`);
    } else if (saldoVitorias > 50 && saldoVitorias <= 80){
        console.log(`O Herói ${heroi} tem de saldo ${saldoVitorias}. Está no nível ${classes[3]}`);
    } else if (saldoVitorias > 80 && saldoVitorias <= 90){
        console.log(`O Herói ${heroi} tem de saldo ${saldoVitorias}. Está no nível ${classes[4]}`);
    } else if (saldoVitorias > 90 && saldoVitorias <= 100){
        console.log(`O Herói ${heroi} tem de saldo ${saldoVitorias}. Está no nível ${classes[5]}`);
    } else if (saldoVitorias >= 101){
        console.log(`O Herói ${heroi} tem de saldo ${saldoVitorias}. Está no nível ${classes[6]}`);
    } else {console.log("Não foi possível calcular o nível do herói " + heroi);}


    




