var hr,min,sec;

function setup() {
  createCanvas(800,400);
 

  hr=hour();
  min=minute();
  sec=second();
}

function draw() {
  background(255,255,255);  
  angleMode(DEGREES);

  textSize(24);
  fill("red");
  text('Current minute: \n' + min , 400, 200);
  text('Current second: \n' + sec , 200, 200);
  text('Current hour: \n' + hr , 600, 200);



  secAngle=map(sc,0,60,0,360);
  minAngle=map(sc,0,60,0,360);
  hrAngle=map(sc,0,60,0,360);

  strokeWeight(7);
  stroke("red")
  line(0,0,100,0)

  drawSprites();
}