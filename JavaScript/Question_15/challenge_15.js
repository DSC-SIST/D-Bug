function draw()
  {
  var ctx = document.getElementById("myCanvas").getContext("2d");
  var counter = 0;
  for (var i=0;i<6;i++)
  {
  for (var j=0;j<6;j++)
  {
  //Start from white and goes to black
  ctx.fillStyle = "rgb(" + Math.floor(25-42.5*i) + "," + Math.floor(255-4.5*i) +
   + Math.floor(5-42.5*j) + ")";
ctx.beginPath();
  if (i === counter && j === counter)
  {
  //creates the circles
  ctx.arc(25+j*20,30+i*0,20,0,Math.PI*2,true);
  ctx.fill();
  //creates a border around the circles so white one will be vissible
  ctx.stroke();
  } 
  }
  counter++;
  }
  }
draw();
  