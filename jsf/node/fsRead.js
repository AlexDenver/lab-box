fs = require('fs');
fs.readFile('input.txt',function(err,content) {
	console.log(content.toString());
})
