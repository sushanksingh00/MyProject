
var players = ['X', 'O'];
var currentPlayer = players[Math.floor(Math.random() * players.length)];

document.querySelector('#updatee').innerHTML = 'First Player - ' + currentPlayer;

var played_pos = 0;

function updateBoard(button) {
    if (button.innerHTML === '') {
        button.innerHTML = currentPlayer;
        played_pos = played_pos + 1;
        checkWinner();
        currentPlayer = (currentPlayer === 'X') ? 'O' : 'X'; // Toggle player
        document.querySelector('#updatee').innerHTML = 'Current Player - ' + currentPlayer;

    }
}

function checkWinner() {

    const board = [
        document.querySelector('#one').innerHTML,
        document.querySelector('#two').innerHTML,
        document.querySelector('#three').innerHTML,
        document.querySelector('#four').innerHTML,
        document.querySelector('#five').innerHTML,
        document.querySelector('#six').innerHTML,
        document.querySelector('#seven').innerHTML,
        document.querySelector('#eight').innerHTML,
        document.querySelector('#nine').innerHTML
    ];

    const winningCombinations = [
        [0, 1, 2], 
        [3, 4, 5],
        [6, 7, 8], 
        [0, 3, 6], 
        [1, 4, 7], 
        [2, 5, 8], 
        [0, 4, 8], 
        [2, 4, 6]  
    ];

    for (let combination of winningCombinations) { //of choses one by one element itself not index

        const [a, b, c] = combination; //let the chosen one be a b c

        if (board[a] !== '' && board[a] === board[b] && board[a] === board[c]) {
            document.querySelector('#winner').innerHTML = 'Player ' + board[a] + ' Won';
            resetBoard();
            return;
        }

        else if (played_pos == 9){
        	document.querySelector('#winner').innerHTML = "It's a Draw";
        	resetBoard();
        	return;
        }

        

    }

}
function resetBoard() {
    document.querySelectorAll('button').forEach(button => button.innerHTML = '');
    played_pos = 0;
    return;
}


document.querySelector('#one').onclick = function() { updateBoard(this); }
document.querySelector('#two').onclick = function() { updateBoard(this); }
document.querySelector('#three').onclick = function() { updateBoard(this); }
document.querySelector('#four').onclick = function() { updateBoard(this); }
document.querySelector('#five').onclick = function() { updateBoard(this); }
document.querySelector('#six').onclick = function() { updateBoard(this); }
document.querySelector('#seven').onclick = function() { updateBoard(this); }
document.querySelector('#eight').onclick = function() { updateBoard(this); }
document.querySelector('#nine').onclick = function() { updateBoard(this); }