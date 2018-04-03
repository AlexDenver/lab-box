angular.module('grapher',[])
	.controller('handles',function($scope){
		$(document).ready(function(){
			var canvas = $("#draw")[0];
			
			var ctx = canvas.getContext("2d");
			console.log(ctx)
			var img = new Image;
			// img.src = "data:image/png;base64," + myPNGEncoder(r,g,b,a);

			var id = ctx.createImageData(1,1); 
			var d  = id.data;                        
			d[0]   = 255; //r
			d[1]   = 0; //g
			d[2]   = 0; //b
			d[3]   = 0.5; //a
			x=y=1;
			for(i=0;i<100;i++){				
				ctx.fillStyle = "red";
				ctx.fillRect(x+i, y, 1, 1);
				// setPixel(id,x+i,y,255,0,0,0.5);
				// console.log(`x: ${x+i} ${y}`);
				// ctx.putImageData( id, x+i, y );
			}
			
			
		})
	})


function setPixel(imageData, x, y, r, g, b, a) {
    index = (x + y * imageData.width) * 4;
    imageData.data[index+0] = r;
    imageData.data[index+1] = g;
    imageData.data[index+2] = b;
    imageData.data[index+3] = a;
    console.log(imageData);
}