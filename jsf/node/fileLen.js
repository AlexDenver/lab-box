var fs = require('fs');
var count = 0;
fs.readFile('mynewfile.txt',function(err,file) {
	if (err) throw err; 		
	content = file.toString();
	for (var i = 0; i <= content.length; i++) {		
		if(content[i]=='\n')
			count++;
	};
	console.log("There are ",count+1, " Lines and ", content.length, " characters in the given file.");
})
