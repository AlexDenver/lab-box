var fs = require("fs");  
var data = fs.readFileSync('inaput.txt')
console.log(data.toString()); 
 
console.log("Program Ended");   

// var fs = require("fs");  
// fs.readFile('input.atxt', function (err, data) {  
//  if (err) throw err;  
//  console.log(data.toString());  
 
// });  
//   console.log("Program Ended");  