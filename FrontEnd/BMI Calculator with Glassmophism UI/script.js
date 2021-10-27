var weight = document.getElementById("weightInput");
var woutput = document.getElementById("weightVal");
woutput.innerHTML = weight.value;

weight.oninput = function() {
    woutput.innerHTML = this.value;
}
var height = document.getElementById("heightInput");
var houtput = document.getElementById("heightVal");
houtput.innerHTML = height.value;

height.oninput = function() {
    houtput.innerHTML = this.value;
}

function bmi(){
    var weight = document.getElementById('weightInput').value,
        cm = parseInt(document.getElementById('heightInput').value),
        height = cm*0.01,
        bmioutput = document.getElementById('bmioutput'),
        formula = ~~(weight/(height*height)),
        category = ''
    if (formula <= 18.5){
      category = 'Underweight'
    } else if (18.5 <= formula && formula < 25){
      category = 'Normal Weight'
    } else if (25 <= formula && formula < 30){
      category = 'Overweight'
    } else if (30 <= formula && formula < 75){
      category = 'Obese'
    }else if (formula >= 75){
      category = 'GET HELP!'
    }
    bmioutput.innerHTML = '<span>'+formula+'</span>'
    catoutput.innerHTML = '<h2>'+category+'</h2>'
  }
  bmi()

  document.addEventListener('DOMContentLoaded', function(){

	var cursor = document.createElement('div');
	var cursorPoint = document.createElement('div');

	cursor.classList.add('cursor');
	cursorPoint.classList.add('cursor-point');

	cursor.appendChild(cursorPoint);
	document.body.appendChild(cursor);

	var cursorPoint = document.querySelector('.cursor-point');

	document.addEventListener('mousemove', function(e){
		cursorPoint.setAttribute("style", "top: " + e.clientY + "px; left: " + e.clientX + "px");
	});

	document.addEventListener('click', function(e){
		cursorPoint.classList.add("cursor-click");
		setTimeout(function(){
				cursorPoint.classList.remove("cursor-click");
		}, 450);
	});
	
});

var before_loadtime = new Date().getTime();  
     window.onload = Pageloadtime;  
     function Pageloadtime() {  
         var aftr_loadtime = new Date().getTime(); 
         pgloadtime = (aftr_loadtime - before_loadtime) / 1000
  
         document.getElementById("loadtime").innerHTML =pgloadtime ;
     }   

     document.body.style.cursor = 'none';
