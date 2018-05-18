var id1;
var id2;
var id3;
var width = 250;
var width2 = 450;
var position=425;
var position1=425;
var top1=300;
var topleft=false;
var topright=false;
var bottomleft=false;
var bottomright=false;
var pilka_pozycja_y=;
var pilka_pozycja_x=;

//------------------------sterowanie klawiatura--------------------------------
setInterval(mk,10);

function mk()
{

  var elem = document.getElementById("pasek");
    var elem1 = document.getElementById("pasek2");

  if ((topleft==true) && (elem.offsetLeft> 5))
  {
    elem.style.left = elem.offsetLeft  - 10 + 'px';
  }

  else if(topright==true && elem.offsetLeft<840 )
  {
    elem.style.left = elem.offsetLeft  +10 + 'px';
  }

  if (bottomleft==true && elem1.offsetLeft> 5)
  {
    elem1.style.left = elem1.offsetLeft  -10 + 'px';
  }

  else if(bottomright==true && elem1.offsetLeft<840 )
  {
    elem1.style.left = elem1.offsetLeft  +10 + 'px';
  }
}


window.addEventListener('keydown', function(event){
    if (event.keyCode==37)
    {
      topleft=true;
    }
    else if (event.keyCode==39)
    {
      topright=true;
    }
    else if (event.keyCode==65)
    {
      bottomleft=true;
    }
    else if (event.keyCode==68)
    {
      bottomright=true;
    }

});

window.addEventListener('keyup', function(e)
{
  if(e.keyCode==37)
  {
    topleft=false;
  }
  else if (e.keyCode==39)
  {
    topright=false;
  }

  else if (e.keyCode==65)
  {
    bottomleft=false;
  }

  else if (e.keyCode==68)
  {
    bottomright=false;
  }

}
)

document.getElementById("lewo").addEventListener("mouseover", turnleft);
document.getElementById("lewo").addEventListener("mouseout", stop);
document.getElementById("prawo").addEventListener("mouseover", turnright);
document.getElementById("prawo").addEventListener("mouseout", stop);

document.getElementById("start").addEventListener("onclick", start);

document.getElementById("lewo1").addEventListener("mouseover", turnleft1);
document.getElementById("lewo1").addEventListener("mouseout", stop);
document.getElementById("prawo1").addEventListener("mouseover", turnright1);
document.getElementById("prawo1").addEventListener("mouseout", stop);


//---------------------------pierwsza platforma---------------------------

function turnright() {
    var elem = document.getElementById("pasek");



     id1 = setInterval(frame, 1);
    function frame() {
		console.log('dzialawlewo');
        if (position >= 850) {
            clearInterval(id1);
        } else {
            position++;
            elem.style.left = position + 'px';

        }
    }
}

function turnleft() {
    var elem = document.getElementById("pasek");

    id2 = setInterval(frame, 1);
    function frame() {

        if (position <= 0) {
            clearInterval(id2);
        } else {
            position--;console.log('dzialawprawo');
            elem.style.left = position + 'px';


        }
    }
}

//------------------------druga platforma---------------------------
function turnright1() {

    var elem1=document.getElementById("pasek2");


     id1 = setInterval(frame, 1);
    function frame() {
		console.log('dzialawlewo');
        if (position1 >= 850) {
            clearInterval(id1);
        } else {
            position1++;

            elem1.style.left = position1 + 'px';
        }
    }
}

function turnleft1() {

    var elem1=document.getElementById("pasek2");
    id2 = setInterval(frame, 1);
    function frame() {

        if (position1 <= 0) {
            clearInterval(id2);
        } else {
            position1--;
            console.log('dzialawprawo');

            elem1.style.left = position1 + 'px';

        }
    }
}

//---------------------------poruszanie kulki-----------------------




function kulka() {
    var elem = document.getElementById("kulka");

    id3 = setInterval(frame, 1);
    function frame() {

        if (top1 <= 0 && (position>350) && (position<550)) {
            top1++;
            elem.style.top=top1+ 'px';
        }

        else

        {
                top1--;
			         console.log('dziala');
               elem.style.top = top1 + 'px';
        }

    }
}

function stop(){
clearInterval(id1);
clearInterval(id2);
}
