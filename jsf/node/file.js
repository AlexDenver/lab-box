var fs = require("fs");  
var data = fs.readFileSync('inaput.txt')
	.then(function(err,d) {
		console.log(err);
		console.log(data);
	})
console.log(data.toString()); 
 
console.log("Program Ended");   

// var fs = require("fs");  
// fs.readFile('input.atxt', function (err, data) {  
//  if (err) throw err;  
//  console.log(data.toString());  
 
// });  
//   console.log("Program Ended");  