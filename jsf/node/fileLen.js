var fs = require('fs');
var len = 0;
fs.readFile('mynewfile.txt',function(err,file) {
	if (err) throw err; 		
	content = file.toString();
	// for (var i = 0; i <= content.length; i++) {		
	// 	if(content[i]=='\n')
	// 		count++;
	// };
	len = content.split('\n');

	console.log("There are ",(len.length), " Lines and ", content.length, " characters in the given file.");
})
