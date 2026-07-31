console.log(myCanvas); // the thing with HTML ids is that, if they are valid javascript variable names, you can use them directly in code without using
                       // document.getElementById voodoo  - Tsoding 2026


const CANVAS_WIDTH = 500;
const CANVAS_HEIGHT = 500;
const BG = "black";
const FPS = 30;

// setting the dimensions of the canvas
myCanvas.width = CANVAS_WIDTH;
myCanvas.height = CANVAS_HEIGHT;

// a drawing context, which is basically the API you use to draw things onto the canvas
let ctx = myCanvas.getContext("2d");
console.log(ctx);




let refresh = () => {
    // clearing the canvas
    ctx.clearRect(0, 0, CANVAS_WIDTH, CANVAS_HEIGHT);
    
    // filling the canvas with a black color
    ctx.fillStyle = BG;
    ctx.fillRect(0, 0, CANVAS_WIDTH, CANVAS_HEIGHT)

    // let's draw a rectangle
    ctx.fillStyle = "#004400"; // this sets the color of the paint brush to green
    ctx.fillRect(100, 200, 50, 50);
    
    // let's draw the outline of a rectangle
    ctx.lineWidth = 2;
    ctx.strokeStyle = "#aa00aa";
    ctx.strokeRect(100, 20, 50, 50);

    // let's make a triangle
    // you make custom shapes using the beginPath method
    ctx.strokeStyle = "#453256";
    ctx.lineWidth = 10; // setting the line width
    ctx.beginPath();
    ctx.moveTo(200, 200); // setting up the turtle
    ctx.lineTo(300, 200);
    ctx.lineTo(250, 100);
    ctx.lineTo(200, 200);
    ctx.stroke();

    // let's draw a circle
    ctx.strokeStyle = "#a89b32";
    ctx.beginPath()
    ctx.arc(300, 400, 50, 0, Math.PI * 2);
    ctx.stroke();
    
    // let's draw some text
    ctx.fillStyle = "#454545";
    ctx.font = "italic 25px sans-serif";
    ctx.fillText("Hello there", 100, 300);

    setTimeout(refresh, 1000 / FPS);
}

setTimeout(refresh, 1000 / FPS);
