const win =[
    [1,2,3],
    [4,5,6],
    [7,8,9],
    [1,4,7],
    [2,5,8],
    [3,6,9],
    [1,5,9]
    [3,5,7]

];

const daba = document.querySelectorAll(".daba");
const status = document.querySelector("#status");
const reset = document.querySelector("#reset");


const xicon= '<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 100 100" fill="none" stroke="#A6D8FD" stroke-width="10" stroke-linecap="round"><line x1="20" y1="20" x2="80" y2="80" /><line x1="80" y1="20" x2="20" y2="80" /> '
const oicon = '<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 100 100" fill="none" stroke="#FFB6FB" stroke-width="10"><circle cx="50" cy="50" r="30" />'


let khali = ["","","","","","","","","",];

let player = ["X"];
let running = false;



function start(){
    daba.forEach(daba => daba.addEventListener("click", daba_dia));

    

    reset(reset => reset.addEventListener("click",restart-kardo))

    status.textContent = `${currentPlayer}'s Turn`;
    running = true;

}

function daba_dia(){
    const dabemekya = this.getAttribute("data-index");

    if(options[dabemekya] != "" || !running){
        return;
    }

    updatedaba (this, dabemekya);
    konjita();
}
function updatedaba(daba, index){
    options[index] = currentPlayer;

    
    if (currentPlayer === "X") {
        daba.innerHTML = '<img src="x.svg" alt="X" style="width: 90px; height: 90px;">';
    } else {
        daba.innerHTML = '<img src="o.svg" alt="O" style="width: 90px; height: 90px;">';
    }
}

function konjita(){
    let roundWon = false;


    for(let i = 0; i < win.length; i++){
        const condition = win[i];
        const dabaA = options[condition[0]];
        const dabaB = options[condition[1]];
        const dabaC = options[condition[2]];

        if(dabaA == "" || dabaB == "" || dabaC == ""){
            continue;
        }
        if(dabaA == dabaB && dabaB == dabaC){
            roundWon = true;
            break;
        }
    }

    if(roundWon){
        status.textContent = `${currentPlayer} Wins!`;
        running = false; 
    }
    else if(!options.includes("")){
        status.textContent = `Draw!`; 
        running = false;
    }
    else{
        changePlayer();
    }


    }


    function changePlayer(){
    currentPlayer = (currentPlayer == "X") ? "O" : "X";
    status.textContent = `${currentPlayer}'s Turn`;
}


function restartGame(){
    currentPlayer = "X";
    options = ["", "", "", "", "", "", "", "", ""];
    status.textContent = `${currentPlayer}'s Turn`;
    daba.forEach(daba => daba.textContent = ""); 
    running = true;
}